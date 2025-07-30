#include <iostream>
using namespace std;


enum enColor  { Red, Green, Yellow, Blue };
enum enGender { Male, Female };
enum enMaritalStatus { Single , Married};

 struct stAddrress {
        string city,
               country;
    };
    struct PersonalInfo {
        string name, email , phone;  
        short unsigned int age;
        enColor FavouritColor;
        enGender MyGender;
        enMaritalStatus MyStatus; 
    };
    
    
    struct personal {
        PersonalInfo pInfo;
        stAddrress addrress;
        
        float  MonthlySalary,
               Yearly_Salary;
        
    };


int main(){
    
    

   
    personal p1;

    p1.pInfo.name       = "Walid Omran.";
    p1.pInfo.email      = "walid80@gmail.com";
    p1.pInfo.phone      = "01103466679";
    p1.pInfo.age        = 30;
    p1.addrress.city    = "Cairo"; 
    p1.addrress.country = "Egypt";    
    p1.MonthlySalary    = 15000;
    p1.Yearly_Salary    = p1.MonthlySalary * 12;
    p1.pInfo.MyGender   = enGender::Male;
    p1.pInfo.MyStatus   = enMaritalStatus::Married;
    p1.pInfo.FavouritColor = enColor::Green;

    personal p2;

    p2.pInfo.name       = "Sarah Ali.";
    p2.pInfo.email      = "sarahali5050@gmail.com";
    p2.pInfo.phone      = "01203422278";
    p2.addrress.city    = "Alx"; 
    p2.addrress.country = "Egypt";    
    p2.pInfo.age        = 45;
    p2.MonthlySalary    = 13000;
    p2.Yearly_Salary    = p2.MonthlySalary * 12;
    p2.pInfo.MyGender   = enGender::Female;
    p2.pInfo.MyStatus   = enMaritalStatus::Single;
    p2.pInfo.FavouritColor = enColor::Red;







    
    cout << "********************************************************\n\n";
    cout <<"Name           : " << p1.pInfo.name << endl;
    cout <<"Email          : " << p1.pInfo.email << endl;
    cout <<"Phone          : " << p1.pInfo.phone << endl;
    cout << "Age            : " << p1.pInfo.age << " Years." << endl;
    cout << "City           : " << p1.addrress.city << endl;
    cout << "Country        : " << p1.addrress.country << endl;
    cout << "Monthly Salary : " << p1.MonthlySalary << endl;
    cout << "Yearly Salary  : " << p1.Yearly_Salary << endl;
    cout << "Gender         : " << p1.pInfo.MyGender <<endl;
    cout << "Married        : " << p1.pInfo.MyStatus <<endl;
    cout << "Favorit Color  : " << p1.pInfo.FavouritColor <<endl;
    cout << "********************************************************\n\n";



    cout << "********************************************************\n\n";
    cout <<"Name           : " << p2.pInfo.name << endl;
    cout <<"Email          : " << p2.pInfo.email << endl;
    cout <<"Phone          : " << p2.pInfo.phone << endl;
    cout << "Age            : " << p2.pInfo.age << " Years." << endl;
    cout << "City           : " << p2.addrress.city << endl;
    cout << "Country        : " << p2.addrress.country << endl;
    cout << "Monthly Salary : " << p2.MonthlySalary << endl;
    cout << "Yearly Salary  : " << p2.Yearly_Salary << endl;
    cout << "Gender         : " << p2.pInfo.MyGender <<endl;
    cout << "Married        : " << p2.pInfo.MyStatus <<endl;
    cout << "Favorit Color  : " << p2.pInfo.FavouritColor <<endl;
    
    cout << "********************************************************\n\n";
    
    return 0;
}