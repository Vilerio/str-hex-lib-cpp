#ifndef str_hex_hpp
#define str_hex_hpp
#include <iostream>
#include <sstream>
#include <string>

std::string str_to_hex(const std::string& input) {
    std::stringstream ss;
    for (size_t i = 0; i < input.length(); ++i) {
        ss << std::hex << static_cast<int>(input[i]);
    }
    return ss.str();
}

std::string hex_to_str(const std::string& input) {
    std::stringstream ss;
    for (size_t i = 0; i < input.length(); i += 2) {
        std::string byteString = input.substr(i, 2);
        char byte = static_cast<char>(std::strtol(byteString.c_str(), nullptr, 16));
        ss << byte;
    }
    return ss.str();
}
#endif


