#include <iostream>
using namespace std;

int main(){
  // Varibales
  short unsigned int n1,n2,n3,total;
  
  // Input 
  
  cout << " Please enter first number ?" << endl;
  cin >> n1;
  cout << " Please enter second number ?" << endl;
  cin >> n2;
  cout << " Please enter third number ?" << endl;
  cin >> n3;
  
  // Proccess
  total =  n1 + n2 + n3;
  
  // Output
  
  cout << n1 << '+' << endl;
  cout << n2 << '+' << endl;
  cout << n3 <<endl;
  cout << "-----------------------------------------------------\n\n";
  cout << "Total = " << total;
  return 0;
}