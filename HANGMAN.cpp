# include <iostream>
# include <stdio.h>
# include <time.h>                          
# include <iomanip>
#include <string>
#include<conio.h>

using namespace std;

void game(int x);
void miss(int);
void getdisplay();


int main()

{
    getdisplay();

    const int KEY_ARROW_CHAR1 = 224;
    const int KEY_ARROW_UP = 72;
    const int KEY_ARROW_DOWN = 80;
    const int KEY_ARROW_LEFT = 75;
    const int KEY_ARROW_RIGHT = 77;
    const int enter = 13;
    char input;
    cin.get(input);
    cout << endl << endl;
    if (input) {
        system("cls");

        cout << endl << endl << "\t\tWELCOME TO THE HANGMAN GAME " << endl << "\n\nChoose your preferred genre to guess from " << "\n\nYou may use arrow keys to navigate and press enter to select" << endl << endl << endl << endl;
        cout << "=> Actors" << endl << " Countries" << endl << " TV shows/Movies" << endl << " Cricketers" << endl << " Footballers" << endl << endl << endl;

        char x = 1;
        int select;

        while (1) {

            unsigned char ch1 = _getch();

            if (ch1 == KEY_ARROW_CHAR1)
            {

                // Some Arrow key was pressed, determine which?
                unsigned char ch2 = _getch();

                switch (ch2)
                {
                case KEY_ARROW_UP:
                    // code for arrow up
                    if (x != 1) {
                        x--;
                        if (x == 1) {
                            system("cls");

                            cout << endl << endl << "\t\tWELCOME TO THE HANGMAN GAME " << endl << "\n\nChoose your preferred genre to guess from " << "\n\nYou may use arrow keys to navigate and press enter to select" << endl << endl << endl << endl;
                            cout << "=> Actors" << endl << " Countries" << endl << " TV shows/Movies" << endl << " Cricketers" << endl << " Footballers" << endl << endl << endl;

                        }
                        if (x == 2) {
                            system("cls");

                            cout << endl << endl << "\t\tWELCOME TO THE HANGMAN GAME " << endl << "\n\nChoose your preferred genre to guess from " << "\n\nYou may use arrow keys to navigate and press enter to select" << endl << endl << endl << endl;
                            cout << "Actors" << endl << "==> Countries" << endl << " TV shows/Movies" << endl << " Cricketers" << endl << " Footballers" << endl << endl << endl;

                        }
                        if (x == 3) {
                            system("cls");

                            cout << endl << endl << "\t\tWELCOME TO THE HANGMAN GAME " << endl << "\n\nChoose your preferred genre to guess from " << "\n\nYou may use arrow keys to navigate and press enter to select" << endl << endl << endl << endl;
                            cout << " Actors" << endl << " Countries" << endl << "==> TV shows/Movies" << endl << " Cricketers" << endl << " Footballers" << endl << endl << endl;


                        } if (x == 4) {
                            system("cls");

                            cout << endl << endl << "\t\tWELCOME TO THE HANGMAN GAME " << endl << "\n\nChoose your preferred genre to guess from " << "\n\nYou may use arrow keys to navigate and press enter to select" << endl << endl << endl << endl;
                            cout << " Actors" << endl << " Countries" << endl << " TV shows/Movies" << endl << "==> Cricketers" << endl << " Footballers" << endl << endl << endl;

                        }

                    }
                    break;
                    break;
                case KEY_ARROW_DOWN:
                    // code for arrow down
                    if (x != 5) {
                        x++;
                        if (x == 2) {

                            system("cls");

                            cout << endl << endl << "\t\tWELCOME TO THE HANGMAN GAME " << endl << "\n\nChoose your preferred genre to guess from " << "\n\nYou may use arrow keys to navigate and press enter to select" << endl << endl << endl << endl;
                            cout << " Actors" << endl << "==> Countries" << endl << " TV shows/Movies" << endl << " Cricketers" << endl << " Footballers" << endl << endl << endl;

                        }
                        if (x == 3) {
                            system("cls");

                            cout << endl << endl << "\t\tWELCOME TO THE HANGMAN GAME " << endl << "\n\nChoose your preferred genre to guess from " << "\n\nYou may use arrow keys to navigate and press enter to select" << endl << endl << endl << endl;
                            cout << " Actors" << endl << " Countries" << endl << "==> TV shows/Movies" << endl << " Cricketers" << endl << " Footballers" << endl << endl << endl;
                        }
                        if (x == 4) {
                            system("cls");

                            cout << endl << endl << "\t\tWELCOME TO THE HANGMAN GAME " << endl << "\n\nChoose your preferred genre to guess from " << "\n\nYou may use arrow keys to navigate and press enter to select" << endl << endl << endl << endl;
                            cout << " Actors" << endl << " Countries" << endl << " TV shows/Movies" << endl << "==> Cricketers" << endl << " Footballers" << endl << endl << endl;

                        }
                        if (x == 5) {
                            system("cls");

                            cout << endl << endl << "\t\tWELCOME TO THE HANGMAN GAME " << endl << "\n\nChoose your preferred genre to guess from " << "\n\nYou may use arrow keys to navigate and press enter to select" << endl << endl << endl << endl;
                            cout << " Actors" << endl << " Countries" << endl << " TV shows/Movies" << endl << " Cricketers" << endl << "==> Footballers" << endl << endl << endl;

                        }

                    }
                    break;
                }
            }
            else if (ch1 == enter)
            {
                game(x);
                return 0;
            }
        }
    }
}

