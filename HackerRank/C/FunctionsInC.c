#include <stdio.h>
int max_of_four(int a, int b, int c, int d, int array[]){
    int max,i;

    max=a;

    for(i=0;i<4;i++){
        if(max<array[i]){
            max=array[i];
        }
    }

    return max;
}


int main() {
    int a, b, c, d, array[99];
    scanf("%d %d %d %d", &a, &b, &c, &d);
    array[0]=a;
    array[1]=b;
    array[2]=c;
    array[3]=d;


    int ans = max_of_four(a, b, c, d, array);
    printf("%d", ans);

    return 0;
}
