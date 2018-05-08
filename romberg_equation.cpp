#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

float fn(float x)
{

    return (x*x*x)*(exp(x));
    //return 1/(1+x);

}

float romberg(float a, float b)
{

    return (1.00/3.00)*((4*b)- a);


}



int main()
{

    int n;
    cout << "Enter number of n's :" <<endl;
    scanf("%d",&n);

    cout << "Enter lower limit :"<<endl;
    int low;
    scanf("%d",&low);

    cout << "Enter upper limit :" <<endl;
    int high;
    vector<float> I;
    scanf("%d",&high);

    float h;

    for(int i=1; i<=n; i++)
    {
        float n1;
        cout << "Enter "<< i <<"n value"<<endl;
        scanf("%f",&n1);

        h = (high - low)/n1;

        int sz = (high - low) / h;

        float arr[sz];


        float num = low;
        arr[0] = low;

        for(int i=1; i<=sz; i++)
        {
            num = num+h;
            arr[i] = num;

        }

        float arr_y[sz];

        for(int i=0; i<=sz; i++)
        {

            arr_y[i] = fn(arr[i]);

        }

        float sum1 = 0;

        for(int i=1; i<sz; i++)
        {


            sum1 = sum1 + arr_y[i];


        }


        float result = (h/2)*((arr_y[0]+arr_y[sz])+(2*sum1));
        I.push_back(result);

    }

    for(int i=1; i<=n; i++)
    {

        float result = romberg(I[i],I[i+1]);
        I.push_back(result);

        cout <<"I(" <<i<<") = "<< result<<endl;



    }


}
