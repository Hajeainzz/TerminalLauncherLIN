#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>

// Main int

int main() {
    std::string name;

    std::cout << "===============================\n";
    std::cout << "=        Launcher Setup       =\n";
    std::cout << "===============================\n";
    std::cout << "> Hello! Please input a name before you continue.\n";
    std::cout << "> ";
    std::cin >> name;
    std::cout << "Welcome, ";
    std::cout << name;
    std::cout << "Please wait as we gather some stuff.";
    std::this_thread::sleep_for(std::chrono::seconds(9));

    // If linux this is the debug.
    system("clear");
    std::cout << "===============================\n";
    std::cout << "=        Launcher Menu        =\n";
    std::cout << "===============================\n";
    std::cout << "Welcome! Please input what you would like to launch.\n";

}
