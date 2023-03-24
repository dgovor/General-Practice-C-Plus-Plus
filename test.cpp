#include <iostream>

#define DEBUG

int age[4];
float temper[] = {31.5, 32.7, 38.9};

int main()
{
    std::cout << "This is a testing ground repo. Please find my full projects in pinned repos." << std::endl;

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;
    float *new_one;
    new_one = temper;
#ifdef DEBUG
    std::cout << "Age = " << new_one[0] << std::endl;
#endif
    return (0);
}
