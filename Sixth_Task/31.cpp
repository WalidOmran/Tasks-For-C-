#include <iostream>
using namespace std;

int main(){

    short unsigned n,a,b,c; 
  
    //  Input
    cout << "Please enter the number ?"<< endl;
    cin  >> n;

    // Proccess
    a = n * n;
    b = n * n * n;
    c = n * n * n * n; 

    // Output

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}