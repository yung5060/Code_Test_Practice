#include <iostream>

int main()
{
    int rep;
    std::cin >> rep;

    for (int i = 0; i < rep; i++)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << a + b << std::endl;
    }
}