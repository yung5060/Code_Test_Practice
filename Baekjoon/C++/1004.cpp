#include <iostream>
#include <cmath>

double distance(int x, int y, int a, int b)
{
    return std::sqrt((x - a) * (x - a) + (y - b) * (y - b));
}

int main()
{
    int N, n;
    std::cin >> N;
    int x1, y1, x2, y2;
    for (int i = 0; i < N; i++)
    {
        std::cin >> x1 >> y1 >> x2 >> y2;
        std::cin >> n;
        int cnt = 0, a, b, r;
        for (int j = 0; j < n; j++)
        {
            std::cin >> a >> b >> r;
            if (distance(x1, y1, a, b) < r && distance(x2, y2, a, b) > r)
            {
                cnt++;
            }
            if (distance(x1, y1, a, b) > r && distance(x2, y2, a, b) < r)
            {
                cnt++;
            }
        }
        std::cout << cnt << '\n';
    }
}