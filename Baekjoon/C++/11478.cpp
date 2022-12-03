#include <iostream>
#include <set>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::set<std::string> string_set;
    std::string s;
    std::cin >> s;
    for (int i = 1; i <= s.size(); i++)
    {
        std::string tmp;
        for (int j = 0; j < s.size() - i + 1; j++)
        {
            tmp = s.substr(j, i);
            string_set.insert(tmp);
        }
    }
    std::cout << string_set.size();
}