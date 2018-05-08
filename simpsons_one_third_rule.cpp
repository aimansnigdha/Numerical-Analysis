#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

float fn(float x){

    //return (x*x*x)*(exp(x));
    return 1/(1+x);

}



int main(){

int n;
cout << "Enter number of n's :" <<endl;
scanf("%d",&n);

cout << "Enter lower limit :"<<endl;
int low;
scanf("%d",&low);

cout << "Enter upper limit :" <<endl;
int high;
scanf("%d",&high);

float h;

for(int i=1; i<=n; i++){
    float n1;
    cout << "Enter "<< i <<"n value"<<endl;
    scanf("%f",&n1);

    h = (high - low)/n1;

    int sz = (high - low) / h;

    float arr[sz];


    float num = low;
    arr[0] = low;

    for(int i=1;i<=sz;i++){
        num = num+h;
        arr[i] = num;

    }

    float arr_y[sz];

    for(int i=0;i<=sz;i++){

        arr_y[i] = fn(arr[i]);

    }

    float sum1 = 0;
float sum2 = 0;

for(int i=1;i<sz;i++){


    if(i%2==0){

        sum1 = sum1 + arr_y[i];

    }
    else{

        sum2 = sum2 + arr_y[i];
    }


}


float result = (h/3)*((arr_y[0]+arr_y[sz])+(2*sum1)+(4*sum2));

cout << result <<endl;








}


}
