#include <iostream>
using namespace std;


void ReadGradesData(float Grades[3]){
    cout << "Please enter Grade 1 ?" << endl;
    cin >> Grades[0];
    cout << "Please enter Grade 2 ?" << endl;
    cin >> Grades[1];
    cout << "Please enter Grade 3 ?" << endl;
    cin >> Grades[2];
}


float AvgOfGrades( float Grades[3]) {
  
    return (Grades[0] + Grades[1] + Grades[2]) / 3;
}

void PrintGradesData (float Avg) {
    cout << "********************************************"<<endl;

    cout << "The average of grades is  " << Avg << endl;
}
int main(){
    float Avg , Grades[3];

    ReadGradesData(Grades);
    Avg = AvgOfGrades(Grades);
    PrintGradesData(Avg);
    return 0;
}