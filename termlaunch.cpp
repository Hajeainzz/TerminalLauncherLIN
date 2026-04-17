//  _____                   _             _                                
// |_   _|__ _ __ _ __ ___ (_)_ __   __ _| |                               
//   | |/ _ \ '__| '_ ` _ \| | '_ \ / _` | |                               
//   | |  __/ |  | | | | | | | | | | (_| | |                               
//  _|_|\___|_|  |_| |_| |_|_|_|_|_|\__,_|_|      _     _                  
// | |    __ _ _   _ _ __   ___| |__   ___ _ __  | |   (_)_ __  _   ___  __
// | |   / _` | | | | '_ \ / __| '_ \ / _ \ '__| | |   | | '_ \| | | \ \/ /
// | |__| (_| | |_| | | | | (__| | | |  __/ |    | |___| | | | | |_| |>  < 
// |_____\__,_|\__,_|_| |_|\___|_| |_|\___|_|    |_____|_|_| |_|\__,_/_/\_\

// This is a free linux launcher thats easily customizable and amazing to use! Feel free to fork this and edit the code however you want!


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
    //   ____          _                  _           __  __      
    //  / ___|   _ ___| |_ ___  _ __ ___ (_)_______  |  \/  | ___ 
    // | |  | | | / __| __/ _ \| '_ ` _ \| |_  / _ \ | |\/| |/ _ \
    // | |__| |_| \__ \ || (_) | | | | | | |/ /  __/ | |  | |  __/
    //  \____\__,_|___/\__\___/|_| |_| |_|_/___\___| |_|  |_|\___|
    
    // Options! CHANGE THiS PART IF YOU JUST CLAImED THE REPO!! Add on if you have more.
    std::cout << "1. Discord\n";
    std::cout << "2. firefox\n";


    // This determines the launcher number.
    std::cout << "> ";
    std::cin >> LauncherNumber;

    // Main if Function

    if (LauncherNumber == 1) {
        system("discord");
        std::cout << "Launching discord";
    }
    if (LauncherNumber == 2) {
        system("firefox");
        std::cout << "Launching Firefox.";
    } 
    if (LauncherNumber == 3) {
        std::cout << "Add on more and customize the code to have more!";
    }
}


// fans = alot. 
// graphics = real.
// good game = true.
