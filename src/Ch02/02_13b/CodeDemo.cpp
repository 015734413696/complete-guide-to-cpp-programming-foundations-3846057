// Complete Guide to C++ Programming Foundations
// Exercise 02_13
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum cow_purpose {dairy, meat, hide, pet};

int main(){
    int a;

    a = meat;

    std::cout << "a = " << a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