void game(int x)
{
    system("cls");


    switch (x)
    {
    case 1:
    {

        srand(time(0));
        int count = 0, random, k;
        const int size = 110;
        const char arr[size] = { "leonardo dicaprio,robert downeyjr,christian bale,tom cruise,emma watson,jennifer lawerence,angelina julie" };
        char selected[20];

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == ',' || arr[i] == '\0')
            {
                count++;
                if (arr[i] == '\0')       //RANDOM WORD GENERATION
                    break;
            }
        }

        random = rand() % count + 1;
        count = 0, k = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == ',' || arr[j] == '\0')
            {
                count++;
            }
            if (count == random - 1 && count < random)
            {
                if (arr[j] != ',')
                {
                    selected[k] = arr[j];         //STORING OF RANDOM WORD IN ARRAY
                    k++;
                }
            }
            if (count == random)
                break;
        }

        selected[k];
        char guess, temp;
        int c_guess = 0, m = 0, count_1 = 0;
        const int size_1 = k;
        char correct_guess[50];
        char inn_guess[7] = { '\0' };
        int wrong = 0;

        correct_guess[size_1];

        for (int i = 0; i < k; i++)
        {
            if (selected[i] != ' ')
                correct_guess[i] = '_';
            else
                correct_guess[i] = ' ';
        }
        system("cls");
        cout << "\n       Guess the Actor I am thinking to save your friend" << endl << endl;
        miss(c_guess);
        cout << setw(14) << " ";
        for (int i = 0; i < k; i++)
        {
            cout << setw(3) << correct_guess[i];
        }
        // OFFICIAL WORKING OF HANGMAN
        do
        {
            if (wrong == 0) {
                cout << endl << endl << endl << endl << "       Remaining guesses are: " << 7 - c_guess << endl;
                cout << endl << "       Enter an alphabet: ";
            }
            else {
                cout << setw(7) << " " << "Incorrect Guesses are: ";
                for (int i = 0; i < 7; i++)
                {
                    cout << setw(3) << inn_guess[i];
                }
                cout << endl;
                miss(c_guess);
                cout << endl;
                cout << setw(14) << " ";
                for (int i = 0; i < k; i++)
                {
                    cout << setw(3) << correct_guess[i];
                }
                cout << endl << endl << endl << endl << "       Remaining guesses are: " << 7 - c_guess << endl << "                     PLEASE ENTER LETTERS ONLY ";
                cout << endl << "       Enter an alphabet: ";

            }


            wrong = 0;
            cin >> guess;
            system("CLS");

            guess = tolower(guess);
            if (guess >= 'a' && guess <= 'z') {
                wrong = 0;
            }
            else wrong = 1;
            if (wrong == 0)
            {
                count = 0;
                for (int i = 0; i < k; i++)
                {
                    if (selected[i] == guess)
                    {
                        correct_guess[i] = selected[i];
                        count++;
                        count_1++;
                    }
                }
                if (count == 0)
                {
                    cout << endl << "\n\n       You have guessed incorrectly!!!" << endl << endl;
                    inn_guess[m] = guess;
                    m++;
                    c_guess++;
                }
                if (count != 0)
                {
                    cout << "\n\n       You have guessed correctly!!!!" << endl;
                }
                cout << setw(7) << " " << "Incorrect Guesses are: ";
                for (int i = 0; i < 7; i++)
                {
                    cout << setw(3) << inn_guess[i];
                }
                cout << endl;
                miss(c_guess);
                cout << endl;
                cout << setw(14) << " ";
                for (int i = 0; i < k; i++)
                {
                    cout << setw(3) << correct_guess[i];
                }
            }
        } while (c_guess < 7 && count_1 != k - 1);
        if (c_guess == 7)
        {
            cout << endl << endl << endl << endl << "        The Actor you had to guess was: ";
            for (int i = 0; i < k; i++)
            {
                cout << selected[i];
            }
            cout << endl << "       ";
            cout << endl << "        YOU LOST !!!! YOU COULD NOT SAVE YOUR FRIEND..." << endl << endl << endl;
            cout << endl << "                         GAME OVER!" << endl << endl << endl << endl;
        }
        if (count_1 == k - 1)
        {
            cout << endl << endl << "       You guessed the correct Actor!!!" << endl << endl << endl;
            cout << endl << endl << "       CONGRATULATIONS YOU WON THE GAME !!!";
            cout << endl << "                      GAME OVER!" << endl << endl << endl << endl;
        }

    }
    break;

    case 2:
    {

        srand(time(0));
        int count = 0, random, k;
        const int size = 100;
        const char arr[size] = { "iceland,norway,switerzerland,greece,scotland,japan,turkey,malaysia,saudiarabia,pakistan,germany" };
        char selected[20];

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == ',' || arr[i] == '\0')
            {
                count++;
                if (arr[i] == '\0')       //RANDOM WORD GENERATION
                    break;
            }
        }

        random = rand() % count + 1;
        count = 0, k = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == ',' || arr[j] == '\0')
            {
                count++;
            }
            if (count == random - 1 && count < random)
            {
                if (arr[j] != ',')
                {
                    selected[k] = arr[j];         //STORING OF RANDOM WORD IN ARRAY
                    k++;
                }
            }
            if (count == random)
                break;
        }

        selected[k];
        char guess, temp;
        int c_guess = 0, m = 0, count_1 = 0;
        const int size_1 = k;
        char correct_guess[50];
        char inn_guess[7] = { '\0' };
        int wrong = 0;

        correct_guess[size_1];

        for (int i = 0; i < k; i++)
        {
            if (selected[i] != ' ')
                correct_guess[i] = '_';
            else
                correct_guess[i] = ' ';
        }
        system("cls");
        cout << "\n       Guess the Country I am thinking to save your friend" << endl << endl;
        miss(c_guess);
        cout << setw(14) << " ";
        for (int i = 0; i < k; i++)
        {
            cout << setw(3) << correct_guess[i];
        }
        // OFFICIAL WORKING OF HANGMAN
        do
        {
            if (wrong == 0) {
                cout << endl << endl << endl << endl << "       Remaining guesses are: " << 7 - c_guess << endl;
                cout << endl << "       Enter an alphabet: ";
            }
            else {
                cout << setw(7) << " " << "Incorrect Guesses are: ";
                for (int i = 0; i < 7; i++)
                {
                    cout << setw(3) << inn_guess[i];
                }
                cout << endl;
                miss(c_guess);
                cout << endl;
                cout << setw(14) << " ";
                for (int i = 0; i < k; i++)
                {
                    cout << setw(3) << correct_guess[i];
                }
                cout << endl << endl << endl << endl << "       Remaining guesses are: " << 7 - c_guess << endl << "                     PLEASE ENTER LETTERS ONLY ";
                cout << endl << "       Enter an alphabet: ";

            }


            wrong = 0;
            cin >> guess;
            system("CLS");

            guess = tolower(guess);
            if (guess >= 'a' && guess <= 'z') {
                wrong = 0;
            }
            else wrong = 1;
            if (wrong == 0)
            {
                for (int i = 0; i < k; i++)
                {
                    if (selected[i] == guess)
                    {
                        correct_guess[i] = selected[i];
                        count++;
                        count_1++;
                    }
                }
                if (count == 0)
                {
                    cout << endl << "\n\n       You have guessed incorrectly!!!" << endl << endl;
                    inn_guess[m] = guess;
                    m++;
                    c_guess++;
                }
                if (count != 0)
                {
                    cout << "\n\n       You have guessed correctly!!!!" << endl;
                }
                cout << setw(7) << " " << "Incorrect Guesses are: ";
                for (int i = 0; i < 7; i++)
                {
                    cout << setw(3) << inn_guess[i];
                }
                cout << endl;
                miss(c_guess);
                cout << endl;
                cout << setw(14) << " ";
                for (int i = 0; i < k; i++)
                {
                    cout << setw(3) << correct_guess[i];
                }
            }
        } while (c_guess < 7 && count_1 != k);
        if (c_guess == 7)
        {
            cout << endl << endl << endl << endl << "        The Country you had to guess was: ";
            for (int i = 0; i < k; i++)
            {
                cout << selected[i];
            }
            cout << endl << "       ";
            cout << endl << "        YOU LOST !!!! YOU COULD NOT SAVE YOUR FRIEND..." << endl << endl << endl;
            cout << endl << "                         GAME OVER!" << endl << endl << endl << endl;
        }
        if (count_1 == k)
        {
            cout << endl << endl << "       You guessed the correct Country!!!" << endl << endl << endl;
            cout << endl << endl << "       CONGRATULATIONS YOU WON THE GAME !!!";
            cout << endl << "                      GAME OVER!" << endl << endl << endl << endl;
        }

    }
    break;

    case 3:
    {

        srand(time(0));
        int count = 0, random, k;
        const int size = 110;
        const char arr[size] = { "sherlock,breaking bad,stranger things,shutter island,the prestige,fifth wave,inception,thewolfofwallstreet" };
        char selected[20];

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == ',' || arr[i] == '\0')
            {
                count++;
                if (arr[i] == '\0')       //RANDOM WORD GENERATION
                    break;
            }
        }

        random = rand() % count + 1;
        count = 0, k = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == ',' || arr[j] == '\0')
            {
                count++;
            }
            if (count == random - 1 && count < random)
            {
                if (arr[j] != ',')
                {
                    selected[k] = arr[j];         //STORING OF RANDOM WORD IN ARRAY
                    k++;
                }
            }
            if (count == random)
                break;
        }

        selected[k];
        char guess, temp;
        int c_guess = 0, m = 0, count_1 = 0;
        const int size_1 = k;
        char correct_guess[50];
        char inn_guess[7] = { '\0' };
        int wrong = 0;

        correct_guess[size_1];

        for (int i = 0; i < k; i++)
        {
            if (selected[i] != ' ')
                correct_guess[i] = '_';
            else
                correct_guess[i] = ' ';
        }
        system("cls");
        cout << "\n       Guess the TV Show/Movie I am thinking to save your friend" << endl << endl;
        miss(c_guess);
        cout << setw(14) << " ";
        for (int i = 0; i < k; i++)
        {
            cout << setw(3) << correct_guess[i];
        }
        // OFFICIAL WORKING OF HANGMAN
        do
        {
            if (wrong == 0) {
                cout << endl << endl << endl << endl << "       Remaining guesses are: " << 7 - c_guess << endl;
                cout << endl << "       Enter an alphabet: ";
            }
            else {
                cout << setw(7) << " " << "Incorrect Guesses are: ";
                for (int i = 0; i < 7; i++)
                {
                    cout << setw(3) << inn_guess[i];
                }
                cout << endl;
                miss(c_guess);
                cout << endl;
                cout << setw(14) << " ";
                for (int i = 0; i < k; i++)
                {
                    cout << setw(3) << correct_guess[i];
                }
                cout << endl << endl << endl << endl << "       Remaining guesses are: " << 7 - c_guess << endl << "                     PLEASE ENTER LETTERS ONLY ";
                cout << endl << "       Enter an alphabet: ";

            }


            wrong = 0;
            cin >> guess;
            system("CLS");

            guess = tolower(guess);
            if (guess >= 'a' && guess <= 'z') {
                wrong = 0;
            }
            else wrong = 1;
            if (wrong == 0)
            {
                for (int i = 0; i < k; i++)
                {
                    if (selected[i] == guess)
                    {
                        correct_guess[i] = selected[i];
                        count++;
                        count_1++;
                    }
                }
                if (count == 0)
                {
                    cout << endl << "\n\n       You have guessed incorrectly!!!" << endl << endl;
                    inn_guess[m] = guess;
                    m++;
                    c_guess++;
                }
                if (count != 0)
                {
                    cout << "\n\n       You have guessed correctly!!!!" << endl;
                }
                cout << setw(7) << " " << "Incorrect Guesses are: ";
                for (int i = 0; i < 7; i++)
                {
                    cout << setw(3) << inn_guess[i];
                }
                cout << endl;
                miss(c_guess);
                cout << endl;
                cout << setw(14) << " ";
                for (int i = 0; i < k; i++)
                {
                    cout << setw(3) << correct_guess[i];
                }
            }
        } while (c_guess < 7 && count_1 != k - 1);
        if (c_guess == 7)
        {
            cout << endl << endl << endl << endl << "        The TV Show/Movie you had to guess was: ";
            for (int i = 0; i < k; i++)
            {
                cout << selected[i];
            }
            cout << endl << "       ";
            cout << endl << "        YOU LOST !!!! YOU COULD NOT SAVE YOUR FRIEND..." << endl << endl << endl;
            cout << endl << "                         GAME OVER!" << endl << endl << endl << endl;
        }
        if (count_1 == k - 1)
        {
            cout << endl << endl << "       You guessed the correct TV Show/Movie!!!" << endl << endl << endl;
            cout << endl << endl << "       CONGRATULATIONS YOU WON THE GAME !!!";
            cout << endl << "                      GAME OVER!" << endl << endl << endl << endl;
        }

    }
    break;

    case 4:
    {

        srand(time(0));
        int count = 0, random, k;
        const int size = 200;
        const char arr[size] = { "virat kohli,babar azam,steven smith,kane williamson,shaheen shah afridi,shadab khan,david warner,rashid khan,jos buttler,imran tahir,mitchel starc,waninduha saranga" };
        char selected[20];

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == ',' || arr[i] == '\0')
            {
                count++;
                if (arr[i] == '\0')       //RANDOM WORD GENERATION
                    break;
            }
        }

        random = rand() % count + 1;
        count = 0, k = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == ',' || arr[j] == '\0')
            {
                count++;
            }
            if (count == random - 1 && count < random)
            {
                if (arr[j] != ',')
                {
                    selected[k] = arr[j];         //STORING OF RANDOM WORD IN ARRAY
                    k++;
                }
            }
            if (count == random)
                break;
        }

        selected[k];
        char guess, temp;
        int c_guess = 0, m = 0, count_1 = 0;
        const int size_1 = k;
        char correct_guess[50];
        char inn_guess[7] = { '\0' };
        int wrong = 0;

        correct_guess[size_1];

        for (int i = 0; i < k; i++)
        {
            if (selected[i] != ' ')
                correct_guess[i] = '_';
            else
                correct_guess[i] = ' ';
        }
        system("cls");
        cout << "\n       Guess the Cricketer I am thinking to save your friend" << endl << endl;
        miss(c_guess);
        cout << setw(14) << " ";
        for (int i = 0; i < k; i++)
        {
            cout << setw(3) << correct_guess[i];
        }
        // OFFICIAL WORKING OF HANGMAN
        do
        {
            if (wrong == 0) {
                cout << endl << endl << endl << endl << "       Remaining guesses are: " << 7 - c_guess << endl;
                cout << endl << "       Enter an alphabet: ";
            }
            else {
                cout << setw(7) << " " << "Incorrect Guesses are: ";
                for (int i = 0; i < 7; i++)
                {
                    cout << setw(3) << inn_guess[i];
                }
                cout << endl;
                miss(c_guess);
                cout << endl;
                cout << setw(14) << " ";
                for (int i = 0; i < k; i++)
                {
                    cout << setw(3) << correct_guess[i];
                }
                cout << endl << endl << endl << endl << "       Remaining guesses are: " << 7 - c_guess << endl << "                     PLEASE ENTER LETTERS ONLY ";
                cout << endl << "       Enter an alphabet: ";

            }


            wrong = 0;
            cin >> guess;
            system("CLS");

            guess = tolower(guess);
            if (guess >= 'a' && guess <= 'z') {
                wrong = 0;
            }
            else wrong = 1;
            if (wrong == 0)
            {
                for (int i = 0; i < k; i++)
                {
                    if (selected[i] == guess)
                    {
                        correct_guess[i] = selected[i];
                        count++;
                        count_1++;
                    }
                }
                if (count == 0)
                {
                    cout << endl << "\n\n       You have guessed incorrectly!!!" << endl << endl;
                    inn_guess[m] = guess;
                    m++;
                    c_guess++;
                }
                if (count != 0)
                {
                    cout << "\n\n       You have guessed correctly!!!!" << endl;
                }
                cout << setw(7) << " " << "Incorrect Guesses are: ";
                for (int i = 0; i < 7; i++)
                {
                    cout << setw(3) << inn_guess[i];
                }
                cout << endl;
                miss(c_guess);
                cout << endl;
                cout << setw(14) << " ";
                for (int i = 0; i < k; i++)
                {
                    cout << setw(3) << correct_guess[i];
                }
            }
        } while (c_guess < 7 && count_1 != k - 1);
        if (c_guess == 7)
        {
            cout << endl << endl << endl << endl << "        The Cricketer you had to guess was: ";
            for (int i = 0; i < k; i++)
            {
                cout << selected[i];
            }
            cout << endl << "       ";
            cout << endl << "        YOU LOST !!!! YOU COULD NOT SAVE YOUR FRIEND..." << endl << endl << endl;
            cout << endl << "                         GAME OVER!" << endl << endl << endl << endl;
        }
        if (count_1 == k - 1)
        {
            cout << endl << endl << "       You guessed the correct Cricketer!!!" << endl << endl << endl;
            cout << endl << endl << "       CONGRATULATIONS YOU WON THE GAME !!!";
            cout << endl << "                      GAME OVER!" << endl << endl << endl << endl;
        }

    }
    break;

    case 5:
    {

        srand(time(0));
        int count = 0, random, k;
        const int size = 200;
        const char arr[size] = { "lionel messi,cristiano ronaldo,neymar jr,kylian mbappe,angel dimaria,karim benzema,erling haaland,kevin debruyne,ter stegen,donnarumma,virgil vandijk,frankie dejong" };
        char selected[20];

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == ',' || arr[i] == '\0')
            {
                count++;
                if (arr[i] == '\0')       //RANDOM WORD GENERATION
                    break;
            }
        }

        random = rand() % count + 1;
        count = 0, k = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == ',' || arr[j] == '\0')
            {
                count++;
            }
            if (count == random - 1 && count < random)
            {
                if (arr[j] != ',')
                {
                    selected[k] = arr[j];         //STORING OF RANDOM WORD IN ARRAY
                    k++;
                }
            }
            if (count == random)
                break;
        }

        selected[k];
        char guess, temp;
        int c_guess = 0, m = 0, count_1 = 0;
        const int size_1 = k;
        char correct_guess[50];
        char inn_guess[7] = { '\0' };
        int wrong = 0;

        correct_guess[size_1];

        for (int i = 0; i < k; i++)
        {
            if (selected[i] != ' ')
                correct_guess[i] = '_';
            else
                correct_guess[i] = ' ';
        }
        system("cls");
        cout << "\n       Guess the Footballer I am thinking to save your friend" << endl << endl;
        miss(c_guess);
        cout << setw(14) << " ";
        for (int i = 0; i < k; i++)
        {
            cout << setw(3) << correct_guess[i];
        }
        // OFFICIAL WORKING OF HANGMAN
        do
        {
            if (wrong == 0) {
                cout << endl << endl << endl << endl << "       Remaining guesses are: " << 7 - c_guess << endl;
                cout << endl << "       Enter an alphabet: ";
            }
            else {
                cout << setw(7) << " " << "Incorrect Guesses are: ";
                for (int i = 0; i < 7; i++)
                {
                    cout << setw(3) << inn_guess[i];
                }
                cout << endl;
                miss(c_guess);
                cout << endl;
                cout << setw(14) << " ";
                for (int i = 0; i < k; i++)
                {
                    cout << setw(3) << correct_guess[i];
                }
                cout << endl << endl << endl << endl << "       Remaining guesses are: " << 7 - c_guess << endl << "                     PLEASE ENTER LETTERS ONLY ";
                cout << endl << "       Enter an alphabet: ";

            }


            wrong = 0;
            cin >> guess;
            system("CLS");

            guess = tolower(guess);
            if (guess >= 'a' && guess <= 'z') {
                wrong = 0;
            }
            else wrong = 1;
            if (wrong == 0)
            {
                for (int i = 0; i < k; i++)
                {
                    if (selected[i] == guess)
                    {
                        correct_guess[i] = selected[i];
                        count++;
                        count_1++;
                    }
                }
                if (count == 0)
                {
                    cout << endl << "\n\n       You have guessed incorrectly!!!" << endl << endl;
                    inn_guess[m] = guess;
                    m++;
                    c_guess++;
                }
                if (count != 0)
                {
                    cout << "\n\n       You have guessed correctly!!!!" << endl;
                }
                cout << setw(7) << " " << "Incorrect Guesses are: ";
                for (int i = 0; i < 7; i++)
                {
                    cout << setw(3) << inn_guess[i];
                }
                cout << endl;
                miss(c_guess);
                cout << endl;
                cout << setw(14) << " ";
                for (int i = 0; i < k; i++)
                {
                    cout << setw(3) << correct_guess[i];
                }
            }
        } while (c_guess < 7 && count_1 != k - 1);
        if (c_guess == 7)
        {
            cout << endl << endl << endl << endl << "        The Footballer you had to guess was: ";
            for (int i = 0; i < k; i++)
            {
                cout << selected[i];
            }
            cout << endl << "       ";
            cout << endl << "        YOU LOST !!!! YOU COULD NOT SAVE YOUR FRIEND..." << endl << endl << endl;
            cout << endl << "                         GAME OVER!" << endl << endl << endl << endl;
        }
        if (count_1 == k - 1)
        {
            cout << endl << endl << "       You guessed the correct Footballer!!!" << endl << endl << endl;
            cout << endl << endl << "       CONGRATULATIONS YOU WON THE GAME !!!";
            cout << endl << "                      GAME OVER!" << endl << endl << endl << endl;
        }

    }
    break;



    }
}



