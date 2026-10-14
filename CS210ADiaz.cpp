#include <iostream>
using namespace std;

/*
    Anthony Diaz / adiaz6040@sdsu.edu
    CS 210 / Scovil
    Assignment 1 - Simple C++ Program
*/

void isEven(int userNum) {
    if (userNum % 2 == 0) {
        cout << "You are even." << endl;
    } else {
        cout << "You are odd." << endl;
    }
}

void isPositive(int userNum) {
    if (userNum > 0) {
        cout << "You are positive." << endl;
    } else if (userNum < 0) {
        cout << "You are negative"  << endl;
    } else { cout << "You chose 0, neither "
        "negative nor positive." << endl; }

    }



int main() {

cout << "My name is Anthony Diaz" << endl;
    cout << "Yohan Yaqo likes Coca-Cola and I do too, "
            "but I'd prefer the Coke Zero or Diet Coke" << endl;

int userNum;

for (int i = 1; i < 11; i++) {
    cout << "This attempt: " << i << endl;

    cout << "Please type an integer: " << endl;
    cin >> userNum;
    cout << userNum << endl;

    cout << "This is that num divided by 2" << endl;
    cout << userNum / 2 << endl;

    cout << "This is that num divided by 2.0" << endl;
    cout << userNum / 2.0 << endl;

    isEven(userNum);
    isPositive(userNum);
}
    return 0;
}