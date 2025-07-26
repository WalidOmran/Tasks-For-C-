#include <iostream>
using namespace std;

int main(){

    short unsigned NumberOfDays,NumberOfHours,NumberOfMinutes,NumberOfSeconds;
    float TotalSeconds;
  
    //  Input
    cout << "Please enter time duration of task in the number of days ?"<< endl;
    cin  >> NumberOfDays;
    cout << "Please enter time duration of task in the number of hours ?"<< endl;
    cin  >> NumberOfHours;
    cout << "Please enter time duration of task in the number of minutes ?"<< endl;
    cin  >> NumberOfMinutes;
    cout << "Please enter time duration of task in the number of seconds ?"<< endl;
    cin  >> NumberOfSeconds;
    
    // Proccess
    
    TotalSeconds   = (NumberOfDays * 24 * 60 * 60) + (NumberOfHours * 60 * 60) + (NumberOfMinutes * 60) + NumberOfSeconds ;
  
    


   

    // Output

    cout << "TotalSeconds = " << TotalSeconds << " Seconds" << endl;
    
}