
using namespace std;
#include <stdlib.h>
#include <iostream>

int main()
{
    srand(time(0));
    cout << "Welcome to the guessing game!\n" << "Guess the randomly generated number (0-99)\n" << "You got 10 tries\n" << "Pay attention to the hints" << endl;
    int num = rand() % 100;
    int attempt=0;
    int guess;
    bool outofg = false;
    while (!outofg) {
        cout << "Enter guess:" << endl;
        cin >> guess;
        if (guess != num) {
            attempt++;
            if (guess > num) {
                cout << "Too high, " << 10 - attempt << " attempts left" << endl;
            } else {
                cout << "Too low, " << 10 - attempt << " attempts left" << endl;
            }
        }
        else {
            attempt++;
            cout << "You win!\n";
            cout << "Number of tries: " << attempt << endl;
            break;
        }
           
        if (attempt >= 10) {
            outofg = true;
            cout << "10 wrong tries, you lost" << endl;
            cout << "The number was " << num << endl;
        }
    }
    }


