#include <iostream>
#include <cmath>
using namespace std;

float getDataFromUser(string text) {
    float item;
    cout << text << endl;
    cin >> item;
    return item;
}


float CalculateNumOfDays() {
    float NumOfDays    = getDataFromUser("PLease enter the NumOfDays : ");
    return (NumOfDays * 24 * 60 * 60);
}

float CalculateNumOfHours() {
    float NumOfHours   = getDataFromUser("PLease enter the NumOfHours : ");
    return (NumOfHours * 60 * 60);
}

float CalculateNumOfMinutes() {
    float NumOfMinutes = getDataFromUser("PLease enter the NumOfMinutes : ");
    return (NumOfMinutes * 60);
}

float CalculateNumOfSeconds() {
    float NumOfSeconds = getDataFromUser("PLease enter the NumOfSeconds : ");
    return NumOfSeconds;
}

float CalculateTotalSeconds() {
    return CalculateNumOfDays() + CalculateNumOfHours() + CalculateNumOfMinutes() + CalculateNumOfSeconds();
}
int main() {
    float TotalSeconds;
    
    TotalSeconds =  CalculateTotalSeconds();

    cout  << round(TotalSeconds) << " Seconds" << endl;

    return 0;
}