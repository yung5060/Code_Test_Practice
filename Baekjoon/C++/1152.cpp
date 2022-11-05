#include <iostream>
#include <string>

int main()
{
    std::string tmp;
    std::getline(std::cin, tmp);

    if (tmp.front() == ' ')
    {
        tmp = std::string(tmp.begin() + 1, tmp.end());
    }
    if (tmp.back() == ' ')
    {
        tmp = std::string(tmp.begin(), tmp.end() - 1);
    }

    int count = 0;
    std::string::iterator it = tmp.begin();
    while (it != tmp.end())
    {
        if (*it == ' ')
        {
            count++;
        }
        it++;
    }
    if (tmp.size() == 0)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        std::cout << count + 1 << std::endl;
    }
}