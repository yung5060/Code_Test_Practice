#include <iostream>

int solution(int n) {
    int i = 2;
    while(i) {
        if(n % i == 1) break;
        i++;
    }
    return i;
}

int main() {
    std::cout << solution(10) << std::endl;
    std::cout << solution(12) << std::endl;
    std::cin.get();
}