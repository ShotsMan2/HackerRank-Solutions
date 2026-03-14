#include <stdio.h>
#include <stdlib.h>

int findmax(int arr[],int size){
    if(size==1){
        return arr[0];
    }

    int maxofremaining=findmax(arr,size-1);

    if(arr[size-1]>maxofremaining){
        return arr[size-1];
    }
    else{
        return maxofremaining;
    }


}

int main()
{
    int sayilar[10] = {12, 45, 7, 89, 23, 56, 97, 34, 67, 5};

    // Dizinin boyutunu (eleman sayısını) belirliyoruz
    int boyut = 10;

    printf("%d",findmax(sayilar,boyut));

    return 0;
}
