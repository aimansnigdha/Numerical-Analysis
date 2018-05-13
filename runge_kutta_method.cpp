#include<cstdio>
#include<iostream>

using namespace std;

float fnxy (float x, float y)
{

    return y - x;
}
int main()
{

    float k1, k2, k3,k4;
    float xi, yi, h;

    cout << "Enter initial x value , y value, h value" <<endl;

    cin >> xi >> yi >> h;
    float y, result, x=0;
    cout << "Enter y value "<<endl;
    cin >> y,x;

    float yn;
    yn = yi;
    while(x!=y)
    {

        k1 = h * fnxy (xi,yi);
        xi =xi+h;
        yi = yi+h;


        k2 = h * fnxy (xi+(0.5*h),yi+(0.5*k1));
        xi =xi+h;
        yi = yi+h;

        k3 = h * fnxy (xi+(0.5*h),yi+(0.5*k2));
        xi =xi+h;
        yi = yi+h;
        k4 = h * fnxy (xi+h,yi+k3);

        result = yn + ((1.00/6.00)*(k1+(2*k2)+(2*k3)+k4));
        yn = result;
        x = x+h;
        xi =x;

    }
    cout << "y =" <<result <<endl;
}
