#include<cstdio>
#include<iostream>
#include<cmath>


using namespace std;

float calc_p(int i, float p)
{

    float mult = 1;
    while(i!=0)
    {

        i--;
        mult = mult * (p+i);


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
    scanf("%d",&sz);
    float y_val[sz][sz];
    float x_val[sz];
     for(int i=0; i<sz; i++)
     {

         scanf("%f",&x_val[i]);

     }

     for(int j=0; j <sz; j++)
     {
         scanf("%f",&y_val[0][j]);
     }

     for(int j=1; j<sz; j++)
     {
         for(int i=1; i<sz; i++)
         {

             y_val[i][j] = y_val[i-1][j]- y_val[i-1][j-1];

         }

     }

     float x;
     scanf("%f",&x);

     float p = (x - x_val[sz-1])/(x_val[1]-x_val[0]);


     float sum;

     sum = y_val[0][sz-1]+ (p* y_val[1][sz-1]);



    for(int i=2;i<sz;i++){

        sum = sum + ((calc_p(i,p) * y_val[i][sz-1])/factorial(i));

    }

    printf("%f \n",sum);






}





