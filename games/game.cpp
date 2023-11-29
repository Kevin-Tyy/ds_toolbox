#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

string selectRandomWord(const vector<string> &categoryWords) {
    return categoryWords[rand() % categoryWords.size()];
}

void displayWord(const string &word, const string &guessedLetters) {
    for (char letter : word) cout << (guessedLetters.find(letter) != string::npos ? letter : '_');
    cout << endl;
}

int main() {
    srand(time(0));

    vector<string> animals = {"elephant", "monkey", "lion", "giraffe"};
    vector<string> teams = {"arsenal", "chelsea", "liverpool", "napoli"};

    cout << "Welcome to the Word Guessing Game!\nChoose a category (1 - Animals, 2 - Teams): ";
    int categoryChoice;
    cin >> categoryChoice;

    vector<string> selectedCategory = (categoryChoice == 1) ? animals : teams;
    string selectedWord = selectRandomWord(selectedCategory);
    string guessedLetters;
    int chances = 6;

    while (chances > 0) {
        cout << "Chances left: " << chances << "\n";
        displayWord(selectedWord, guessedLetters);

        cout << "Guess a letter or type 'exit' to quit: ";
        string guess;
        cin >> guess;
        if (guess.length() != 1 || !isalpha(guess[0])) {
            cout << "Please enter a valid letter.\n";
        } else {
            char letter = tolower(guess[0]);
            if (guessedLetters.find(letter) != string::npos) {
                cout << "You've already guessed this letter.\n";
            } else {
                cout << (selectedWord.find(letter) != string::npos ? "Correct guess!\n" : "Incorrect guess. Try again.\n");
                guessedLetters += letter;
                chances -= (selectedWord.find(letter) == string::npos);
            }
        }

        if (selectedWord.find_first_not_of(guessedLetters) == string::npos) {
            cout << "Congratulations! You've guessed the word: " << selectedWord << "\n";
            break;
        }
    }

    if (chances == 0) {
        cout << "You've run out of chances. The word was: " << selectedWord << "\n";
    }

    return 0;
}
