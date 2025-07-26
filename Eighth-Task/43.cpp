#include <iostream>
using namespace std;
#include <cmath> 
int main(){
    double   NumOfDays,NumOfHours,NumOfMinutes,NumOfSeconds,TotalSeconds,Remainder,
            SecondsPerDay     = 24 * 60 *60 ,
            SecondsPerHours   =  60 *60 ,
            SecondsPerMinutes = 60;
    
    // Inputs 
    cout << "PLease enter the TotalSeconds : " << endl;
    cin >> TotalSeconds;
 

    // Procec 
    NumOfDays = round(TotalSeconds / SecondsPerDay);
    Remainder = fmod(TotalSeconds , SecondsPerDay);
    
    NumOfHours = round(Remainder / SecondsPerHours);
    Remainder = fmod(Remainder , SecondsPerHours);

    NumOfMinutes = round(Remainder / SecondsPerMinutes);
    Remainder = fmod(Remainder , SecondsPerMinutes);

    NumOfSeconds = Remainder;

    // Output 
    cout  << NumOfDays << ":" << NumOfHours << ":"<< NumOfMinutes << ":" << NumOfSeconds << endl;
   
}