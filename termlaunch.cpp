#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>

// Main int

int main() {
    // Creates the main string for the name that will be customizable later.
    std::string name;

    // Main Menu, This is the first segment of the main console, this is where you enter your name
    std::cout << "===============================\n";
    std::cout << "=        Launcher Setup       =\n";
    std::cout << "===============================\n";
    std::cout << "> Hello! Please input a name before you continue.\n";
    // This segment collects the input of the user and uses it as the user's name and then prints it as a confirmation.
    std::cout << "> ";
    std::cin >> name; // Cin is the input of the user but the arrows will change to show the input, make sure you put >> instead of <<
    std::cout << "Welcome, ";
    std::cout << name;
    // Right here is broken, you can fix it if you would like too. If not, make sure to go to the 1st release to get the full working version on your right OS.
    std::cout << "Please wait as we gather some stuff.";
    std::this_thread::sleep_for(std::chrono::seconds(9));

    // If linux this clears the terminal, does not work on windows.
    system("clear");
    std::cout << "===============================\n";
    std::cout << "=        Launcher Menu        =\n";
    std::cout << "===============================\n";
    std::cout << "Welcome! Please input what you would like to launch.\n";

}
