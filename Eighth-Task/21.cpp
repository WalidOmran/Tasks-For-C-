#include <iostream>
using namespace std;
#include <cmath> 
int main(){
    float L, Area, P = 3.14;
    
    // Inputs : enter the L of the circle
    cout << "PLease enter the L of the circle : " << endl;
    cin >> L;

    // Procec : Calculate area 
    Area =  pow(L,2) / (4*P);
    
    // Output : Display the area of the circle 
    cout << "The area of the circle is : " << floor(Area) << endl;
   
}