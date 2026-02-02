#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, sum = 0, kalan, bolum;
    scanf("%d", &n);

    sum += n / 10000;
    kalan = n % 10000;

    sum += kalan / 1000;
    kalan = kalan % 1000;

    sum += kalan / 1000;
    kalan = kalan % 1000;

    sum += kalan / 100;
    kalan = kalan % 100;

    sum += kalan / 10;
    kalan = kalan % 10;

    sum += kalan / 1;
    kalan = kalan % 1;

    printf("%d", sum);

    return 0;
}
