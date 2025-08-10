#include <iostream>
using namespace std;

int main(){
    float sum , Avg ,  Grades[3];

    cout << "Please enter Grade 1 ?" << endl;
    cin >> Grades[0];
    cout << "Please enter Grade 2 ?" << endl;
    cin >> Grades[1];
    cout << "Please enter Grade 3 ?" << endl;
    cin >> Grades[2];

    sum = Grades[0] + Grades[1] + Grades[2];
    Avg = sum /3;

    cout << "********************************************"<<endl;

    cout << "The average of grades is " << Avg << endl;






    return 0;
}