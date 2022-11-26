#include <iostream>
#include <string>

int main()
{
    int N;
    std::cin >> N;
    int series = 666, answer = 0;
    int cnt = 0;
    while (true)
    {
        std::string tmp = std::to_string(series);
        for (int i = 0; i < tmp.size() - 2; i++)
        {
            if (tmp[i] == '6' && tmp[i + 1] == '6' && tmp[i + 2] == '6')
            {
                cnt++;
                if (cnt == N)
                {
                    std::cout << series;
                    return 0;
                }
                break;
            }
        }
        series++;
    }
}