#include <iostream>

int main()
{
    int rep;
    std::cin >> rep;

    for (int i = 1; i <= rep; i++)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << "Case #" << i << ": " << a + b << std::endl;
    }
}