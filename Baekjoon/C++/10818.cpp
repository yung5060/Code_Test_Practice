#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int rep;
    std::cin >> rep;
    std::vector<int> array;
    for (int i = 0; i < rep; i++)
    {
        int a;
        std::cin >> a;
        array.push_back(a);
    }
    std::sort(array.begin(), array.end());
    std::cout << array.front() << " " << array.back();
}