#include <iostream>
using namespace std;
#include <cmath> 
int main(){
    float r, Area, P = 3.14;
    
    // Inputs : enter the radius of the circle
    cout << "PLease enter the radius of the circle : " << endl;
    cin >> r;

    // Procec : Calculate area 
    Area = ceil( P * pow(r,2));
    
    // Output : Display the area of the circle 
    cout << "The area of the circle is : " << Area << endl;
   
}