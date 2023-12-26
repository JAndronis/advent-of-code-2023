//
// Created by Iason Andronis on 2023-12-25.
//

#include "trebuchet.h"

int main() {
    // Part 1
    std::ifstream input_file;
    input_file.open(trebuchet::input);
    if (!input_file.is_open()) {
        std::cout << "Failed to open " << trebuchet::input << std::endl;
    } else {
        long sum = 0;
        for (std::string line; std::getline(input_file, line);) {
            std::string number_string = trebuchet::digitString(line);
            std::string calibration_number = trebuchet::firstLastDigits(number_string);
            sum += std::stoi(calibration_number);
        }
        std::cout << "Part One sum is: " << sum << std::endl;
        input_file.close();
    }

    // Part 2
    input_file.open(trebuchet::input);
    if (!input_file.is_open()) {
        std::cout << "Failed to open " << trebuchet::input << std::endl;
    } else {
        long sum = 0;
        for (std::string line; std::getline(input_file, line);) {
            std::string number_string = trebuchet::digitStringFromNames(line);
            std::string calibration_number = trebuchet::firstLastDigits(number_string);
            sum += std::stoi(calibration_number);
        }
        std::cout << "Part Two sum is: " << sum << std::endl;
        input_file.close();
    }
    return 0;
}