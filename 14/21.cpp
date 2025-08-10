#include <iostream>
#include <cmath> 
using namespace std;

const float P = 3.14;

float CircleArea (float L) {
    return  pow(L,2) / (4*P);
}

int main() {
    float L, Area;

    cout << "PLease enter the L of the circle : " << endl;
    cin >> L;

    Area = CircleArea(L);

    cout << "The area of the circle is : " << floor(Area) << endl;
   
    return 0;
}