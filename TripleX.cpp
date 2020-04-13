
#include <iostream>
using namespace std;

int main ()
{
    //Print welcome messages to the terminal.
    cout << endl<< "Congrats Assasin, you have been assigned a case!" <<endl;
    cout << "You need to break into the Cyclop's lair and kill him in his sleep." <<endl;
    cout << "Enter the correct codes to his lair before the alram sets off, alerting the guards." << endl << endl << endl;

 
    //Declare 3 number code
    const int codeA = 4;
    const int codeB = 3;
    const  int codeC = 2; 

    const int codeSum = codeA + codeB + codeC;
    const int codepProduct = codeA * codeB * codeC;

    //print sum and product to terminal 
    cout << "*** There are 3 numbers in the code." << endl;
    cout << "*** The codes add up to: " << codeSum << endl;
    cout << "*** The codes multiple out to give: " << codeProduct << endl << endl;

    int PlayerGuess;
    
    return 0; 
}

 /* 
     printf (" You need to enter the correct codes to continue!");
     std:: cout << std:: endl;

*/