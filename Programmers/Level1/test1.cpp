#include <string>
#include <vector>
#include <iostream>

int list[17] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
int factor[16] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int start = 0;
int rep = 0;

int pow(int a, int b) {
    int sum = 1;
    for(int i=0; i<b; i++) {
        sum *= a;
    }
    return sum;
}

int solution(int n) {
    while(start < 16) {
        if(n == 1){
            break;
        }
        if(n%(*(list+start))) {
            rep = 0;
            start++;
            return solution(n);
        }
        rep++;
        *(factor+start)+=pow(*(list+start), rep);
        return solution(n/(*(list+start)));
    }
    int a = 0;
    int result = 1;
    while(a < 16) {
        result *= *(factor+a);
        a++;
    }
    
    return result;
}

int main() {
    std::cout << solution(12) << std::endl;
	std::cin.get();
}
