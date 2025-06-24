#ifndef SSH_H
#define SSH_H   
#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;
void handleCreateSSHKeyDefault() {
    println("Using default SSH key configuration.");
    // Implementation for handling default SSH key creation
    try{
        system("ssh-keygen -t ed25519 -C \"niimak97@test.com\"");
    }
    catch (const std::exception& e) {
        println("Error creating SSH key " );
    }
}
void createSSHKey() {
    println("Creating SSH Key...");
    // Implementation for creating an SSH key
    println("********** CHOOSE KEY CONFIGURATION **********");
    println("1. Default Configuration");
    println("2. Custom Configuration");
    println("**************************************");
    int choice = 1;
    // string choice_str;
    // getline(cin, choice_str);
    handleCreateSSHKeyDefault();

}
void listSSHKeys() {
    println("Listing SSH Keys...");
}
void deleteSSHKey(string* keyName = nullptr) {
    println("Deleting SSH Key...");
    // Implementation for deleting an SSH key
}
void activateSSHKey (string * keyName=nullptr){
    
}
void deactivateSSHKey (string * keyName=nullptr){
    
}
#endif // SSH_H