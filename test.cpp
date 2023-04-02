#include <iostream>
#include <string>

#define DEBUG

enum cow_purpose{dairy, meat, hide, pet};

class cow
{
public:
    std::string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }
    unsigned char get_purpose()
    {
        return purpose;
    }

    void set_name(std::string n)
    {
        name = n;
    }
    void set_age(int a)
    {
        age = a;
    }
    void set_purpose(unsigned char p)
    {
        purpose = p;
    }

private:
    std::string name;
    int age;
    unsigned char purpose;
};

int main()
{
    std::cout << "This is a testing ground repo. Please find my full projects in pinned repos." << std::endl;

    cow my_cow;
    my_cow.set_name("Betsy");
    my_cow.set_age(7);
    my_cow.set_purpose(pet);

#ifdef DEBUG
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old and is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
#endif

    return (0);
}
