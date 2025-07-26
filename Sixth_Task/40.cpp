#include <iostream>
using namespace std;

int main(){

    float TotalBill,BillValue ,  Service = 1.1, SalesTax = 1.16; 
  
    //  Input
    cout << "Please enter the BillValue ?"<< endl;
    cin  >> BillValue;
    
    // Proccess
    // TotalBill   = BillValue * 1.1;
    // TotalBill  = TotalBill * 1.16;

    
    TotalBill   = BillValue * Service;
    TotalBill  = TotalBill * SalesTax;

    // Output

    cout << "TotalBill = " << TotalBill << endl;
    
}