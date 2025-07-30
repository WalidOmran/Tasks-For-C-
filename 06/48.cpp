#include <iostream>
using namespace std;

int main(){

    short unsigned LoanAmount , Months; 
    float MonthlyPayment;
    //  Input
    cout << "Please enter the Loan Amount ?"<< endl;
    cin  >> LoanAmount;
    cout << "Please enter , how many months to settle the loan ?"<< endl;
    cin  >> Months;
   


    // Proccess
    MonthlyPayment = LoanAmount / Months;

    // Output
    cout << "You can pay "<< MonthlyPayment << " monthly installment amount every month " <<   endl;
    
    
}