#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int array[10] = {0}, i, len, rakam;

    char str[1000];

    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            rakam = str[i] - '0';

            array[rakam]++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
