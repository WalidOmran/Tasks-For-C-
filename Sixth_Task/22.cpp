#include <iostream>
using namespace std;

int main(){

    float a,b, Area;
    const float PI = 3.14;
    //  Input
    cout << " please enter number A ?" << endl;
    cin >> a;
    cout << " please enter number B ?" << endl;
    cin >> b;
    
    // Proccess
    Area = ( PI *  (b*b) /4 ) * ( ( 2*a - b ) /  ( 2*a + b) );

    // Output

    cout << "circle Area = " << Area << endl;
}