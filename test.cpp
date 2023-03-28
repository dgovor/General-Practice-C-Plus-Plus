#include <iostream>
#include <cstdint>

#define DEBUG
#define ARRAY_SIZE 5

int main()
{
    std::cout << "This is a testing ground repo. Please find my full projects in pinned repos." << std::endl;

    float average;

    int new_array[ARRAY_SIZE] = {3, 7, 12, 15, 34};

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        average += new_array[i];
    }
    average /= ARRAY_SIZE;

#ifdef DEBUG
    std::cout << "Average of the array = " << average << std::endl;
#endif

    return (0);
}
