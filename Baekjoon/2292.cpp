#include <iostream>

int main()
{
    int num, pnt = 1, cnt = 1;
    std::cin >> num;

    while (pnt < num)
    {
        pnt += 6 * cnt;
        cnt++;
    }

    std::cout << cnt;
}