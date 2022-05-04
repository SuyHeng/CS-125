
#include <iostream>

using namespace std;
void greet()
{
    cout << "=====================\n";
    cout << "Hangman: The Game\n";
    cout << "=====================\n";
}

void display_misses(int misses)
{
    if (misses == 0)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 1)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 2)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 3)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 4)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\ | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 5)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\ | \n";
        cout << " /    | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 6)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\ | \n";
        cout << " / \\ | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
}

void GameMechanics()
{
    // wordlist that generate for the user to guess
    string wordList[] = {"apple", "berry", "pineapple", "peanut", "banana"};
    string word;
    int wordlength;

    // variable for game mechainic dont touch it
    int miss = 0;
    char guessWord;
    int wordFound = 0;
    bool guessWrong = false;

    word = wordList[rand() % 5];         // generating word
    wordlength = word.length();          // turn string into char for user to guess
    string displayWord(wordlength, '_'); // display the word and guessed word

    while (miss < 6)
    {
        if (wordFound >= wordlength) // when user guess all the word correct
        {
            cout << "Congratulations! You Win!" << endl;
            break;
        }

        display_misses(miss);                // display the hangman
        for (int i = 0; i < wordlength; i++) // display the remaingword and guessed word
        {
            cout << displayWord[i];
        }
        cout << endl;
        cin >> guessWord; // ask user to guess for input

        guessWrong = true; // setting to true so when no word guess right it stay true for the function below to know it guess wrong
        for (int i = 0; i < wordlength; i++)
        {
            if (word[i] == guessWord && displayWord[i] == '_')
            {
                displayWord[i] = guessWord;
                wordFound++;
                guessWrong = false; // guess right so it wont add up the miss number
            }
            else if (guessWord == displayWord[i]) // bug fix for same word in the displayWord
            {
                guessWrong = false;
            }
        }

        // since no word guess right it stay true so miss is added up
        if (guessWrong == true)
        {
            miss++;
        }

        // guess wrong more than 6 lose
        if (miss == 6)
        {
            cout << "Game Over! You Lose :(" << endl;
            break;
        }
    }
}

int main()
{
    char x;

    greet();
    cout << "Press any key to start..." << endl;
    cin >> x;

    GameMechanics();

    return 0;
}
