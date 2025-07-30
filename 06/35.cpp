#include <iostream>
using namespace std;

int main(){

    short unsigned Penny,Nickel,Dime,Quarter,Dollar,totalPenny; 
    float totalDollar;
    //  Input
    cout << "Please enter the Penny do you have ?"<< endl;
    cin  >> Penny;
    cout << "Please enter the Nickel do you have ?"<< endl;
    cin  >> Nickel;
    cout << "Please enter the Dime do you have ?"<< endl;
    cin  >> Dime;
    cout << "Please enter the Quarter do you have ?"<< endl;
    cin  >> Quarter;
    cout << "Please enter the Dollar do you have ?"<< endl;
    cin  >> Dollar;


    // Proccess
    // Penny   = Penny * 1;
    // Nickel  = Nickel * 5;
    // Dime    = Dime * 10; 
    // Quarter = Quarter * 25;
    // Dollar  = Dollar * 100;
    

    totalPenny = Penny + (Nickel * 5) + (Dime * 10) + (Quarter * 25) + (Dollar * 100);
    totalDollar = totalPenny / 100;

    // Output

    cout << "Total Penny = " << totalPenny << endl;
    cout << "Total Doller = " << totalDollar << endl;
}