void miss(int a)
{
    cout << endl << endl << endl << endl;

    if (a == 0)
    {
        cout << setw(28) << " +---+" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "========" << endl;
    }
    if (a == 1)
    {
        cout << setw(28) << " +---+" << endl;
        cout << setw(28) << " |   |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "========" << endl;
    }
    if (a == 2)
    {
        cout << setw(28) << " +---+" << endl;
        cout << setw(28) << " |   |" << endl;
        cout << setw(28) << " 0   |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "========" << endl;
    }
    if (a == 3)
    {
        cout << setw(28) << " +---+" << endl;
        cout << setw(28) << " |   |" << endl;
        cout << setw(28) << " 0   |" << endl;
        cout << setw(28) << " |   |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "========" << endl;
    }
    if (a == 4)
    {
        cout << setw(28) << " +---+" << endl;
        cout << setw(28) << " |   |" << endl;
        cout << setw(28) << " 0   |" << endl;
        cout << setw(28) << "/|   |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "========" << endl;
    }
    if (a == 5)
    {
        cout << setw(28) << " +---+" << endl;
        cout << setw(28) << " |   |" << endl;
        cout << setw(28) << " 0   |" << endl;
        cout << setw(28) << "/|\\  |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "========" << endl;
    }
    if (a == 6)
    {
        cout << setw(28) << " +---+" << endl;
        cout << setw(28) << " |   |" << endl;
        cout << setw(28) << " 0   |" << endl;
        cout << setw(28) << "/|\\  |" << endl;
        cout << setw(28) << "/    |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "========" << endl;
    }
    if (a == 7)
    {
        cout << setw(28) << " +---+" << endl;
        cout << setw(28) << " |   |" << endl;
        cout << setw(28) << " 0   |" << endl;
        cout << setw(28) << "/|\\  |" << endl;
        cout << setw(28) << "/ \\  |" << endl;
        cout << setw(28) << "     |" << endl;
        cout << setw(28) << "========" << endl;
    }
    return;
}
void getdisplay()
{
    cout << "           ___" << endl;
    cout << "           ||=====================================||" << endl;
    cout << "           ||              HANGMAN                ||" << endl;
    cout << "           ||=====================================||" << endl;
    cout << "           ||       GUESS CORRECTLY OR WATCH      ||" << endl;
    cout << "           ||         YOUR FRIEND DIE !!!!        ||" << endl;
    cout << "           ||=====================================||" << endl;
    cout << "           ||||_||||" << endl;
    cout << "    ||====================================================||" << endl;
    cout << "    ||                   INSTRUCTIONS                     ||" << endl;
    cout << "    ||====================================================||" << endl;
    cout << "    || 1. In this game you have to guess a word.          ||" << endl;
    cout << "    || 2. You will be given 7 attempts to guess a word.   ||" << endl;
    cout << "    || 3. If you enter an incorrect word your guess will  ||" << endl;
    cout << "    ||    be used up.                                     ||" << endl;
    cout << "    || 4. Guess the word correctly to win the game.       ||" << endl << endl;
    cout << "    ||--------------------GOOD LUCK !!!-------------------||" << endl;
    cout << "    ||====================================================||" << endl;
    cout << "    ||         Press Enter to start the Game!!!!!!!       ||" << endl;
    cout << "    ||__||" << endl << endl;

}