#include <iostream>
#include <cmath>
using namespace std;

const float P = 3.14;

float CircleArea(float r) {
   return ceil( P * pow(r,2));
}

int main() {
    float r, Area;
    cout << "PLease enter the radius of the circle : " << endl;
    cin >> r;

    Area = CircleArea(r);

    cout << "The area of the circle is : " << Area << endl;
    
    return 0;
}