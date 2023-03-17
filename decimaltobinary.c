//8 November 2022
#include <stdio.h>

int main(){ 
    int dec, j;
    int i = 0;
    int binaryNum[32];
    while(1){
        printf("Enter a decimal number:");
        scanf("%d", &dec);
        do{
            binaryNum[i++] = dec % 2;
            dec = dec/2;
        }
        while(dec > 0);
            for(j = i - 1; j>=0; j--){
                printf("%d", binaryNum[j]);
        }
        i = 0;
        printf("\n\n");
    }
    return 0;  
}