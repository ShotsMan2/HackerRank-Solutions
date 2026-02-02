#include <stdio.h>

void update(int *a, int *b)
{
    int *c;
    *c = *a;

    *a = *a + *b;

    if (*b > *c)
    {
        *b = *b - *c;
    }
    else
    {
        *b = *c - *b;
    }
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
