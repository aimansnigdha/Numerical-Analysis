#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

float f(float x){

//return ((x*x*x)-x-1);
 return (2*x*cos(2*x))-((1+x)*(1+x));
}

bool root_possible(int a, int b){ //root finding is possible or not

if(f(a)>0 && f(b)> 0 || f(a)<0 && f(b)<0){

    return false;

}

else{
    return true;
}

}



int main(){

    float a,b;
    float root;
    scanf("%f %f",&a,&b);

    if(!root_possible(a,b)){

        cout << "Root finding is not possible!" << endl;
    }


    while(abs(f(a)-f(b))>0.001){
    if(f(a)>0){

        swap(a,b);

    }

    root = (a+b)/2;

    if(f(root)>0){
        b = root;
    }
    else{
        a = root;
    }



    }





    cout << "root " <<root<<endl;

}
