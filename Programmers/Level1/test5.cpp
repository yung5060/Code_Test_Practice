#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while(n > 0) {
        answer.push_back(n % 10);
        n /= 10;
    }
    return answer;
}

int main() {
    vector<int> list(solution(5432154321));
    vector<int>::iterator it;
    for(it = list.begin(); it != list.end(); it++) {
        cout << *it << " ";
    }
    cin.get();
}
