#include <iostream>
#include <string>

int main()
{
    int rep;
    std::cin >> rep;

    std::string stars = "";
    for (int i = 1; i <= rep; i++)
    {
        stars.push_back('*');
        std::cout << stars << std::endl;
    }
}