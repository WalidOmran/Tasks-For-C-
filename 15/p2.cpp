#include <iostream>
using namespace std;


enum enColor  { Red, Green, Yellow, Blue };
enum enGender { Male, Female };
enum enMaritalStatus { Single , Married};

struct stAddrress {
        string city,
               country;
    };
struct stPersonalInfo {
    string name, email , phone;  
    short unsigned int age;
    enColor FavouritColor;
    enGender MyGender;
    enMaritalStatus MyStatus; 
};
    
    
struct stPersonal {
    stPersonalInfo pInfo;
    stAddrress addrress;
    
    float  MonthlySalary,
            Yearly_Salary;
    
};

void ReadInfo(stPersonal &p ) {
    cout << "Plese enter your name ? " << endl;
    cin >> p.pInfo.name;
    cout << "Plese enter your email ? " << endl;       
    cin >> p.pInfo.email;
    cout << "Plese enter your phone ? " << endl;   
    cin >> p.pInfo.phone;
    cout << "Plese enter your age ? " << endl;      
    cin >> p.pInfo.age;
    cout << "Plese enter your city ? " << endl;        
    cin >> p.addrress.city;
    cout << "Plese enter your country ? " << endl;  
    cin >> p.addrress.country;
    cout << "Plese enter your MonthlySalary ? " << endl;   
    cin >> p.MonthlySalary;  
    p.Yearly_Salary    = p.MonthlySalary * 12;
    
    // cin >> p.pInfo.MyGender;   
    // cin >> p.pInfo.MyStatus;   
    // cin >> p.pInfo.FavouritColor;
    p.pInfo.MyGender   = enGender::Male;
    p.pInfo.MyStatus   = enMaritalStatus::Married;
    p.pInfo.FavouritColor = enColor::Green;
}

void PrintInfo(stPersonal p) {

    cout << "********************************************************\n\n";
    cout <<"Name           : " << p.pInfo.name << endl;
    cout <<"Email          : " << p.pInfo.email << endl;
    cout <<"Phone          : " << p.pInfo.phone << endl;
    cout << "Age            : " << p.pInfo.age << " Years." << endl;
    cout << "City           : " << p.addrress.city << endl;
    cout << "Country        : " << p.addrress.country << endl;
    cout << "Monthly Salary : " << p.MonthlySalary << endl;
    cout << "Yearly Salary  : " << p.Yearly_Salary << endl;
    cout << "Gender         : " << p.pInfo.MyGender <<endl;
    cout << "Married        : " << p.pInfo.MyStatus <<endl;
    cout << "Favorit Color  : " << p.pInfo.FavouritColor <<endl;
    cout << "********************************************************\n\n";
}




int main(){
    
    

   
    stPersonal p1;
    ReadInfo(p1);
    PrintInfo(p1);
    
    
    
    stPersonal p2;
    ReadInfo(p2);
    PrintInfo(p2);
    
    



    
    return 0;
}