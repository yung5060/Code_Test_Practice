#include <cstdio>
#include <vector>

int main()
{
    int N, num;
    scanf("%d", &N);
    std::vector<int> count(10001, 0);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        count[num]++;
    }

    for (int i = 0; i < 10001; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            printf("%d\n", i);
        }
    }
}