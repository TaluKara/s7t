// s7t.h

#include <iostream>
#include <string>
#include <initializer_list>
#include <vector>
#include <limits>
#include <sstream>

int inpi(const std::string& prompt) {
    std::string input;
    int value;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        std::istringstream stream(input);
        stream >> value;
        if (!stream.fail() && stream.eof()) {
            break;
        } else {
            std::cout << "Invalid input, please enter an integer.\n";
        }
    }
    return value;
}

double inpd(const std::string& prompt) {
    std::string input;
    double value;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        std::istringstream stream(input);
        stream >> value;
        if (!stream.fail() && stream.eof()) {
            break;
        } else {
            std::cout << "Invalid input, please enter a double.\n";
        }
    }
    return value;
}

float inpf(const std::string& prompt) {
    std::string input;
    float value;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        std::istringstream stream(input);
        stream >> value;
        if (!stream.fail() && stream.eof()) {
            break;
        } else {
            std::cout << "Invalid input, please enter a float.\n";
        }
    }
    return value;
}

long inpl(const std::string& prompt) {
    std::string input;
    long value;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        std::istringstream stream(input);
        stream >> value;
        if (!stream.fail() && stream.eof()) {
            break;
        } else {
            std::cout << "Invalid input, please enter a long integer.\n";
        }
    }
    return value;
}

std::string inps(const std::string& prompt) {
    std::string value;
    std::cout << prompt;
    std::getline(std::cin, value);
    return value;
}

char inpc(const std::string& prompt) {
    std::string input;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (input.length() == 1) {
            return input[0];
        } else {
            std::cout << "Invalid input, please enter a single character.\n";
        }
    }
}

int opt(std::initializer_list<std::string> options) {
    std::vector<std::string> opts(options);
    int choice = -1;
    do {
        for (int i = 0; i < opts.size(); ++i) {
            std::cout << i + 1 << "- " << opts[i] << std::endl;
        }
        std::cout << ": ";
        std::cin >> choice;
        if(std::cin.fail() || choice < 1 || choice > opts.size()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice, please try again.\n";
            choice = -1;
        }
    } while (choice == -1);
    
    return choice;
}
