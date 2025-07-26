#include <iostream>
using namespace std;
#include <cmath> 
int main(){
    float a,b, Area, P = 3.14;
    
    // Inputs : enter the a and b of the Triangle
    cout << "PLease enter the a of the Triangle : " << endl;
    cin >> a;
    cout << "PLease enter the b of the Triangle : " << endl;
    cin >> b;

    // Procec : Calculate area 
    Area =  P * (pow(b,2)/4) * ((2*a-b) / (2*a+b));
    
    // Output : Display the area of the circle 
    cout << "The area of the circle is : " << floor(Area) << endl;
   
} 