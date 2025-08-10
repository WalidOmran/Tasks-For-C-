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

float TriangleArea(float a, float b, float c){
    float p,T;
    p = (a + b + c) / 2; // semi-perimeter
    T = pow( (a * b * c) / (4 * sqrt(  p * (p - a) * (p - b) * (p - c) ) ),2 ); 
    return round(P  * T) ;
}

int main() {
    float a,b,c, Area; 

    a = getDataFromUser("PLease enter the (a) of the Triangle : ");
    b = getDataFromUser("PLease enter the (b) of the Triangle : ");
    c = getDataFromUser("PLease enter the (c) of the Triangle : ");


    Area = TriangleArea(a,b,c);
    cout << "The area of the circle is : " << Area << endl;
    return 0;
}