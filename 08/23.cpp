#include <iostream>
using namespace std;
#include <cmath> 
int main(){
    float a,b,c,p,T, Area , P = 3.14; // round 
    
    // Inputs : enter the a , b and c of the Triangle
    cout << "PLease enter the a of the Triangle : " << endl;
    cin >> a;
    cout << "PLease enter the b of the Triangle : " << endl;
    cin >> b;
    cout << "PLease enter the c of the Triangle : " << endl;
    cin >> c;

    // Procec : Calculate area 
    p = (a + b + c) / 2; // semi-perimeter
    T = pow( (a * b * c) / (4 * sqrt(  p * (p - a) * (p - b) * (p - c) ) ),2 ); 
    Area = P  * T ;
    
    // Output : Display the area of the circle 
    cout << "The area of the circle is : " << round(Area) << endl;
   
}