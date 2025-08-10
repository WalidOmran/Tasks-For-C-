#include <iostream>
#include <cmath>
using namespace std;

float CalcPowRound(float Num, int x) {
    return round(pow(Num,x)) ;
    
}

void PrintResult(int result, int x){
     cout << "Number^"<< x << " : " << result << endl;
}

int main() {
    float a,b,c, Num;

    cout << "PLease enter the Number : " << endl;
    cin >> Num;

    a = CalcPowRound(Num,2);
    b = CalcPowRound(Num,3);
    c = CalcPowRound(Num,4);


    PrintResult(a,2);
    PrintResult(b,3);
    PrintResult(c,4);
    return 0;
}