#pragma once

#include <functional>
#include <map>
#include <string>

std::map<std::string, std::function<std::string(int, int)>> commands {
    { "add", [](int first, int second) {
         return std::to_string(first + second);
     } },
    { "subtract", [](int first, int second) {
         return std::to_string(first - second);
     } },
    { "multiply", [](int first, int second) {
         return std::to_string(first * second);
     } },
    { "divide", [](int first, int second) {
        if (second == 0) {
            return std::string("Division by 0");
        }
         return std::to_string(first / second);
     } }
};

std::string calculate(const std::string& command, int first, int second) {
    try {
        return commands.at(command)(first, second);
    } catch (...) {
        return "Invalid data";
    }
}
