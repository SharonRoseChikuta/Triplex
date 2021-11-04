
#include <iostream>
using namespace std;

int main ()
{
    //Print welcome messages to the terminal.
    cout << endl<< "Congrats Assasin, you have been assigned a case!" <<endl;
    cout << "You need to break into the Cyclop's lair and kill him in his sleep." <<endl;
    cout << "Enter the correct codes to his lair before the alram sets off, alerting his bandits." << endl << endl << endl;


    //Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const  int CodeC = 2; 

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //print sum and product to terminal 
    cout << "*** There are 3 numbers in the code." << endl;
    cout << "*** The codes add up to: " << CodeSum << endl;
    cout << "*** The codes multiple out to give: " << CodeProduct << endl << endl;

    //initialize guesses
    int GuessA, GuessB, GuessC;

    //store players guess from terminal
    cin >> GuessA >> GuessB >> GuessC;
   

    int GuessSum = GuessA + GuessB + GuessC;
    int  GuessProduct = GuessA * GuessB * GuessC;

    //check if player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
    //if this statement returns false it will skip the code and move on to the next line 
    cout << "You're in, goodluck!" << endl << endl;
    }
    else 
    {
        //how can I change the code so that the guesses are limited, like "You have three tries left!"
        cout << "You have failed. The bandits are coming, run!" <<endl << endl;
    }



    return 0; 
}

 /* 
     printf (" You need to enter the correct codes to continue!");
     std:: cout << std:: endl;
     // cout << "You guessed: " << GuessA << GuessB <<  GuessC << endl << endl;
   
    testing testing 

*/