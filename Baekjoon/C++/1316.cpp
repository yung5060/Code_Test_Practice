#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int rep, cnt = 0;
    std::cin >> rep;
    for (int i = 0; i < rep; i++)
    {
        std::string word, tmp = "";
        std::cin >> word;
        char before = ' ';
        for (const auto &it : word)
        {
            if (std::find(tmp.begin(), tmp.end(), it) != tmp.end())
            {
                if (before != it)
                {
                    break;
                }
            }
            before = it;
            tmp.push_back(it);
        }
        if (word == tmp)
        {
            cnt++;
        }
    }
    std::cout << cnt;
}