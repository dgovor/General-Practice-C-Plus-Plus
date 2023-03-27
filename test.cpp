#include <iostream>
#include <cstdint>

#define DEBUG
float flt = -7.44f;
int32_t sgn;
uint32_t unsgn;

int main()
{
    std::cout << "This is a testing ground repo. Please find my full projects in pinned repos." << std::endl;

    sgn = flt;
    unsgn = flt;

    int fahrenheit = 100;
    int celsius;
    celsius = (5.0 / 9) * (fahrenheit - 32);

    float weight = 10.99;

#ifdef DEBUG
    std::cout << "Float:" << flt << std::endl;
    std::cout << "Integer:" << sgn << std::endl;
    std::cout << "Unsigned integer:" << unsgn << std::endl;

    std::cout << "Fahrenheit:" << fahrenheit << std::endl;
    std::cout << "Celsius:" << celsius << std::endl;

    std::cout << "Float:" << weight << std::endl;
    std::cout << "Integer part:" << (int)weight << std::endl;
    std::cout << "Fractional part:" << (int)((weight - (int)weight) * 10000) << std::endl;
#endif

    return (0);
}
