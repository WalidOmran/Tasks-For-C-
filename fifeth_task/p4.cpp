#include <iostream>
using namespace std;

int main(){
  // Varibles
  short unsigned int age,
      After_5_Years;
  
  // input 
  cout << "Please enter your age ?" << endl;
  cin >> age;

  // proccess
  
  After_5_Years = 5 + age;

  // Output
  
  cout << "After 5 years you will be " << After_5_Years << " years old"; 
  
  return 0;
}