//
// Created by Iason Andronis on 2023-12-25.
//

#ifndef ADVENT_OF_CODE_TREBUCHET_H
#define ADVENT_OF_CODE_TREBUCHET_H

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;
fs::path file_path = __FILE__;

namespace trebuchet {

    fs::path input = file_path.parent_path().append("input.txt");
    std::unordered_map<std::string, int> number_names = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };

    bool isDigit(const char& c) {
        return (c >= '0' && c <= '9' ? 1 : 0);
    }

    std::string firstLastDigits(const std::string& whole_number) {
        return (std::string(1, whole_number.front()) + &whole_number.back());
    }

    std::string digitString(const std::string& line) {
        std::string number_string;
        for (const char &i: line) {
            if (trebuchet::isDigit(i)) {
                number_string += i;
            }
        }
        return number_string;
    }

    std::string digitStringFromNames(const std::string& line) {
        std::string number_string;

        return number_string;
    }
}


#endif //ADVENT_OF_CODE_TREBUCHET_H
