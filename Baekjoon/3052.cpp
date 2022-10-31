#include <iostream>
#include <set>

int main()
{
    std::set<int> tmp;
    for (int i = 0; i < 10; i++)
    {
        int a;
        std::cin >> a;
        a = a % 42;
        tmp.insert(a);
    }
    std::cout << tmp.size();
}