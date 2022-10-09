#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b)
{
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
        sum += a[i] * b[i];
    return sum;
}

int main()
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {-3, -1, 0, 2};
    cout << solution(a, b) << endl;
    cin.get();
}