#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

float top(float x_val[], float x, int sz, int it)
{

    float result = 1.00;

    for(int i=0; i<sz; i++)
    {
        if(it!=i)
        {
            result = result * (x - x_val[i]);
        }

    }
    return result;

}


float bottom(float x_val[], float x, int sz, int it)
{

    float result = 1;

    for(int i=0; i<sz; i++)
    {
        if(it!=i)
        {
            result = result * (x_val[it] - x_val[i]);
        }

    }
    return result;

}


int main()
{

    int sz;
    scanf("%d",&sz);
    float x_val[sz];
    float y_val[sz];
    for(int i=0; i<sz; i++)
    {
        scanf("%f",&x_val[i]);

    }
    for(int i=0; i<sz; i++)
    {
        scanf("%f",&y_val[i]);

    }
    float sum = 0;
    float x;
    scanf("%f",&x);
    for(int i=0; i<sz; i++)
    {

        sum = sum + (( top(x_val,x,sz,i) / bottom(x_val,x,sz,i) )*y_val[i]);
    }

    cout << sum <<endl;






}
