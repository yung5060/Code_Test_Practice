#include <iostream>

int main()
{
    int max = 0;
    int index;
    for (int i = 0; i < 81; i++)
    {
        int num;
        std::cin >> num;
        if (max <= num)
        {
            max = num;
            index = i;
        }
    }
    std::cout << max << std::endl;
    std::cout << index / 9 + 1 << " " << index % 9 + 1;
}