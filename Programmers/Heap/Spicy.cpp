#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (const auto &s : scoville)
    {
        pq.push(s);
    }
    int count = 0;
    while (pq.top() < K)
    {
        if (pq.size() == 1)
            return -1;
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        pq.push(a + b * 2);
        count++;
    }
    return count;
}

int main()
{
    vector<int> scoville = {1, 2, 3, 9, 10, 12};
    cout << solution(scoville, 1000) << endl;
    cin.get();
}