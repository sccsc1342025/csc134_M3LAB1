// CSC 134
// M3LAB1
// Sebastian Camacho
// 03/02/2025

#include <iostream>
using namespace std;

void chooseBottle1();
void chooseBottle2();

int main()
{
    // this program will let you choose between two bottels, one poisoned one not
    int choice;

    // choose a bottle
    cout << "There are two bottles in front of you. One is posioned one is not, pick one " << endl;
    cout << "Will you choose Bottle 1 or Bottle 2" << endl;
    cout << "Type 1 or 2" << endl;
    cin >> choice;

    if (1 == choice) {
        chooseBottle1();
    }
    else if (2 == choice) {
        chooseBottle2();
    }
    else {
        cout << "I'm sorry that is not a valid choice" << endl;
    }

    cout << "Thank you for playing!" << endl;

    return 0;
}

// defining orginal variables
void chooseBottle1() {
    cout << "You chose Bottle 1" << endl;
    cout << "Congradulations you get to live!" << endl;
}

void chooseBottle2() {
    cout << "You chose Bottle 2" << endl;
    cout << "Unfortunately you will die a painful death! Goodbye." << endl;
}