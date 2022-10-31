#include <iostream>

bool solution(int x) {
    int sum = 0;
    int n = x;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if(!(x % sum)) return true;
    return false;
}

int main() {
    std::cout << solution(10) << std::endl;
    std::cout << solution(12) << std::endl;
    std::cout << solution(11) << std::endl;
    std::cout << solution(13) << std::endl;
    std::cin.get();
}