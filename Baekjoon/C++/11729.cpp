#include <cmath>
#include <stdio.h>
#include <iostream>

void solution(int num, int start, int end, int skip)
{
    if (num == 1)
    {
        printf("%d %d\n", start, end);
        return;
    }
    else if (num > 0)
    {
        solution(num - 1, start, skip, end);
        printf("%d %d\n", start, end);
        solution(num - 1, skip, end, start);
    }
}

int main()
{
    int N;
    std::cin >> N;
    printf("%d\n", (int)pow(2, N) - 1);
    solution(N, 1, 3, 2);
    return 0;
}