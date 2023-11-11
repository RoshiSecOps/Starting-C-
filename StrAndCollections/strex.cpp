#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main()
{
    string firstWord;
    string secondWord;
    //int firstNumber = firstWord.length();
    //int secondNumber = secondWord.length();
    bool keepgoing = true;
    int answer;
    while(keepgoing)
    {
        cout << "Enter a word: ";
        cin >> firstWord;
        cout << "You entered " << firstWord <<". \nEnter another word: ";
        cin >> secondWord;
        int firstNumber = firstWord.length();
        int secondNumber = secondWord.length();
        if ( firstNumber == secondNumber)
        {
            cout << "Your words are the same length! \nWant another round? \n0 to cancel, any other number to continue.";
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
                cout << "Your first word is longer! \nWant another round? \n0 to cancel, any other number to continue.";
                cin >> answer;
            if (answer == 0)
                {
                    keepgoing = false;
                }
            }
            if ( firstNumber < secondNumber)
            {
                cout << "Your second word is longer! \nWant another round? \n0 to cancel, any other number to continue.";
                cin >> answer;
            if (answer == 0)
                {
                    keepgoing = false;
                }
        
            }
        }
    }
}
        
    
