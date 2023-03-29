#include <iostream>
#include <string>

#define DEBUG

enum cow_purpose
{
    dairy,
    meat,
    hide,
    pet
};

struct cow
{
    std::string name;
    int age;
    unsigned char purpose;
};

int main()
{
    std::cout << "This is a testing ground repo. Please find my full projects in pinned repos." << std::endl;

    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = dairy;

#ifdef DEBUG
    std::cout << my_cow.name << " is a type-" << (int)my_cow.purpose << " cow." << std::endl;
#endif

    return (0);
}
