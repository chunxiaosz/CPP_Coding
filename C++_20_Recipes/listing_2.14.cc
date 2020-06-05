#include <iostream>

using namespace std;

template <typename T>
auto AutoFunctionFromReturn(T parameter)
{
    return parameter;
}

int main()
{
    auto value = AutoFunctionFromReturn(2);
    cout << value << endl;

    return 0;
}
