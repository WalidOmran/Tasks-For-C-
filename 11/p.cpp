#include <iostream>
#include <string>
using namespace std;

int main() {
     
    /* *** Convert string sT1 to (double , float  and int). *** */
    string sT1        = "43.22";
    // Convert string to double
    double double_St1 = stod(sT1);
    // Convert string to float 
    float float_sT1   = stof(sT1);
    // Convert string to Integer 
    int int_sT1       = stoi(sT1);


    /* *** Convert integer N1 = 20 to string. *** */
    int N1           = 20;
    string string_N1 = to_string(N1);

     /* *** Convert double N2 = 33.5 to string. *** */
    double N2        = 33.5;
    string string_N2 = to_string(N2);



    /* *** Convert double N2 = 33.5 to string and integer. *** */
    float  N3        = 55.23;
    string string_N3 = to_string(N3);
    int    int_N3    = int(N3); 
    int    int_N4    = (int) N3; 

    

    cout << "* *** Convert string sT1 to (double , float  and int). *** *" << endl;
    cout << "sT1         = " << sT1 <<endl;
    cout << "double_St1  = " << double_St1<<endl;
    cout << "int_sT1     = " << float_sT1 <<endl;
    cout << "int_sT1     = " << int_sT1 <<endl;
    cout << "******************************************" << endl;

    cout << "* *** Convert integer N1 = 20 to string. *** *" << endl;
    cout << "N1        = " << N1 <<endl;
    cout << "string_N1 = " << string_N1<<endl;
    cout << "******************************************" << endl;


    cout << "* *** Convert integer N1 = 20 to string. *** *" << endl;
    cout << "N2        = " << N2 <<endl;
    cout << "string_N2 = " << string_N2<<endl;
    cout << "******************************************" << endl;


    cout << "* *** Convert double N2 = 33.5 to string and integer. *** *" << endl;
    cout << "N3        = " << N3 <<endl;
    cout << "string_N3 = " << string_N3<<endl;
    cout << "inint_N3  = " << int_N3 <<endl;
    cout << "int_N4    = " << int_N4 <<endl;
    cout << "******************************************" << endl;

     return 0;


}