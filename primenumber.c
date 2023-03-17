#include <stdio.h>

int main(){
    int num;
    int i = 2;
    int counter = 0;
    printf("Print a number: ");
    scanf("%d", &num);
    while(i < num){
        if(num % i == 0){
            counter++;
        }
        i++;
    }
    if (counter == 0){
        printf("Number is prime.");
    }
    else{
        printf("Number is not prime.");
    }
    return 0;
}