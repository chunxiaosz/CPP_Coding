#include <iostream>

using namespace std;

int cx(int&& x)
{
    return ++x;
}

int main()
{
    int&& x = 2;
    x = 3;
    cout << cx(2) << endl;
    return 0;
}
