#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

long long solution(long long n) {
    std::vector<int> list;
    while(n > 0) {
        list.push_back(n % 10);
        n /= 10;
    }
    sort(list.begin(), list.end());
    std::vector<int>::iterator it;
    int i=0;
    long long sum = 0;
    for(it=list.begin(); it!=list.end(); it++) {
        sum += (*it) * (pow(10, i));
        i++;
    }
    return sum;
}

int main() {
    std::cout << "118372" << std::endl;
    std::cout << solution(118372) << std::endl;
    std::cin.get();
}