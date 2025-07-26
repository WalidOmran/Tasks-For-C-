#include <iostream>
using namespace std;

int main(){
  string name       = "Walid Omran.", 
         city       = "Cairo",
         country    = "Egypt";
         
  short unsigned int    Age           = 30;
  short unsigned float  MonthlySalary = 5000,
         Yearly_Salary = MonthlySalary * 12;
  
  unsigned char Gender       = 'M';
  bool Married      = true;
  
  
  cout << "********************************************************\n\n";
  cout <<"Name          : " << name << endl;
  cout << "Age            : " << Age << " Years.\n";
  cout << "City           : " << city << endl;
  cout << "Country        : " << country << endl;
  cout << "Monthly Salary : " << MonthlySalary << endl;
  cout << "Yearly Salary  : " << Yearly_Salary << endl;
  cout << "Gender         : " << Gender <<endl;
  cout << "Married        : " << Married <<endl;
  
  cout << "********************************************************\n\n";
  
  return 0;
}