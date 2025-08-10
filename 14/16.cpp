#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
   - This program calculate the area of the rectangle 
   - Ex: If the user enter  a = 10; d= 20;
   -  Area = 173.205
*/

float getDataFromUser (string text) {
    float x;
    cout << text << endl; 
    cin >> x;
    return x;
}

float RectangleArea (float a , float d){
    return a * sqrt( (pow(d,2)) - pow(a,2) );
}

int main() {

    float a, d, Area;

    a = getDataFromUser("Please enter the width of the rectangle : ");
    d = getDataFromUser("PLease enter the diagonal of the rectangle : ");
    Area = RectangleArea(a,d);

    cout << "The area of the rectangle is : " << Area << endl; 
    return 0;
}