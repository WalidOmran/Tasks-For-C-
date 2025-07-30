#include <iostream>
using namespace std;

int main(){

    float L, Area;
    const float b = 3.14;
    //  Input
    cout << " please enter number L ?" << endl;
    cin >> L;
    
    
    // Proccess
    Area = (L * L) / (4 * b);

    // Output

    cout << "circle Area = " << Area << endl;
}