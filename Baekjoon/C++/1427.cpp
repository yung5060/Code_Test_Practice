#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string N;
    std::cin >> N;
    std::sort(N.rbegin(), N.rend());
    std::cout << N;
}