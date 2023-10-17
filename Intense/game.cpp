#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    std::vector<std::string> words = { "apple", "banana", "chair", "date", "elephant", "forest" };
    std::string wordToGuess = words[rand() % words.size()];

    const int maxAttempts = 6;
    int attemptsLeft = maxAttempts;
    std::string guessedWord(wordToGuess.length(), '_');

    while (attemptsLeft > 0) {
        std::cout << "Word to guess: " << guessedWord << std::endl;
        std::cout << "Attempts left: " << attemptsLeft << std::endl;

        char guess;
        std::cout << "Enter a letter: ";
        std::cin >> guess;

        bool correctGuess = false;
        for (size_t i = 0; i < wordToGuess.length(); i++) {
            if (wordToGuess[i] == guess) {
                guessedWord[i] = guess;
                correctGuess = true;
            }
        }

        if (correctGuess) {
            std::cout << "Correct guess!" << std::endl;
        } else {
            std::cout << "Incorrect guess!" << std::endl;
            attemptsLeft--;
        }

        if (wordToGuess == guessedWord) {
            std::cout << "Congratulations! You guessed the word: " << wordToGuess << std::endl;
            break;
        }
    }

    if (attemptsLeft == 0) {
        std::cout << "Out of attempts! The word was: " << wordToGuess << std::endl;
    }

    return 0;
}
