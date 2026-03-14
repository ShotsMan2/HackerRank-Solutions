#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// C:\\Users\\uysal\\OneDrive\\Masaüstü\\randomnumber.txt

int main()
{
    char arr[20]="abcdEFG123";

    FILE* fptr;
    fptr=fopen("C:\\Users\\uysal\\OneDrive\\Masaüstü\\dosya.txt","w");
    if(fptr==NULL){
        printf("unsc");
    }
    else{
        fputs(arr,fptr);



        printf("scs");
        fclose(fptr);
    }




    return 0;
}
