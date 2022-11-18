#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string solution(string my_string)
{
    string tmp = my_string;
    int cnt = 0;
    for (int i = 0; i < my_string.size(); i++)
    {
        if (find(my_string.begin(), my_string.end(), my_string[i]) - my_string.begin() != i)
        {
            tmp.erase(i - cnt, 1);
            cnt++;
        }
    }
    return tmp;
}

int main()
{
    string s = "We are the world";
    cout << solution(s) << endl;
}