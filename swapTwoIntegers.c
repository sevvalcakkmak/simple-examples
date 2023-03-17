//4 February 2023
#include <stdio.h>
//swap two integers without third variable
int main(){
    int a;
    int b;
    printf("Before swap\n");
    printf("First integer: ");
    scanf("%d" ,&a);
    printf("Second integer: ");
    scanf("%d" ,&b);

    a = b - a;
    b = b - a;
    a = b + a;
    printf("\nAfter swap\n");
    printf("First integer: %d\n", a);
    printf("Second integer: %d\n", b);

    return 0;
}