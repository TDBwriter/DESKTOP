// filepath: c:\Users\travi\Downloads\REPOSITORIES\CODE\TypeWriter\HelloWorld\tests\test_hello_world.cpp
#include <iostream>
#include <string>
#include <cassert>

std::string getHelloWorld(); // Declare the function to test.

int main() {
    // Test: The function should return "Hello, World!"
    assert(getHelloWorld() == "Hello, World!");
    std::cout << "Test passed!" << std::endl;
    return 0;
}