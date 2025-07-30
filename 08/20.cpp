#include <iostream>
using namespace std;
#include <cmath> 
int main(){
    float A, Area, P = 3.14;
    
    // Inputs : enter the A of the circle
    cout << "PLease enter the A of the circle : " << endl;
    cin >> A;

    // Procec : Calculate area 
    Area = ceil((P * pow(A,2)) / 4);
    
    // Output : Display the area of the circle 
    cout << "The area of the circle is : " << Area << endl;
   
}