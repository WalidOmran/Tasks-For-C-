#include <iostream>
using namespace std;

int main(){

    float A, Area;
    const float b = 3.14;
    //  Input
    cout << " please enter number A ?" << endl;
    cin >> A;
    
    
    // Proccess
    Area = (b * (A*A) ) / 4;

    // Output

    cout << "circle Area = " << Area << endl;
}