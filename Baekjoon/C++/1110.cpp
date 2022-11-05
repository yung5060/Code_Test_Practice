#include <iostream>

int main()
{
    int num1, count = 0;
    std::cin >> num1;

    int same = num1;

    while (same != num1 || count == 0)
    {
        int tmp = (num1 / 10) + (num1 % 10);
        num1 = (tmp % 10) + (num1 % 10) * 10;
        count++;
    }

    std::cout << count;
}