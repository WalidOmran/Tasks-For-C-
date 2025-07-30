#include <iostream>
using namespace std;
#include <cmath> 
int main(){
    float Num , M , Result;

    // Inputs : enter the Number and M
    cout << "PLease enter the Number : " << endl;
    cin >> Num;
    cout << "PLease enter the M Number : " << endl;
    cin >> M;

    // Procec : Calculate Number^M
    Result = pow(Num,M);
    
    // Output : Display the Number^M
    cout << "Number^M : " << round(Result) << endl;
   
}