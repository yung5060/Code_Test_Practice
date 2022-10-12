#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int solution(vector<int> arr)
{
    int temp = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        temp = lcm(temp, arr[i]);
    }
    return temp;
}

int main()
{
    vector<int> arr = {2, 6, 8, 14};
    cout << solution(arr) << endl;
    cin.get();
}