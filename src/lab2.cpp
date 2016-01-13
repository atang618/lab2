#include "eecs230.h"

//
// Lab 2 programs
//

// Test an integer value to determine if it is odd or even.
int odd_even() {
    int test;
    cout << "Please enter an integer value: \n";
    cin >> test;
    if (! cin) {
        simple_error("Input must be an integer");
    }
    else {
        if (test %2 == 0) {
            cout << "The value of " <<test<<" is an even number.";
        }
        else {
            cout << "The value of " <<test<<" is an odd number.";
        }
    }
    return 0;
}

// Takes an operation followed by two operands and outputs the result.
int operation_two() {
    string operation;
    double first;
    double second;
    cout << "\nPlease enter an operation and two operands: \n";
    cin >> operation >> first >> second;
    if (! cin) {
        simple_error("Invalid input");
    }
    else {
        if (operation == "+") {
            cout << first << " + " << second << " = " << first + second;
        }
        else if (operation == "-") {
            cout << first << " - " << second << " = " << first - second;
        }
        else if (operation == "*") {
            cout << first << " * " << second << " = " << first * second;
        }
        else if (operation == "/") {
            cout << first << " / " << second << " = " << first / second;
        }
    }
    return 0;
}

// Takes a name and gender and outputs a corresponding statement.
enum person_gender {male, female};
int gender() {
    int friend_gender;
    string friend_name = "Allen";
    cout << "\n Please enter a friend's name, and 0 for male and 1 for female \n";
    cin >> friend_name >> friend_gender;
    if (friend_gender == male) {
        cout << "If you see " << friend_name << " please ask him to call me";
    }
    else if (friend_gender == female) {
        cout << "If you see " << friend_name << " please ask her to call me";
    }
    return 0;
}

// Takes an age and congratulates user on birthday.
int age() {
    int age;
    cout << "\n What is your age? \n";
    cin >> age;
    if (age <= 0 || age >= 110) {
        cout << "You're kidding!";
    }
    else {
        cout << "I hear you just had a birthday and you are " << age << " years old.";
    }
    return 0;
}


int main() {
    odd_even();
    operation_two();
    gender();
    age();
}

