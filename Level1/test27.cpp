#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long temp = (count & 1) ? (count + 1) * (count / 2 + 0.5) : (count + 1) * (count / 2);
    long long result = (money - price * temp < 0) ? (price * temp - money) : 0;
    return result;
}

int main()
{
    cout << solution(3, 20, 4) << endl;
    cin.get();
}