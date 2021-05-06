/*
Program 8_ExtraCredit
Duarte, Cameryn
CSC119-142 Introduction to Programming C++ Spring 2021
03/30/2021
This program performs a game of tic tac toe
*/
#include<iostream>
using namespace std;
const int SIZE = 3, PLAYER_NUMBER = 2;//global constants
void show_gameboard(char (&game)[SIZE][SIZE]);//function prototype, passes gameboard array by reference
void player_move(int& ro, int& col, char (&game)[SIZE][SIZE], int (&play)[PLAYER_NUMBER], 
char (&xO)[PLAYER_NUMBER]);//function prototype, passing all variables by reference
int main()
{
    int player[PLAYER_NUMBER] = {1, 2};//array to hold player number (player #1 or player #2)
    int row, column, totalRounds = 5;//variables for storing user input and initialized variable for how many total rounds there
    //are of game
    char gameBoard[SIZE][SIZE] = {'*', '*', '*', '*', '*', '*', '*', '*', '*'};// 2 dimensional array to act as gamebiard 
    char xOrO[PLAYER_NUMBER] = {'X', 'O'};//array to store whether x or o is to be added to game board
    cout << "Welcome to tic tac toe!" << endl;
    show_gameboard(gameBoard);//displays gamebord
    for(int count = 1; count <= totalRounds; count++)
    {   player_move(row, column, gameBoard, player, xOrO);//calls function which allows game to be played and repeats after each
    }                                                     //player makes a move
    return 0;
}
void show_gameboard(char (&game)[SIZE][SIZE])//function which displays the gamebiard, passed by reference so it can be updated after
{                                             //each move
    cout << "---------" << endl;
    for(int i = 0; i < SIZE; i++)
    {   cout << "| ";
        for(int j = 0; j < SIZE; j++)     //double for loop for two dimensional array
        {   cout << game[i][j] << " ";
        }   
        cout << "|" << endl; 
    }
    cout << "---------" << endl;
}
void player_move(int& ro, int& col, char (&game)[SIZE][SIZE], int (&play)[PLAYER_NUMBER],
char (&xO)[PLAYER_NUMBER])//function which allows game to be played
{
    for(int k = 0; k < PLAYER_NUMBER; k++)
    {   cout << "Player #" << play[k] << " enter the row and column where you'd like to place an ";
        cout << xO[k] << ", separated by a space: ";// use of player and xOrO arrays to display player one or player two, X or O
        cin >> ro >> col;//user input of where to place the x or o
        while(ro < 1 || ro > 3 || col < 1 || col > 3)//input validation, only numbers between 1 and 3 allowed
        {   cout << "ERROR: MUST BE A VALID SPOT WITH NUMBERS BETWEEN 1 AND 3." << endl << endl;
            cout << "Player #" << play[k] << " enter the row and column where you'd like to place an " << xO[k];
            cout << ", separated by a space: ";
            cin >> ro >> col;
        }
        ro -= 1;//row and column - 1 because array spots start with 0, and it's less confusing for the user to enter numbers 
        col -= 1;//between 1 and 3, rather than between 0 and 2
        while(game[ro][col] == 'X' || game[ro][col] == 'O')//input validation, doesn't allow a user to enter a spot thats already taken
        {   cout << "ERROR: SPOT ALREADY TAKEN." << endl << endl;
            cout << "Player #" << play[k] << " enter the row and column where you'd like to place an " << xO[k];
            cout << ", separated by a space: ";
            cin >> ro >> col;
            ro -= 1;
            col -= 1;
        }
        game[ro][col] = xO[k];//assigns an X or an O to the spot chosen by the user
        show_gameboard(game);//displays updated gameboard
        for(int l = 0; l < PLAYER_NUMBER; l++)
        {
            if((game[0][0] == xO[l] && game[1][0] == xO[l] && game[2][0] == xO[l])//tests after every move to determine if either  
            || (game[0][1] == xO[l] && game[1][1] == xO[l] && game[2][1] == xO[l])//player has won by using a loop to alternate whether
            || (game[0][2] == xO[l] && game[1][2] == xO[l] && game[2][2] == xO[l])//its testing for x or o
            || (game[0][0] == xO[l] && game[0][1] == xO[l] && game[0][2] == xO[l])
            || (game[1][0] == xO[l] && game[1][1] == xO[l] && game[1][2] == xO[l])
            || (game[2][0] == xO[l] && game[2][1] == xO[l] && game[2][2] == xO[l])
            || (game[0][0] == xO[l] && game[1][1] == xO[l] && game[2][2] == xO[l])
            || (game[0][2] == xO[l] && game[1][1] == xO[l] && game[2][0] == xO[l]))
            {   cout << xO[l] << " Wins!" << endl << endl;
                exit(0);//ends game if either player has won                            
            }
        }
        if(game[0][0] != '*' && game[0][1] != '*' && game[0][2] != '*'//a tie has occured if all spaces are filled but neither x or
        && game[1][0] != '*' && game[1][1] != '*' && game[1][2] != '*'//o has won
        && game[2][0] != '*' && game[2][1] != '*' && game[2][2] != '*')
        {   cout << "Tie!" << endl << endl;
            exit(0);//end game if theres a tie
        }
    }
}

