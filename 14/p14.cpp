#include <iostream>
using namespace std;
/*
    - This a program ask user to enter Num1 and Num2.
    - then print the two numbers.  
    - then swap the two numbers and print them.
*/



void SwapFunction (int &Num1 ,int &Num2) { // The numbers Num1 and Num2 updated By-Ref not By-val
   
   int  Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp; 

    cout << "--------------- After Swap inside  function ----------------\n" << endl;
    cout << "Num 1 = " <<  Num1 << endl;
    cout << "Num 2 = " << Num2 << endl;
    
}

int getNumbersFromUser(string text) {
    int Num;
    cout << text << endl;
    cin >> Num;

    return Num;
}
int main() {

    int Num1 , Num2;

    Num1 = getNumbersFromUser("Please enter Number 1 : ");
    Num2 = getNumbersFromUser("Please enter Number 2 : ");
   

    cout << "--------------- Before Swap  ----------------\n" << endl;
    cout << "Num 1 = " <<  Num1 << endl;
    cout << "Num 2 = " << Num2 << endl;

    SwapFunction(Num1,Num2);

    cout << "--------------- After Swap inside Main the function ----------------\n" << endl;
    cout << "Num 1 = " <<  Num1 << endl;
    cout << "Num 2 = " << Num2 << endl;
    return 0;
}