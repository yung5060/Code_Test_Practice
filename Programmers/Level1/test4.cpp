#include <string>
#include <vector>
#include <cmath>
#include <iostream>

long long solution(long long n) {

    if(sqrt(n) - (int)sqrt(n) == 0) {
        return pow(sqrt(n)+1, 2);
    }
    return -1;
}

int main() {

    std::cout << solution(121) << std::endl;
    std::cout << solution(3) << std::endl;
    std::cin.get();
}