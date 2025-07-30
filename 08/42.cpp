#include <iostream>
using namespace std;
#include <cmath> 
int main(){
    float NumOfDays,NumOfHours,NumOfMinutes,NumOfSeconds,TotalSeconds;
    
    // Inputs 
    cout << "PLease enter the NumOfDays : " << endl;
    cin >> NumOfDays;
    cout << "PLease enter the NumOfHours : " << endl;
    cin >> NumOfHours;
    cout << "PLease enter the NumOfMinutes : " << endl;
    cin >> NumOfMinutes;
    cout << "PLease enter the NumOfSeconds : " << endl;
    cin >> NumOfSeconds;

    // Procec : Calculate TotalSeconds
    TotalSeconds =  (NumOfDays * 24 * 60 * 60) + (NumOfHours * 60 * 60) + (NumOfMinutes * 60 ) + NumOfSeconds;
    
    // Output : Display the TotalSeconds
    cout  << round(TotalSeconds) << " Seconds" << endl;
   
}