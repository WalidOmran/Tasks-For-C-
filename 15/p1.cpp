#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo (stInfo &Info) {
    cout << "Please enter Your First Name : " << endl;
    cin >> Info.FirstName;
    cout << "Please enter Your Last Name : " << endl;
    cin >> Info.LastName;
    cout << "Please enter Your Age : " << endl;
    cin >> Info.Age;
    cout << "Please enter Your Phone : " << endl;
    cin >> Info.Phone;
} 

void PrintInfo (stInfo Info) {
    cout << "\n*******************************\n" << endl;
    
    cout << "FirstName : " << Info.FirstName <<endl;
    cout << "LastName  : " << Info.LastName <<endl;
    cout << "Age       : " << Info.Age <<endl;
    cout << "Phone     : " << Info.Phone <<endl;

    cout << "\n*******************************\n" << endl;
}



int main() {
    stInfo p1Info;
    ReadInfo(p1Info);
    PrintInfo(p1Info);

    stInfo p2Info;
    ReadInfo(p2Info);
    PrintInfo(p2Info);
    return 0;
}