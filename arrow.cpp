#include <iostream>

using namespace std;

int main() {
    //init and declare the variable to ask for a user input
    int userInput = 0;
    cout << "Enter a value between 2 and 20: " << endl;
    cin >> userInput;

    //handle the errors when < 2 and > 20
    if (userInput < 2 || userInput > 20) {
        cout << "Error!";
    }

    cout << string(userInput -1, ' ') + "*" << endl;

    int compteur = -1;

    for (int l = 2; l <= userInput - 1; l++){
        compteur = compteur + 2;
        cout << string(userInput - l, ' ') + "*";
        cout << string(compteur, ' ') + "*" << endl;
    }

    //print the horizontal line
    for (int i = 1; i <= ((userInput * 2) - 1); i++) {
        cout << "*";
    }
    cout << endl;

    //print the tale
    for (int k = 1; k <= userInput; k++){
        cout << string(userInput -1, ' ') + "*" << endl;
    }

    return 0;
}
