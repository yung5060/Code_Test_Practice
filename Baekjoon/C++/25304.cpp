#include <iostream>

int main()
{
    int total, rep;
    std::cin >> total;
    std::cin >> rep;

    for (int i = 0; i < rep; i++)
    {
        int a, b;
        std::cin >> a >> b;
        total -= a * b;
    }

    (total) ? std::cout << "No" : std::cout << "Yes";
}