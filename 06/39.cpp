#include <iostream>
using namespace std;

int main(){

    float TotalBill,CashPaid,remainder; 
  
    //  Input
    cout << "Please enter the TotalBill ?"<< endl;
    cin  >> TotalBill;
    cout << "Please enter the CashPaid ?"<< endl;
    cin  >> CashPaid;
    // Proccess
    remainder = CashPaid - TotalBill;


    // Output

    cout << "remainder to be paid back = " << remainder << endl;
    
}