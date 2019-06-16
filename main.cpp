#include <iostream>
#include "io/simpio.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    int age = getInteger("How old are you?");
    std::cout << "Wow, "<< age << " is really old" << std::endl;
    return 0;
}