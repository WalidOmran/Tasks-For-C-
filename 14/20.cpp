#include <iostream>
#include <cmath> 
using namespace std;

const float P = 3.14;

float CircleArea(float A) {
    return ceil((P * pow(A,2)) / 4);
}

int main() {
    float A, Area;
    cout << "PLease enter the A of the circle : " << endl;
    cin >> A;
    Area = CircleArea(A);
    
    cout << "The area of the circle is : " << Area << endl;
    return 0;
}