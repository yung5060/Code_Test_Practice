#include <iostream>
#include <string>

int solution(std::string s) {
    return std::stoi(s);
}

int main() {
    std::cout << solution("1234") << std::endl;
    std::cout << solution("-1234") << std::endl;
    std::cin.get();
}