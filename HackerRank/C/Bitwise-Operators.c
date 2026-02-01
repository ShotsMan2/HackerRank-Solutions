#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int maxand=0,maxor=0,maxxor=0,i,j;

    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            int currentand= i&j;
            int currentor=i|j;
            int currentxor=i^j;

            if(currentand<k && currentand>maxand){
                maxand=currentand;
            }
            if(currentor<k && currentor>maxor){
                maxor=currentor;
            }
            if(currentxor<k && currentxor>maxxor){
                maxxor=currentxor;
            }
        }
    }

    printf("%d\n",maxand);
    printf("%d\n",maxor);
    printf("%d\n",maxxor);


}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
