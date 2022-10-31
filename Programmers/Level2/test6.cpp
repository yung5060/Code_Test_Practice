#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int start1 = 1, count = 1;
    while (start1 <= n / 2)
    {
        int start2 = start1;
        int sum = 0;
        while (sum < n)
        {
            sum += start2;
            if (sum == n)
            {
                count++;
            }
            start2++;
        }
        start1++;
    }
    return count;
}

int main()
{
    cout << solution(15) << endl;
    cin.get();
}