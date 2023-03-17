//9 November 2022
#include <stdio.h>
int main(){
    int num;
    int i, j, k;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 0; i < num; i++){
        for(j = num; j > i; j--){
            printf(" ");
        }
        for(k = 0; k < num; k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}