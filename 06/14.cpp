#include <iostream>
using namespace std;

int main(){

    short unsigned n1 ,n2, n3;

    //  Input

    cout << "Please enter number 1 ? \n";
    cin >> n1;
    cout << "Please enter number 2 ? \n";
    cin >> n2;

    // Output
    cout << n1 << endl;
    cout << n2 << endl;


    // Proccess
    n3 = n1;
    n1 = n2;
    n2 = n3;

    // Output After Swap
    // Output
    cout << "-----------------------------" << endl;
    cout << n1 << endl;
    cout << n2 << endl;


    

}