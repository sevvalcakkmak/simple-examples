//8 November 2022
#include <stdio.h>

int main(){

    int fib1 = 0;
    int fib2 = 1;
    int tut;
    int i;
    int series;

    printf("Enter count of number: ");
    scanf("%d", &series);

    for(i=1; i <= series; i++){
        printf("%d ", fib1);
        tut = fib2;
        fib2 = fib1 + fib2;
        fib1 = tut;
    }
    return 0;
}

//0 1 1 2 3 5 8 13 21...