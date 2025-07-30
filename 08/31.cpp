#include <iostream>
using namespace std;
#include <cmath> 
int main(){
    float a,b,c, Num;
    
    // Inputs : enter the Number
    cout << "PLease enter the Number : " << endl;
    cin >> Num;
   

    // Procec 
    a = pow(Num,2);
    b = pow(Num,3);
    c = pow(Num,4);

    // Output : Display the Number^2 , Number^3 , Number^4
    cout << "Number^2 : " << round(a) << endl;
    cout << "Number^3 : " << round(b) << endl;
    cout << "Number^4 : " << round(c) << endl;
}