#include <iostream>
#include <string>
#include "cow.h"
#define DEBUG

int main()
{
    std::cout << "This is a testing ground repo. Please find my full projects in pinned repos." << std::endl;
    cow my_cow("Betsy",7,pet);
    my_cow.set_name("Betsy");
    my_cow.set_age(7);
    my_cow.set_purpose(pet);

#ifdef DEBUG
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old and is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
#endif

    return (0);
}
