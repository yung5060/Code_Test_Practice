#include <stdio.h>

int main()
{
    int rep;
    scanf("%d", &rep);

    for (int i = 0; i < rep; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}