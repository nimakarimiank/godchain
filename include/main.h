#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <sstream>
#include "ssh_utils/ssh.h"
using namespace std;
void printMainMenu()
{
    println("********** SSH Key Manager **********");
    println("1. Generate SSH Key");
    println("2. List SSH Keys");
    println("3. Delete SSH Key");
    println("4. Activate SSH Key");
    println("5. Deactivate SSH Key");
    println("6. Exit");
    println("**************************************");
}
void handleInput()
{
    int choice = 0;
    string choice_str;
    while (choice != 6)
    {
        printMainMenu();
        try
        {
            getline(cin, choice_str);
            stringstream(choice_str) >> choice;
            if (choice == 0 || choice > 6)
            {
                throw std::invalid_argument("Invalid choice");
            }
        }
        catch (const std::exception &e)
        {
            println("Invalid input. Please enter a number between 1 and 6.");
            continue;
        }
        switch (choice)
        {
        case 1:
        {
            createSSHKey();
            break;
        }
        case 2:
        {
            listSSHKeys();
            break;
        }
        case 3:
        {
            string keyName;
            println("Enter the name of the SSH key to delete:");
            getline(cin, keyName);
            if (keyName.empty())
            {
                println("No key name provided. Please try again.");
                continue;
            }
            else
            {
                deleteSSHKey(&keyName);
            }
            break;
        }
        case 4:
        {
            string keyName;
            println("Enter the name of the SSH key to activate:");
            getline(cin, keyName);
            if (keyName.empty())
            {
                println("No key name provided. Please try again.");
                continue;
            }
            else
            {
                activateSSHKey(&keyName);
            }
            break;
        }
        case 5:
        {
            string keyName;
            println("Enter the name of the SSH key to deactivate:");
            getline(cin, keyName);
            if (keyName.empty())
            {
                println("No key name provided. Please try again.");
                continue;
            }
            else
            {
                deactivateSSHKey(&keyName);
            }
            break;
        }
        }
    }
    println("Exiting SSH Key Manager. Goodbye!");
}

#endif