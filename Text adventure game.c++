#include <iostream>
#include <string>
using namespace std;

int main() {
    string choice;
    cout << "=== TEXT ADVENTURE GAME ===\n";
    cout << "You wake up in a dark forest.\n";
    cout << "Two paths lie ahead: LEFT or RIGHT\n";
    cout << "Choose (left/right): ";
    cin >> choice;

    if (choice == "left") {
        cout << "\nYou encounter a wild animal!\n";
        cout << "Do you RUN or FIGHT? ";
        cin >> choice;

        if (choice == "run") {
            cout << "\nYou escaped safely. You win!\n";
        } else if (choice == "fight") {
            cout << "\nYou fought bravely but lost. Game Over.\n";
        } else {
            cout << "\nInvalid choice. Game Over.\n";
        }

    } else if (choice == "right") {
        cout << "\nYou find a treasure chest!\n";
        cout << "Do you OPEN it or LEAVE it? ";
        cin >> choice;

        if (choice == "open") {
            cout << "\nIt's full of gold! You win!\n";
        } else if (choice == "leave") {
            cout << "\nYou walk away safely. Game Over.\n";
        } else {
            cout << "\nInvalid choice. Game Over.\n";
        }

    } else {
        cout << "\nInvalid choice. Game Over.\n";
    }

    return 0;
}
