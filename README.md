# Triplex
C++ game

Triple X Game Design Doc (GDD)

Simple number puzzle game
Hacking into a computer lock
Find valid combination of locks (three variables)
Player is given hints at the start of the game
Starts pretty easy and becomes harder



For the first progress shot (01triplexprogressshot. )this is what has been accomplished. We had to post our progress on the community forum on GameDev.tv

Here is a screenshot of the TripleX game this far.

So far we have printed the expression to welcome the player and explain the objective.
We have declared three constant variables. We have declared a constant variable for their sum and another constant variable for their products.
We have added expression to the notify the player of the hints.


Code is conforming to Unreal Coding Standards as listed on their website. They suggest using UperCamelCase intead of snake_case


When reading in player guesses at first we had a glitch.  If you enter something that isn’t an integer, it will convert the letter or character to a zero.
then the code freezes until you rest cin.

For replayability we will fix the bug later. 

We want the player to only enter numbers. 
The player can now insert the numbers 
    seperated by spaces or 
    on seperate lines.

