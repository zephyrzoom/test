#include <iostream>
int global = 1;
int main()
{
    int global = 2;
    std::cout << ::global << global;
    return 0;
}
