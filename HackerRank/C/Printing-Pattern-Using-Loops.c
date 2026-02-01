#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,i,j,len,min;
    scanf("%d", &n);

    len=2*n-1;

    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            min=i;

            if(min>j){
                min=j;
            }
            if(min>len-1-i){
                min=len-1-i;
            }
            if(min>len-1-j){
                min=len-1-j;
            }
            printf("%d ",n-min);

        }
        printf("\n");
    }

    return 0;
}
