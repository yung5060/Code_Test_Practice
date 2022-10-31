#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number)
{
    string::iterator it;
    for (it = phone_number.begin(); it != phone_number.end() - 4; it++)
    {
        *it = '*';
    }
    return phone_number;
}

int main()
{
    cout << solution("01024838367") << endl;
    cin.get();
}