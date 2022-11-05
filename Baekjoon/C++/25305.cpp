#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> scores;

    int N, k;
    std::cin >> N >> k;

    for (int i = 0; i < N; i++)
    {
        int score;
        std::cin >> score;
        scores.push_back(score);
    }
    std::sort(scores.rbegin(), scores.rend());
    std::cout << scores[k - 1];
}