#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> tmp, copy;
    for (int i = 0; i < 9; i++)
    {
        int a;
        std::cin >> a;
        tmp.push_back(a);
        copy.push_back(a);
    }
    sort(tmp.begin(), tmp.end());
    std::cout << tmp.back() << std::endl;
    std::cout << std::find(copy.begin(), copy.end(), tmp.back()) - copy.begin() + 1;
}