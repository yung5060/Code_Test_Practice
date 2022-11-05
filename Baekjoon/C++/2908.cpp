#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string num1, num2;
    std::cin >> num1 >> num2;

    std::reverse(num1.begin(), num1.end());
    std::reverse(num2.begin(), num2.end());

    int a = std::stoi(num1), b = std::stoi(num2);
    int answer = (a < b) ? b : a;
    std::cout << answer;
}