#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int firstNumber;
    int secondNumber = 2;
    bool keepgoing = true;
    int answer;
    while(keepgoing)
    {
        cout << "Enter a number: ";
        cin >> firstNumber;
        cout << "You entered " << firstNumber <<". \nStarting the game!";
        if ( firstNumber == secondNumber)
        {
            cout << "you guessed it! \nWant another round? \n0 to cancel, any other number to continue.";
            cin >> answer;
            if (answer == 0)
            {
                keepgoing = false;
            }
            
        }
        else
        {  
            if ( firstNumber > secondNumber)
            {
                cout << "\nGuess lower!";
            }
            if (firstNumber < secondNumber)
            {
                cout <<"\nGuess higher!";
            }
        }
    }
}
    