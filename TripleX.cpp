
#include <iostream>
using namespace std;

void PrintIntroduction (int difficulty)
{
    cout << "\n\nCongrats Assasin, you have been assigned a level "  << difficulty << " case! \n";
    cout << "You need to break into the Cyclop's lair and kill him in his sleep \n";
    cout << "Enter the correct codes to his lair before the alram sets off, alerting his bandits.\n\n\n" ;
}

bool PlayGame (int difficulty)
{

PrintIntroduction(difficulty);

//Print welcome messages to the terminal.
    
    //Declare 3 number code
    const int CodeA = rand();
    const int CodeB = rand();
    const  int CodeC = rand(); 

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //print sum and product to terminal 
    cout << "*** There are 3 numbers in the code.\n"; 
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
        cout << "***You're in, goodluck! Keep going! ***\n" ;
        return true;

    }
    else 
    {
        //how can I change the code so that the guesses are limited, like "You have three tries left!"
        cout << " *** You have failed. The bandits are coming, try again!!! *** \n";
        return false; 
    }

}



int main ()
{
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) //will loop game until al levels are completed
    {

        cout 
        /*
        bool bLevelComplete = PlayGame(LevelDifficulty);
       
        cin.clear(); //clears any errors
        cin.ignore(); //discards the buffer

        if (bLevelComplete)
        {
            //increase the level difficulty
            ++LevelDifficulty; //take the level dificulty and increase by one
        }
        */
        
    }
     
    cout << "***Congrats mate, you are free!!***";

    return 0; 
}

 /* 
     printf (" You need to enter the correct codes to continue!");
     std:: cout << std:: endl;
     // cout << "You guessed: " << GuessA << GuessB <<  GuessC << endl << endl;
   
    testing testig i want to commit this 

*/