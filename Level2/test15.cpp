#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int n)
{
    vector<int> list = {1, 2};
    if (n == 1)
        return 1;
    for (int i = 0; i < n - 2; i++)
    {
        list.push_back(((list[i] % 1234567) + (list[i + 1] % 1234567)) % 1234567);
    }
    return list.back();
}

int main()
{
    cout << solution(4) << endl;
    cout << solution(3) << endl;
    cin.get();
}