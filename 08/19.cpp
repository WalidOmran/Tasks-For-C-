#include <iostream>
using namespace std;
#include <cmath> 
int main(){
    float D, Area, P = 3.14;
    
    // Inputs : enter the diameter of the circle
    cout << "PLease enter the diameter of the circle : " << endl;
    cin >> D;

    // Procec : Calculate area 
    Area = ceil( (P * pow(D,2)) / 4 );
    
    // Output : Display the area of the circle 
    cout << "The area of the circle is : " << Area << endl;
   
}