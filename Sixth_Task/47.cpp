#include <iostream>
using namespace std;

int main(){

    short unsigned LoanAmount , MonthlyPayment; 
    float Months;
    //  Input
    cout << "Please enter the Loan Amount ?"<< endl;
    cin  >> LoanAmount;
    cout << "Please enter the Monthly Payment ?"<< endl;
    cin  >> MonthlyPayment;
   


    // Proccess
    Months = LoanAmount / MonthlyPayment;

    // Output
    cout << Months << "Months : " <<  endl;
    
    
}