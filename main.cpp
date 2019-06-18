#include <iostream>
#include "io/simpio.h"
#include <cmath>

int larger(int a, int b);
void grow(int& age);
void swap(int& a, int& b);

int main() {
    int age = 20;
    int myAge = 50;
    std::cout << "main age is "<<age<<std::endl;
    grow(age);
    std::cout << "main age is "<<age<<std::endl;
    std::cout << "before age is "<< age <<std::endl;
    std::cout << "before myAge is "<< myAge <<std::endl;
    swap(age, myAge);
    std::cout << "after age is "<< age <<std::endl;
    std::cout << "after myAge is "<< myAge <<std::endl;
    return 0;
}
int larger(int a, int b){
    return a;
}
void swap(int& a, int& b){
    int temp = a;
    a =  b;
    b = temp;
}
void grow(int& age){
    age = age + 1;
    std::cout << "grow age is "<<age<<std::endl;
}