#include <iostream>
#include <cmath> 
using namespace std;

int main(){

    const int secondsPerDay     = 24 * 60 * 60,
              secondsPerHours   = 60 *60,
              secondsPerMinutes = 60;

    short unsigned NumberOfDays,NumberOfHours,NumberOfMinutes,NumberOfSeconds;
    float TotalOfSeconds, Remainder;
  
    //  Input
   
    cout << "Please enter time duration of task in the number of seconds ?"<< endl;
    cin  >> TotalOfSeconds;
    
    // Proccess
    NumberOfDays    = floor( TotalOfSeconds / secondsPerDay);
    Remainder       = fmod(TotalOfSeconds , secondsPerDay);
    NumberOfHours   = floor(Remainder / secondsPerHours);
    Remainder       = fmod(Remainder , secondsPerHours);
    NumberOfMinutes = floor(Remainder / secondsPerMinutes);
    Remainder       = fmod(Remainder , secondsPerMinutes);
    
    // Output

    cout << "Total = " << NumberOfDays << ":" << NumberOfHours << ":"<< NumberOfMinutes << ":"<< Remainder << endl;
    
    
}