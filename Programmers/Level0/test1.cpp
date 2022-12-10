#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string)
{
    vector<string> num_op_list;
    stringstream ss(my_string);
    ss.str(my_string);
    string tmp;
    while (ss >> tmp)
    {
        num_op_list.push_back(tmp);
    }
    vector<string>::iterator it = num_op_list.begin() + 1;
    int ans = stoi(num_op_list.front());
    while (it < num_op_list.end())
    {
        if (*it == "+")
        {
            ans += stoi(*(it + 1));
        }
        else
        {
            ans -= stoi(*(it + 1));
        }
        it += 2;
    }
    return ans;
}

int main()
{
    cout << solution("3 + 4");
    cin.get();
}