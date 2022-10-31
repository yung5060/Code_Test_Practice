#include <iostream>

int main()
{
    int size, num;
    std::cin >> size >> num;

    for (int i = 0; i < size; i++)
    {
        int a;
        std::cin >> a;
        if (a < num)
        {
            std::cout << a << std::endl;
        }
    }
}
