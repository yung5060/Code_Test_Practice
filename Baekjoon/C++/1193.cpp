#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    int stg = 1, pnt = 0;
    while (pnt < num)
    {
        pnt += stg;
        stg++;
    }
    if (stg & 1)
    {
        std::cout << stg - (1 + (pnt - num)) << "/" << 1 + (pnt - num);
    }
    else
    {
        std::cout << 1 + (pnt - num) << "/" << stg - (1 + (pnt - num));
    }
}