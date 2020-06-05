#include <array>
#include <cstdint>
#include <iostream>
#include <typeinfo>

int main()
{
    constexpr uint32_t ARRAY_SIZE{1};
    std::array<uint32_t, ARRAY_SIZE> myArray{1};

    for (auto&& number : myArray)
    {
        //std::cout << number << std::endl;
        std::cout << typeid(number).name() << std::endl;
    }

    return 0;

}
