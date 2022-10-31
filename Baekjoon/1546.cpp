#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int rep;
    double total = 0;
    std::cin >> rep;

    std::vector<double> scores, tmp;
    for (int i = 0; i < rep; i++)
    {
        double a;
        std::cin >> a;
        scores.push_back(a);
        tmp.push_back(a);
    }
    std::sort(tmp.begin(), tmp.end());
    for (int i = 0; i < rep; i++)
    {
        total += scores[i] / tmp.back() * 100;
    }

    std::cout << (double)total / rep;
}