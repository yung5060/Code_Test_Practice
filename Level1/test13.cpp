#include <iostream>
#include <vector>
#include <cmath>

long long solution(int a, int b)
{
    if ((a + b) % 2 == 1)
    {
        return (a + b) * ((abs(a - b) + 1) / 2);
    }
    return (a + b) * (abs(a - b) / 2 + 0.5);
}

int main()
{
    std::cout << solution(3, 5) << std::endl;
    std::cout << solution(3, 3) << std::endl;
    std::cout << solution(5, 3) << std::endl;
	std::cin.get();
}
