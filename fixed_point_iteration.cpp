#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

float f(float x){

return 1/(sqrt(1+x));
// return (2*x*cos(2*x))-((1+x)*(1+x));
}


float f_org(float x){ //original function

return (x*x*x)+(x*x)-1;
// return (2*x*cos(2*x))-((1+x)*(1+x));
}

bool root_possible(int a, int b){ //root finding is possible or not

if(f_org(a)>0 && f_org(b)> 0 || f_org(a)<0 && f_org(b)<0){

    return false;

}

else{
    return true;
}

}



int main(){

    float a,b;
    float root,temp;
    scanf("%f %f",&a,&b);

    if(!root_possible(a,b)){

        cout << "Root finding is not possible!" << endl;
    }
    else{
    root = (a+b)/2;
    while(abs(f(temp)-f(root))> 0.001){

    temp = root;
    root = f(root);

    }
      cout << "root " <<root<<endl;
}




}
