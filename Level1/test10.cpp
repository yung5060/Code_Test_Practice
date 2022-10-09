#include <iostream>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> list;
    for(int i=0; i<n; i++) list.push_back(x*(i+1));
    return list;
}

int main() {
    vector<long long> result = solution(-4, 2);
    vector<long long>::iterator it;
    for(it=result.begin(); it!=result.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cin.get();
}