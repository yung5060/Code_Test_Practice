#include <iostream>
#define PI 3.14159265358979

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    double r;
    std::cin >> r;
    std::cout << std::fixed;
    std::cout.precision(6);
    std::cout << r * r * PI << '\n';
    std::cout << 2 * r * r << '\n';
}