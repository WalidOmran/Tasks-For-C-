#include <iostream>
using namespace std;

int main(){
  string name, 
         city,
         country;
         
  short unsigned int    Age;
  short unsigned float  MonthlySalary,
  Yearly_Salary;
  
  unsigned char Gender;
  bool isMarried;
  
  
  // Input
  
  cout << "Please enter your name !" << endl;
  cin >> name;
  cout << " Please enter your age !" << endl;
  cin >> Age;
  cout <<  " Please enter your City !"<< endl;
  cin >> city;
  cout << " Please enter your Country !" << endl;
  cin >> country;
  cout << "Please enter your Monthly Salary !" << endl;
  cin >> MonthlySalary;
  cout << "Please enter your Gender M or F ?" << endl;
  cin >> Gender;
  cout << " Please enter true if your married else enter false" << endl;
  cin >> isMarried;
  
  // Process
  Yearly_Salary = MonthlySalary * 12;
  
  
  // Output
  
  cout << "********************************************************\n\n";
  cout <<"Name          : " << name << endl;
  cout << "Age            : " << Age << " Years." << endl;
  cout << "City           : " << city << endl;
  cout << "Country        : " << country << endl;
  cout << "Monthly Salary : " << MonthlySalary << endl;
  cout << "Yearly Salary  : " << Yearly_Salary << endl;
  cout << "Gender         : " << Gender <<endl;
  cout << "Married        : " << isMarried <<endl;
  
  cout << "********************************************************\n\n";
  
  return 0;
}