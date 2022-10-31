#include <iostream>
#include <string>

int main()
{
    int rep;
    std::cin >> rep;

    for (int i = 0; i < rep; i++)
    {
        std::string xo;
        std::cin >> xo;
        int score = 1, total = 0;
        for (auto &it : xo)
        {
            if (it == 'O')
            {
                total += score;
                score++;
            }
            else if (it == 'X')
            {
                score = 1;
            }
        }
        std::cout << total << std::endl;
    }
}