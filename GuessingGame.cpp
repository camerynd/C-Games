#include <iostream>
#include <cstdlib>
using namespace std;
//function prototypes
void user_input(int& guess);
void generate_number(int& random);
void display_results(int& random, int& guess);

int main()
{
    int randomNumber, userGuess;//local variables
//calling functions
    user_input(userGuess);
    generate_number(randomNumber);
    display_results(randomNumber, userGuess);

    return 0;

}
//function 1
void user_input(int& guess)
{
    cout << "Guessing game!!! Guess a number between 0 and 10. ";//giving instructions
    cin >> guess;//user input
}
//function 2
void generate_number(int& random)
{
    srand(time(0));//stops program from generating same number each time it is run
    random = rand() % 10;//generates random number
}
//function 3
void display_results(int& random, int& guess)
{
    while (guess > 10 || guess < 1)//doesnt accept user input until it is within the parameters
    {
        cout << "Please enter a number between 0 and 10. ";
        cin >> guess;
    }
    while (guess > random && guess < 11)//displays response of incorrect and prompts user to 
    //enter a new number
    {
        cout << "Too high! Try again. ";
        cin >> guess;
    }
    while (guess < random && guess >= 0)//displays response of incorrect and prompts user to 
    //enter a new number
    {
        cout << "Too low! Try again. ";
        cin >> guess;
    }
    if (guess == random)// congratulates user if guess matches randomly generated number
    {
        cout << "Correct! Your guess was " << guess << " and the ";
        cout << "random number was " << random << "." << endl;
        cout << "☆*:.｡. o(≧▽≦)o .｡.:*☆";
    }
}


