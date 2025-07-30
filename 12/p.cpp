#include <iostream>
using namespace std;


int main() {
     
    string FullName,String2,String3;
    cout << "Please enter your full name ?" <<endl;
    // cin >> FullName;
    getline(cin, FullName);

    cout << "Plese enter String 2 ?" <<endl;
    cin >> String2;

    cout << "Plese enter String 3 ?" <<endl;
    cin >> String3;



    



    cout << "******************************************\n\n";
    cout << "Your Full Name is : " << FullName <<endl;
    cout << "The lenght of full name is : " << FullName.length() <<endl;
    cout << "Characters at 0 , 2 , 4 , 7 are : " << FullName[0] << " " << FullName[2] << " " << FullName[4]  << " " << FullName[7] << endl;
    cout << "Concatenating String2 and String3 = " <<  String2 + String3 <<endl; 
    cout << "stoi(String2) * stoi(String3) = " << stoi(String2) * stoi(String3) <<endl; 
    cout << "******************************************";

     return 0;


}