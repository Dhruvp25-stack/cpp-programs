#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string getChoice(int choice) {
    switch(choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid";
    }
}

string decideWinner(int user, int computer) {
    if(user == computer) return "It's a Draw!";
    else if((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2)) {
        return "You Win!";
    }
    return "Computer Wins!";
}

int main() {
    srand(time(0));

    int userChoice;
    cout << "---- Rock Paper Scissors Game ----" << endl;
    cout << "1. Rock\n2. Paper\n3. Scissors" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    int computerChoice = (rand() % 3) + 1;

    cout << "You chose: " << getChoice(userChoice) << endl;
    cout << "Computer chose: " << getChoice(computerChoice) << endl;

    cout << decideWinner(userChoice, computerChoice) << endl;

    return 0;
}
