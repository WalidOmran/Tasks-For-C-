#include <iostream>
#include <cmath> 
#include <string> 
using namespace std;

const float P = 3.14;

float getDataFromUser(string text){
    float Num;
    cout << text << endl;
    cin >> Num;
    return Num;
}

float TriangleArea(float a ,float b) {
    return floor(P * (pow(b,2)/4) * ((2*a-b) / (2*a+b)));
}

int main() {
    float a,b, Area;

    a = getDataFromUser("PLease enter the a of the Triangle : ");
    b = getDataFromUser("PLease enter the b of the Triangle : ");


    Area = TriangleArea(a,b);
    cout << "The area of the circle is : " << Area << endl;
    return 0;
}