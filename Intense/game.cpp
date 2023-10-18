#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <ctype.h>



using namespace std;

// Function to select a random word from a category
string selectRandomWord(vector<string> &categoryWords)
{
    int randomIndex = rand() % categoryWords.size();
    return categoryWords[randomIndex];
}

// Function to display the word with guessed letters
void displayWord(const string &word, const string guessedLetters)
{
    for (char letter : word)
    {
        if (guessedLetters.find(letter) != string::npos)
        {
            cout << letter;
        }
        else
        {
            cout << '_';
        }
    }
    cout << endl;
}

int main()
{
    srand(time(0)); // Seed for random number generation

    // what is a vector? - a vector is an array like data structure that can shrink or grow depending on the number of its elements

    vector<string> animals = {"elephant", "tiger", "lion", "giraffe"};
    vector<string> teams = {"lakers", "yankees", "warriors", "packers"};

    // Ask the user to select a category

    cout << "Welcome to the Word Guessing Game!" << endl;
    cout << "Choose a category (1 - Animals, 2 - Teams): ";
    int categoryChoice;
    cin >> categoryChoice;

    vector<string> selectedCategory;
    if (categoryChoice == 1)
    {
        selectedCategory = animals;
    }
    else if (categoryChoice == 2)
    {
        selectedCategory = teams;
    }
    // Add more category choices and handling as needed

    string selectedWord = selectRandomWord(selectedCategory);
    string guessedLetters;
    int chances = 6; // You can adjust the number of chances

    while (chances > 0)
    {
        cout << "Chances left: " << chances << endl;
        displayWord(selectedWord, guessedLetters);

        cout << "Guess a letter or type 'exit' to quit: ";
        string guess;
        cin >> guess;
        if (guess.length() != 1 || !isalpha(guess[0]))
        {
            cout << "Please enter a valid letter." << endl;
        }
        else
        {
            char letter = tolower(guess[0]);
            if (guessedLetters.find(letter) != string::npos)
            {
                cout << "You've already guessed this letter." << endl;
            }
            else if (selectedWord.find(letter) != string::npos)
            {
                cout << "Correct guess!" << endl;
                guessedLetters += letter;
            }
            else
            {
                cout << "Incorrect guess. Try again." << endl;
                guessedLetters += letter;
                chances--;
            }
        }

        if (selectedWord.find_first_not_of(guessedLetters) == string::npos)
        {
            cout << "Congratulations! You've guessed the word: " << selectedWord << endl;
            break;
        }
    }

    if (chances == 0)
    {
        cout << "You've run out of chances. The word was: " << selectedWord << endl;
    }


    return 0;
}
