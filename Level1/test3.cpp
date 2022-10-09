#include <iostream>
#include <cmath>

int solution(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    std::cout << solution(123) << std::endl;
    std::cout << solution(987) << std::endl;
    std::cin.get();
}