import random

def select_random_word(category_words):
    return category_words[random.randint(0, len(category_words) - 1)]

def display_word(word, guessed_letters):
    for letter in word:
        if letter in guessed_letters:
            print(letter, end='')
        else:
            print('_', end='')
    print()

def main():
    animal_words = ["elephant", "monkey", "lion", "giraffe"]
    team_words = ["arsenal", "chelsea", "liverpool", "napoli"]

    print("Welcome to the Word Guessing Game!")
    print("Choose a category (1 - Animals, 2 - Teams): ")
    category_choice = int(input())

    selected_category = animal_words if category_choice == 1 else team_words
    selected_word = select_random_word(selected_category)
    guessed_letters = set()
    chances = 6

    while chances > 0:
        print("Chances left:", chances)
        display_word(selected_word, guessed_letters)

        print("Guess a letter or type 'exit' to quit: ")
        guess = input().lower()
        if len(guess) != 1 or not guess.isalpha():
            print("Please enter a valid letter.")
        else:
            letter = guess[0]
            if letter in guessed_letters:
                print("You've already guessed this letter.")
            else:
                print("Correct guess!" if letter in selected_word else "Incorrect guess. Try again.")
                guessed_letters.add(letter)
                chances -= (letter not in selected_word)

            if all(letter in guessed_letters for letter in selected_word):
                print("Congratulations! You've guessed the word:", selected_word)
                break

    if chances == 0:
        print("You've run out of chances. The word was:", selected_word)

if __name__ == "__main__":
    main()
