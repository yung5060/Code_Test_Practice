#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int rep;
    std::cin >> rep;

    std::vector<int> tmp;
    for (int i = 0; i < rep; i++)
    {
        int a;
        std::cin >> a;
        tmp.push_back(a);
    }

    int find;
    std::cin >> find;

    std::cout << std::count(tmp.begin(), tmp.end(), find);
}