#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right)
{
    int sum = 0;
    for (int i = left; i <= right; i++)
    {
        int count = 0;
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (j == sqrt(i))
            {
                count++;
            }
            else if (!(i % j))
            {
                count += 2;
            }
        }
        sum += (count & 1) ? i * (-1) : i;
    }
    return sum;
}

int main()
{
    cout << solution(13, 17) << endl;
    cin.get();
}