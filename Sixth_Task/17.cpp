#include <iostream>
using namespace std;

int main(){

    short unsigned a,h,Area;

    //  Input
    cout << " please enter number a ?" << endl;
    cin >> a;
    cout << " please enter number h ? " << endl;
    cin >> h;
    
    // Proccess
    Area = 0.5*(a * h);

    // Output

    cout << "Triangle Area = " << Area << endl;
}