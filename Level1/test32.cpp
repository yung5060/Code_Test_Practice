#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n)
{
    int temp = log2(n) / log2(3);
    vector<int> arr(temp + 1);
    while (n > 0)
    {
        int a = log2(n) / log2(3);
        arr[a]++;
        n -= pow(3, a);
    }
    long long decimal = 0;
    for (int i = 0; i <= temp; i++)
    {
        decimal += pow(3, temp - i) * arr[i];
    }
    return decimal;
}

int solution2(int n)
{
    vector<int> ret;
    while (n != 0)
        ret.push_back(n % 3), n /= 3;
    reverse(ret.begin(), ret.end());
    for (int i = 0; i < ret.size(); ++i)
        n += pow(3, i) * ret[i];
    return n;
}

int main()
{
    cout << solution(45) << endl;
    cout << "=====================" << endl;
    cout << solution2(45) << endl;
    cin.get();
}