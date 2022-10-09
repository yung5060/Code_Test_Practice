#include <string>
#include <vector>
#include <cmath>
#include <iostream>


int solution(int n) {
    int a = 1;
    int sum = 0;
    while (a <= sqrt(n)){
        if((n % a) == 0){
            if(a == sqrt(n)) {
                sum += a;
                return sum;
            }
            sum += (a + n/a);
            a++;
        }
        else a++;
    }
    return sum;
}

int main() {
    std::cout << solution(12) << std::endl;
    std::cin.get();
}
