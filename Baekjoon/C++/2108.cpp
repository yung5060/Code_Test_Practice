#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int N, mid;
    double ttl = 0;
    std::cin >> N;
    std::vector<int> array(8001, 0);
    std::vector<std::pair<int, int>> tmp(1, {-1, 0});

    for (int i = 0; i < N; i++)
    {
        int a;
        std::cin >> a;
        ttl += a;
        array[a + 4000]++;
    }
    if (std::round(ttl / N) == -0)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        std::cout << std::round(ttl / N) << std::endl;
    }

    int pnt = -1, first = 1, last = N, check = 0, begin, end;
    for (int i = 0; i < 8001; i++)
    {
        if (array[i] != 0)
        {
            if (pnt < N / 2)
            {
                for (int j = 0; j < array[i]; j++)
                {
                    pnt++;
                    if (pnt == N / 2)
                    {
                        mid = i - 4000;
                        break;
                    }
                }
            }
            if (array[i] > tmp.back().second)
            {
                tmp = std::vector<std::pair<int, int>>(1, {i - 4000, array[i]});
            }
            else if (array[i] == tmp.back().second)
            {
                tmp.push_back({i - 4000, array[i]});
            }
            for (int j = 0; j < array[i]; j++)
            {
                check++;
                if (check == first)
                {
                    begin = i - 4000;
                }
                if (check == last)
                {
                    end = i - 4000;
                }
            }
        }
    }
    std::cout << mid << std::endl;
    if (tmp.size() == 1)
    {
        std::cout << tmp.front().first << std::endl;
    }
    else
    {
        std::cout << tmp[1].first << std::endl;
    }
    std::cout << end - begin << std::endl;
}