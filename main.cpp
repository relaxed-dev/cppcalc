#include <iostream>

using std::cout;
using std::cin;
using std::string;

bool on=false, haserror=false;

void clrscr()
{
    cout << "\033[2J\033[1;1H";
}

void error()
{
    clrscr();
    cout << "Invalid Input...\n\n";
}

void calcfunc()
{
    // define variables for math operations
    double long a,b;
    // take 2 number inputs
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;



}

void startscr()
{
    // define variables
    short int op=0; const int ops=4;
    // display title
    cout << "|=====================|\n"<<"| Calculator V2.0 C++ |\n"<< "|=====================|\n";
    // display options
    cout << "\n[ Operations ]\n";
    cout << "\n1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Divide\n";
    cout << "4. Turn Off\n";
    // take input
    cout << "\nType Here: ";
    cin >> op;
    cout << "\n";
    // failsafes
    if ( (op) <= (ops) ) { haserror=false; }
    else { error(); haserror=true; }
}

int main()
{
    on = true;
    while ( (on) == true )
    {
        // print starting screen
        startscr();
        // failsafes
        if ( (haserror) == true ) { continue; }
        // break to prevent infinite loop
        else if ( (haserror) == false ) { break; }
    }
    return 0;
}
