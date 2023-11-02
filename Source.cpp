#include <iostream>
#include <string>
using namespace std;

int main() {
    string User_choice1, User_choice2;
    int User_choice, due_date = 5, user_date;
    int fine;
    cout << "Hello! Press 0 to return a book and 1 to borrow a book: ";
    cin >> User_choice;

    if (User_choice == 1) {
        cout << "Enter the name of the book you want to borrow: ";
        cin >> User_choice1;
        cout << "User has borrowed " << User_choice1 << endl;
        cout << "Attention!\nIf the user fails to return the book on time, they will be fined with the following charges.\n";
        cout << "Fine system: $1 per day.";
    }
    else if (User_choice == 0) {
        cout << "Enter the name of the book you want to return: ";
        cin >> User_choice2;
        cout << "User has returned " << User_choice2 << endl;
        cout << "Enter the days for which the book was taken: ";
        cin >> user_date;

        if (user_date > due_date) {
            fine = user_date - due_date;
            cout << "Please pay a fine of $" << fine << " ";
            cout << "as you have not returned the book for " << fine << " days.\n";
            cout << "($1 per day)";
        }
    }
    else {
        cout << "Please enter a valid input.\n";
    }

    cout << "\n";
    cin.get(); // Pause the program until the user presses Enter
    return 0;
}