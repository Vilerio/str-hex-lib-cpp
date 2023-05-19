#include <string>
#include <iostream>
#include <sstream>
#include "str-hex.hpp"

int main(){
    std::string input = "Hello World !";
    std::string hex = str_to_hex(input);
    std::cout << hex << std::endl;
    std::string output = hex_to_str(hex);
    std::cout << output << std::endl;
    return 0;
}