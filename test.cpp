#include <iostream>

int age[4];
float temper[] = {31.5, 32.7, 38.9};

int main()
{
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;
    float *new_one;
    new_one = temper;

    std::cout << "Age = " << new_one[0] << std::endl;
    return (0);
}
