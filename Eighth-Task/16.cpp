#include <iostream>
using namespace std;
#include <cmath> 
int main(){
    float a,d, Area;
    
    // Inputs : enter the width and height of the rectangle
    cout << "Please enter the width of the rectangle : " << endl; 
    cin >> a;
    cout << "PLease enter the diagonal of the rectangle : " << endl;
    cin >> d;

    // Procec : Calculate area 
    Area = a *   sqrt( (pow(d,2)) - (pow(a,2)) );
    
    // Output : Display the area of the rectangle 
    cout << "The area of the rectangle is : " << Area << endl;
   
}