#include <iostream>
using namespace std;



int Num1, Num2;

void sumProcedure() { 
    cout << "Sum = " <<  Num1 + Num2 << endl;
}

int sumFunction() {

    return Num1 + Num2;
}

int main(){
    cout << "Please enter Number 1 : ";
    cin >> Num1;
    cout << "Please enter Number 2 : ";
    cin >> Num2;

    sumProcedure();

    cout << "Sum = " << sumFunction() << endl;
    
    return 0;
}