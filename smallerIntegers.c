#include <stdio.h>

int main(){

    int num, i;
    int arr[5];

    printf("Enter 1 integer:\n");
    scanf("%d", &num);
    printf("Enter 5 more integer:\n");

    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf("Smaller integers than first integer: ");
    for(i=0; i<5; i++){
        if(num > arr[i]){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}