
#include <iostream>
using namespace std;

int main ()
{
    //Print welcome messages to the terminal.
    cout << "Congrats Agent, you have been assigned a case! You need to break into a secure server room." <<endl;
    cout << "You need to enter the correct codes to continue!" << endl;

 
    //Declare 3 number code
    const int a = 4;
    const int b = 3;
    const  int c = 2; 

    const int sum = a + b + c;
    const int product = a * b * c;

    //print sum and product to terminal 
    cout << "There are 3 numbers in the code." << endl;
    cout << "The codes add up to " << sum << endl;
    cout << "The codes multiple out to " << product << endl;

    return 0; 
}

 /* 
     printf (" You need to enter the correct codes to continue!");
     std:: cout << std:: endl;

*/