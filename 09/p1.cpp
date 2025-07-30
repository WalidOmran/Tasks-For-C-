#include <iostream>
using namespace std;

int main(){

    struct stAddrress {
        string city,
               country;
    };
    struct PersonalInfo {
     string name, email , phone;  
     short unsigned int age; 
    };
    
    
    struct info {
        PersonalInfo pInfo;
        stAddrress addrress;
        
        float  MonthlySalary,
               Yearly_Salary;
        unsigned char Gender;
        bool Married;
        
    };

    info myInfo;

    myInfo.pInfo.name       = "Walid Omran.";
    myInfo.pInfo.email      = "walid80@gmail.com";
    myInfo.pInfo.phone      = "01103466679";
    myInfo.pInfo.age        = 30;
    myInfo.addrress.city    = "Cairo"; 
    myInfo.addrress.country = "Egypt";    
    myInfo.MonthlySalary    = 15000;
    myInfo.Yearly_Salary    = myInfo.MonthlySalary * 12;
    myInfo.Gender           = 'M';
    myInfo.Married          = true;
    

    info hisInfo;

    hisInfo.pInfo.name       = "Ali Omran.";
    hisInfo.pInfo.email      = "ali5050@gmail.com";
    hisInfo.pInfo.phone      = "01203422278";
    hisInfo.addrress.city    = "Alx"; 
    hisInfo.addrress.country = "Egypt";    
    hisInfo.pInfo.age        = 45;
    hisInfo.MonthlySalary    = 13000;
    hisInfo.Yearly_Salary    = hisInfo.MonthlySalary * 12;
    hisInfo.Gender           = 'M';
    hisInfo.Married          = true;







    
    cout << "********************************************************\n\n";
    cout <<"Name           : " << myInfo.pInfo.name << endl;
    cout <<"Email          : " << myInfo.pInfo.email << endl;
    cout <<"Phone          : " << myInfo.pInfo.phone << endl;
    cout << "Age            : " << myInfo.pInfo.age << " Years." << endl;
    cout << "City           : " << myInfo.addrress.city << endl;
    cout << "Country        : " << myInfo.addrress.country << endl;
    cout << "Monthly Salary : " << myInfo.MonthlySalary << endl;
    cout << "Yearly Salary  : " << myInfo.Yearly_Salary << endl;
    cout << "Gender         : " << myInfo.Gender <<endl;
    cout << "Married        : " << myInfo.Married <<endl;
    
    cout << "********************************************************\n\n";



    cout << "********************************************************\n\n";
    cout <<"Name           : " << hisInfo.pInfo.name << endl;
    cout <<"Email          : " << hisInfo.pInfo.email << endl;
    cout <<"Phone          : " << hisInfo.pInfo.phone << endl;
    cout << "Age            : " << hisInfo.pInfo.age << " Years." << endl;
    cout << "City           : " << hisInfo.addrress.city << endl;
    cout << "Country        : " << hisInfo.addrress.country << endl;
    cout << "Monthly Salary : " << hisInfo.MonthlySalary << endl;
    cout << "Yearly Salary  : " << hisInfo.Yearly_Salary << endl;
    cout << "Gender         : " << hisInfo.Gender <<endl;
    cout << "Married        : " << hisInfo.Married <<endl;
    
    cout << "********************************************************\n\n";
    
    return 0;
}