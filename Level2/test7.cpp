#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    vector<int> list = {0, 1};
    if (n == 0 || n == 1)
    {
        return n;
    }
    for (int i = 1; i < n; i++)
    {
        list.push_back((list.back() + *(list.end() - 2)) % 1234567);
    }
    return list.back();
}

int main()
{
    cout << solution(2) << endl;
    cout << solution(5) << endl;
    cout << solution(4) << endl;
    cout << solution(3) << endl;
    cout << solution(6) << endl;
    cin.get();
}