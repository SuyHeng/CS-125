
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
        cout << " /|\\  | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 5)
    {

        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " /    | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 6)
    {

        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " / \\  | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
}

void GameMechanics(string wordList[])
{
    // wordlist that generate for the user to guess
    // string wordList[] = {"apple", "berry", "nigga", "bussin", "boi"};
    string word;
    int wordlength;

    // variable for game mechainic dont touch it
    int miss = 0;
    char guessWord;
    int wordFound = 0;
    bool guessWrong = false;

    word = wordList[1];                  // generating word
    wordlength = word.length();          // turn string into char for user to guess
    string displayWord(wordlength, '_'); // display the word and guessed word

    while (miss < 7)
    {

        display_misses(miss);                // display the hangman
        for (int i = 0; i < wordlength; i++) // display the remaingword and guessed word
        {
            cout << displayWord[i] << " ";
        }
        cout << endl
             << " ";

        if (wordFound >= wordlength) // when user guess all the word correct
        {
            cout << endl
                 << "****YOU WIN!****" << endl;
            break;
        }
        // guess wrong more than 6 lose
        if (miss == 6)
        {
            cout << "****YOU LOSE!****" << endl;
            break;
        }
        cout << " " << endl;
        cout << "You Have " << 6 - miss << " Lives Left." << endl;
        cout << "There are " << wordlength - wordFound << " letter left in the word." << endl;
        cout << "Guess a Letter: ";
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
            cout << "\n"
                 << guessWord << " is Wrong, Try Again. " << endl;

            miss++;
        }
        cout << " ----------- \n";
    }
}

int main()
{
    char inputUser;
    string fruitWord[] = {"apple", "berry", "grapes", "banana", "oranges", "watermelon"};
    string vegetableWord[] = {"potato", "tomato", "onion", "carrot", "lettuc", "celery"};
    string animalWord[] = {"dog", "shark", "elephant", "Mongoose"};
    string codingWord[] = {"javascript", "python", "css", "cpp"};
    string countryWord[] = {"cambodia", "america", "singapore", "thailand", "indonesia"};
    bool isRestart = true;
    greet();
    cout << "Press any key to start..." << endl;
    cin >> inputUser;

    do
    {
        cout << "Choose your Category:" << endl;
        cout << "[1] Fruits" << endl;
        cout << "[2] Vegetables" << endl;
        cout << "[3] Animals" << endl;
        cout << "[4] Coding Languages" << endl;
        cout << "[5] Countries Name" << endl;
        cout << "[x] Exit" << endl;
        cin >> inputUser;
        switch (toupper(inputUser))
        {
        case '1':
        {
            cout << "Guess the name of a fruit." << endl;
            GameMechanics(fruitWord);
        }
        break;
        case '2':
        {
            cout << "Guess the name of a Vegetable." << endl;
            GameMechanics(vegetableWord);
        }
        break;
        case '3':
        {
            cout << "Guess the name of a Animal." << endl;
            GameMechanics(animalWord);
        }
        break;
        case '4':
        {
            cout << "Guess the name of a Coding Languages." << endl;
            GameMechanics(codingWord);
        }
        break;
        case '5':
        {
            cout << "Guess the name of a Country." << endl;
            GameMechanics(countryWord);
        }
        break;
        case 'X':
        {
            cout << "Exiting..." << endl;
            isRestart = false;
        }
        break;
        default:
        {
            cout << "Invalid Input." << endl;
            isRestart = true;
        }
        break;
        }
        cin.clear();
        cin.ignore();
        if (isRestart != false)
        {
            cout << "Press Any Key to Try Again.." << endl;
            cin >> inputUser;
        }

    } while (isRestart == true);

    return 0;
}
