#include <iostream>
using namespace std;

int main(){

    short unsigned m1,m2,m3,sum,average ,count = 3;
    //  Input

    cout << "Please enter the first Mark ?" << endl;
    cin << m1;
    cout << "Please enter the second Mark ?" << endl;
    cin << m2;
    cout << "Please enter the third Mark ?" << endl;
    cin << m3;

    // Proccess

    sum = m1 + m2 + m3;
    average = sum / count ;

    cout << "average = " << average <<endl;

}