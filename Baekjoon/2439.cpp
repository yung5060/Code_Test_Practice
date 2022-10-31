#include <iostream>
#include <string>

int main()
{
    int rep;
    std::cin >> rep;

    std::string stars(rep, ' ');

    for (int i = 0; i < rep; i++)
    {
        stars.push_back('*');
        stars = std::string(stars.begin() + 1, stars.end());
        std::cout << stars << std::endl;
    }
}