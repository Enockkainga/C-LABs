#include <iostream>
#include <string>

int main() {
 
    int* dynamicInt = new int;
    

    std::string* dynamicString = new std::string;
    
r
    std::cout << "Enter an integer: ";
    std::cin >> *dynamicInt;
    

    std::cout << "Enter a string: ";
    std::cin.ignore(); // Ignore the newline character left in the stream
    std::getline(std::cin, *dynamicString);
    
 
    std::cout << "Dynamically Allocated Integer: " << *dynamicInt << std::endl;
    std::cout << "Dynamically Allocated String: " << *dynamicString << std::endl;
    

    delete dynamicInt;
    delete dynamicString;

    return 0;
}