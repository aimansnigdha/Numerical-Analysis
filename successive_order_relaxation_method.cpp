#include<cstdio>
#include<iostream>


using namespace std;


int main(){

float x1, x2, x3;
float a11, a12, a13, a21, a23, a22, a33, a31, a32, b1, b2, b3;

x1= x2 = x3 = 1;

float w;

cout << "Enter omega's value " << endl;
cin >> w;

cout << "Enter a11 a12 a13 b1 a21 a22 a23 b2 a31 a32 a33 b3 here sequentially "<<endl;

cin >> a11 >> a12 >> a13 >> b1>> a21 >> a22 >> a23 >> b2 >> a31 >> a32 >> a33 >> b3;

int stp = 15;

while(stp--){

    x1 = ((1-w)*x1) +((w/a11)*(b1-(a12*x2)-(a13*x3)));
    x2 = ((1-w)*x2) +((w/a22)*(b2-(a23*x3)-(a21*x1)));
    x3 = ((1-w)*x3) +((w/a33)*(b3-(a31*x1)-(a32*x2)));




}

cout << "x1 " << x1 << " x2 " << x2 << " x3 " << x3 <<endl;



}
