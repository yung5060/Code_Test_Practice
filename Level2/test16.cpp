#include <iostream>

using namespace std;

int solution(int n)
{
    int count = 1;
    while (n != 1)
    {
        if (n & 1)
        {
            count++;
            n -= 1;
        }
        n /= 2;
    }
    return count;
}

int main()
{
    cout << solution(5) << endl;
    cout << solution(6) << endl;
    cout << solution(5000) << endl;
    cin.get();
}