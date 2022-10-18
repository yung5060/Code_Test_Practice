#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s)
{
    string::iterator it = s.begin();
    vector<vector<string>> lists;
    while (it != s.end())
    {
        if (*it != '{' && *it != ',' && *it != '}')
        {
            vector<string> temp1;
            while (*it != '}')
            {
                string temp2 = "";
                while (*it != ',')
                {
                    temp2.push_back(*it);
                    it++;
                }
                temp1.push_back(temp2);
            }
                }
    }
}

int main()
{
}