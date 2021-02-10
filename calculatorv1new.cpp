#include <iostream>

using std::cout;
using std::string;
using std::cin;

bool varerror=false,varerror1=false,wloop=false; double a,b; char symb; int choice; const int choices=3;

void clrscr(){
    cout << "\033[2J\033[1;1H";
}

void error(){
    clrscr();
    cout << "Invalid Input.\n\n";
}

void opselect(){
    cout << "Select Operation: \n" << "1. Add\n" << "2. Subtract\n" << "3. Divide\n\n" << "Type Here: ";
    cin >> choice;
    if ( /*(!(choice) == int(choice)) <- Need to update this, not working right now. ||*/ (choice) > (choices) || (choice) < int(1) )
    {
        cout << "\nInvalid Input.\n\n";
        varerror1=true;
    }
}

void abask(){
    //a=double(0.0);
    //b=double(0.0);
    cout << "A = "; cin >> a; cout << "\n";
    cout << "B = "; cin >> b; cout << "\n";
}

void sum(){
    double varsum;
    if (choice){
        choice = int(choice);
    }
    else{
        cout << "";
    }
    
    if ( (choice) == int(1) ){
        varsum=(a+b); symb=char('+');
    }
    if ( (choice) == int(2) ){
        varsum=(a-b); symb=char('-');
    }
    cout << "\nAnswer:" << "\n" << a << " " << symb << " " << b << " = " << varsum << "\n";
    // EDIT: Changed, so that the entire sum function is not executed if varrerror==true.
}

int main() {
    cout << "|============================|\n" 
         << "| Simple Calculator V2 (C++) |\n"
         << "|============================|\n\n";
    opselect();
    if ( (varerror1) != true ) // varrerror1 is opselect's error mechanism, not sum()'s. If opselect has no error then execute abask then sum (abask needed for sum).
    {
        //wloop=true;
        //while ( (wloop) == true ){}
        if ( (varerror) == false ){
            abask();
            // ab error checking
            if (a && b || (double(a)) == !(double (a)) || (double(b)) == !(double (b)) ){    // Moved ablogic() down here, no longer a function.
                //double a=a; double b=b; 
                sum(); //varerror=false;
            } else{
                error(); varerror=true;
                //continue;
            }
        }  
    }
    
    return 0;
}
