#include <iostream>
#include <cstdlib>

using namespace std;

int addOneOdd(int a)
{
    return (a & 1) ? a + 1 : a;
}

int solution(int n, int a, int b)
{
    int count = 1;
    int c = (a < b) ? a : b;
    int d = (a < b) ? b : a;
    while (!(c & 1) || d != c + 1)
    {
        c = addOneOdd(c);
        d = addOneOdd(d);
        c /= 2;
        d /= 2;
        count++;
    }
    return count;
}

int main()
{
    cout << solution(16, 7, 10) << endl;
    cin.get();
}