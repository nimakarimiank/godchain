#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <sstream>
using namespace std;
void printMenu() {
    println("********** SSH Key Manager **********");
    println("1. Generate SSH Key");
    println("2. List SSH Keys");
    println("3. Delete SSH Key");
    println("4. Activate SSH Key");
    println("5. Deactivate SSH Key");
    println("6. Exit");
    println("**************************************");
}
void handleInput(){

    int choice = 0;
    string choice_str;
    while (choice != 6) {
        try {
            printMenu();
            getline(cin, choice_str);
            stringstream(choice_str) >> choice;
        }
        catch (const std::exception& e) {
            cout << "Invalid input. Please enter a number between 1 and 6." << endl;
            continue;
        }
    }
}
#endif