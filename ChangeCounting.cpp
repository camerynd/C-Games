#include <iostream>
#include <iomanip>//allows use of setw 
using namespace std;
//function prototypes
void display_rules();
void user_input(int& pennies,int& nickels,int& dimes,int& quarters);
void calculate_total(int& pennies, int& nickels, int& dimes, int& quarters);
void display_results(int& pennies, int& nickels, int& dimes, int& quarters);
//declaring universal constants
const int PENNY = 1, NICKEL = 5, DIME = 10, QUARTER = 25;
//main function
int main()
{ 
    //declaring variables
    int numberOfPennies, numberOfNickels, numberOfDimes, numberOfQuarters;
    //greeting user
    cout << "Welcome to the Change Counting Game!";
    cout << endl << endl;
    //calling functions
    display_rules();
    user_input(numberOfPennies, numberOfNickels, numberOfDimes, numberOfQuarters);
    calculate_total(numberOfPennies, numberOfNickels, numberOfDimes, numberOfQuarters);
    display_results(numberOfPennies, numberOfNickels, numberOfDimes, numberOfQuarters);

    return 0;
}
//explaining rules to user
void display_rules()
{ 
    cout << "The object of the game is to come up with the correct number of ";
    cout << endl << "pennies, nickels, dimes, and quarters to make $1. ";
    cout << endl << "Press enter to start.";
    cin.ignore(1);//pausing program until user hits enter
    cout << endl;
}
//user input, allowing game play
void user_input(int& pennies,int& nickels,int& dimes,int& quarters)
{
    cout << setw(15) << "Pennies: ";
    cin >> pennies;
    cout << setw(15) << "Nickels: ";
    cin >> nickels;
    cout << setw(15) << "Dimes: ";
    cin >> dimes;
    cout << setw(15) << "Quarters: ";
    cin >> quarters;
    cout << endl;
}
//processing
void calculate_total(int& pennies, int& nickels, int& dimes, int& quarters)
{
    pennies = pennies * PENNY;
    nickels = nickels * NICKEL;
    dimes = dimes * DIME;
    quarters = quarters * QUARTER;
}
//determining whether user won or lost depending on input and displaying results
void display_results(int& pennies, int& nickels, int& dimes, int& quarters)
{
    if ((pennies + nickels + dimes + quarters) == 100)
    {
        cout << "Congratulations, you win!";
        cout << endl << "°˖✧◝(⁰▿⁰)◜✧˖°";//celebratory emoticon
    }
    else if ((pennies + nickels + dimes + quarters) < 100)
    {
        cout << "Too low, you lose. Better luck next time!";
        cout << endl << "‾͟͟͞(((ꎤ >口<)̂ꎤ⁾⁾⁾⁾";//angry emoticon
    }
    else if ((pennies + nickels + dimes + quarters) > 100)
    {
        cout << "Too high, you lose. Better luck next time!";
        cout << endl << "‾͟͟͞(((ꎤ >口<)̂ꎤ⁾⁾⁾⁾";
    }
}
