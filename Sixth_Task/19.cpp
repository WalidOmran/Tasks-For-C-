#include <iostream>
using namespace std;

int main(){

    float D, Area;
    const float b = 3.14;
    //  Input
    cout << " please enter number D ?" << endl;
    cin >> D;
    
    
    // Proccess
    Area = (b * (D*D)) / 4;

    // Output

    cout << "circle Area = " << Area << endl;
}