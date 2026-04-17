#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>

// Main int

int main() {
    // Creates the main string for the name that will be customizable later. The Int creates the launcher value which right now is NIL But changed using the if statements later.
    std::string name;
    int LauncherNumber;

    // Main Menu, This is the first segment of the main console, this is where you enter your name
    std::cout << "===============================\n";
    std::cout << "=        Launcher Setup       =\n";
    std::cout << "===============================\n";
    std::cout << "> Hello! Please input a name before you continue.\n";
    // This segment collects the input of the user and uses it as the user's name and then prints it as a confirmation.
    std::cout << "> ";
    std::cin >> name; // Cin is the input of the user but the arrows will change to show the input, make sure you put >> instead of <<
    std::cout << "Welcome, " << name << "\n";
    std::cout << "Please wait as we gather some stuff!\n";

    std::this_thread::sleep_for(std::chrono::seconds(9));
    // If linux this clears the terminal, does not work on windows.
    system("clear");

    // Main Menu, this is the actual launcher which contains most of the code.
    std::cout << "===============================\n";
    std::cout << "=        Launcher Menu        =\n";
    std::cout << "===============================\n";
    std::cout << "Welcome! Please input what you would like to launch.\n";
    // Options! CHANGE THiS PART IF YOU JUST CLAImED THE REPO!! Add on if you have more.
    std::cout << "1. Discord";
    std::cout << "2. Chrome"


    // This determines the launcher number.
    std::cout << "> ";
    std::cin >> LauncherNumber;

    // Main if Function

    if (LauncherNumber == 1) {
        system("discord")
    }

}
