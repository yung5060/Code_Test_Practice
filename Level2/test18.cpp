#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(vector<int> citations)
{
    sort(citations.rbegin(), citations.rend());
    int count = 0;
    vector<int>::iterator it = citations.begin();
    while (*it > count)
    {
        it++;
        count++;
    }
    return count;
}

int main()
{
    vector<int> citations = {0, 1, 2, 3, 5, 5, 5, 6};
    cout << solution(citations) << endl;
    cin.get();
}