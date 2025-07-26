#include <iostream>
using namespace std;


int main() {
     
    /* ** Write a program to solve the following problems ** */
    
    
    
    cout << "******************************************\n\n";
    cout << "(5 > 6 and 7 = 7) OR (1 OR 0)     = " << ((5 > 6 && 7 == 7) || (1 || 0)) <<endl; // 1
    cout << "NOT(5 > 6 and 7 = 7) OR (1 OR 0)     = " << !((5 > 6 && 7 == 7) || (1 || 0)) <<endl; // 0
    cout << "NOT(5 > 6 and 7 = 7) OR NOT (1 OR 0)      = " << (!((5 > 6 && 7 == 7) ||! (1 || 0)) ) <<endl; // 1
    cout << "NOT(5 > 6 and 7 = 7) AND NOT (1 OR 0)      = " << (!((5 > 6 && 7 == 7) &&! (1 || 0)) )   <<endl; // 1
    cout << "((5>6 AND 7<=8) OR (8>1 and 4<=3)) AND True = " <<( ((5>6 && 7<=8) || (8>1 && 4<=3)) && 1 ) <<endl; // 0 
    cout << "( (5>6 AND NOT  (7<=8)) AND (8>1 OR 4<=3) ) OR True = " <<( ( (5>6 &&!  (7<=8)) && (8>1 || 4<=3) ) || 1 ) <<endl; // 1
    cout << "******************************************\n\n";

     return 0;


}