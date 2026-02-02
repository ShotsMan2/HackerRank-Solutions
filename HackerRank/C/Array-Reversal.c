#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, x, last;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    last = num - 1;

    for (i = 0; i < num / 2; i++)
    {
        x = arr[i];
        arr[i] = arr[last];
        arr[last] = x;
        last--;
    }

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
