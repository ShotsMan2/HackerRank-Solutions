#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0,i;

    scanf("%d",&n);

    int array[n];

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++){
        sum+=array[i];
    }

    printf("%d",sum);



    return 0;
}
