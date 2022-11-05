#include <cstdio>
#include <string.h>

int recursion(const char *s, int l, int r, int &count)
{
    count++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1, count);
}

int isPalindrome(const char *s, int &count)
{
    return recursion(s, 0, strlen(s) - 1, count);
}

int main()
{
    int count, N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        count = 0;
        char s[1000];
        scanf("%s", &s);
        printf("%d ", isPalindrome(s, count));
        printf("%d\n", count);
    }
}