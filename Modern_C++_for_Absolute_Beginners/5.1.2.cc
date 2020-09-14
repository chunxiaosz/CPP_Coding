#include <iostream>

int main()
{
    char16_t uc;
    char c = 'a';
    std::cout << "The value of variable c is: " << c << std::endl;
    c = 'Z';
    std::cout << "The new value of variable c is: " << c << std::endl;

    std::cout << "The size of type char is: " << sizeof(char) << "byte(s)\n";
}
