/*
Chapter06_ExtraCredit.cpp
Duarte, Cameryn
CSC119-143 Intro to Programming Spring 2021
03/03/2021
This program performs a game of rock paper scissors.
*/
#include<iostream>
#include <cstdlib>//allows random number function
#include <ctime>//makes random number function provide a different number each time it is used
using namespace std;
//function prototypes
int computer_selection();
int user_selection();
void return_computer_selection(int compMove);
void winner(int useMove, int compMove);
//driver program
int main()
{   
    int computerMove, userMove;//variables to store values returned from int functions

    cout << "Let's play roshambo!" << endl << endl;

    computerMove = computer_selection();//perform computer_selection function and store return
    //value in variable computerMove

    cout << "Ro...";
    cin.get();
    cout << "Sham...";
    cin.get();
    cout << "Bo!";
    cin.get();
    cout << endl;

    userMove = user_selection();//perform user_selection and store return value in variable userMove

    return_computer_selection(computerMove);//display computer selection
    
    winner(userMove, computerMove);//determine winner

   if (userMove == computerMove)//repeat functions if there was a tie
   {
      do
      {  cout << "Tie! Try again." << endl << endl;
         computerMove = computer_selection();
         userMove = user_selection();
         return_computer_selection(computerMove);
         winner(userMove, computerMove);
      }while(userMove == computerMove);//until tie is broken
   }
   
    return 0;
}

int computer_selection()//generate random number function to return computer's move
{   
    srand(time(0));
    int selection = rand() % 3 + 1;
    return selection;
}

int user_selection()//user input function to return user's move
{  
    int move;
    cout << "Make your move." << endl << "Rock = 1 Paper = 2 Scissors = 3. ";
    cin >> move;
    cout << endl;
    return move;
}

void return_computer_selection(int compMove)//print computer's selection depending on random number generated
{   
    if (compMove == 1)
        cout << "I chose rock!" << endl << endl;
    if (compMove == 2)
        cout << "I chose paper!" << endl << endl;
    if (compMove == 3)
        cout << "I chose scissors!" << endl << endl;
}

void winner(int useMove, int compMove)//use computer's selection and user's selection to determine winner 
{   
    if ((useMove == 1 && compMove == 2) || (compMove == 1 && useMove == 2))
        cout << "Paper covers rock, paper wins!" << endl << endl;
    if ((useMove == 1 && compMove == 3) || (compMove == 1 && useMove == 3))
        cout << "Rock smashes scissors, rock wins!" << endl << endl;
    if ((useMove == 2 && compMove == 3) || (compMove == 2 && useMove == 3))
        cout << "Scissors cuts paper, scissors wins!" << endl << endl;
}
