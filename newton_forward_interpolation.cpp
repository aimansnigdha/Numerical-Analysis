#include<cstdio>
#include<iostream>
#include<cmath>


using namespace std;

int calc_p(int i, int p)
{

    int mult = 1;
    while(i!=0)
    {

        i--;
        mult = mult * (p-i);


    }

    return mult;
}

int factorial(int n)
{
    int mult = 1;
    for(int i=1; i<=n; i++)
    {
        mult = mult * i;

    }
    return mult;

}

int main()
{
    int sz;
     int x_val[5];


     scanf("%d",&sz);
     int y_val[sz][sz];

     for(int i=0; i<sz; i++)
     {

         scanf("%d",&x_val[i]);

     }

     for(int j=0; j <sz; j++)
     {
         scanf("%d",&y_val[0][j]);
     }

     for(int j=1; j<sz; j++)
     {
         for(int i=1; i<sz; i++)
         {

             y_val[i][j] = y_val[i-1][j]- y_val[i-1][j-1];

         }

     }

     int x;
     scanf("%d",&x);

     int p = (x - x_val[0])/(x_val[1]-x_val[0]);

     float sum;

     sum = y_val[0][0]+ (p* y_val[1][1]);



    for(int i=2;i<sz;i++){

        sum = sum + ((calc_p(i,p) * y_val[i][i])/factorial(i));

    }

    printf("%f \n",sum);






}





