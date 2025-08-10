#include <iostream>
#include <cmath>
using namespace std;


const float P = 3.14;

float CircleArea(float D) {
    return ceil( (P * pow(D,2)) / 4 );
}


int main() {
    float D, Area;

    cout << "PLease enter the diameter of the circle : " << endl;
    cin >> D;

    Area = CircleArea(D);
    cout << "The area of the circle is : " << Area << endl;
   
    return 0;
}