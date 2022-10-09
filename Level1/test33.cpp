#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget)
{
    sort(d.begin(), d.end());
    int sum = 0;
    if (*d.begin() > budget)
        return 0;
    for (vector<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        sum += *it;
        *it = sum;
        if (sum > budget)
            return it - d.begin();
    }
    return d.size();
}

int main()
{
    vector<int> arr = {2, 2, 3, 3};
    cout << solution(arr, 10) << endl;
    cin.get();
}