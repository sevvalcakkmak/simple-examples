//5 January 2023
#include <stdio.h>

int fibonacci(int a){
    if(a == 1){
        return 0;
    }
    else if(a == 2){
        return 1;
    }
    else{
        int b = fibonacci(a-1) + fibonacci(a-2);
        return b;
    }
}

int main(){
    int number;
    int answer;
    printf("Enter count of number: ");
    scanf("%d", &number);
    answer = fibonacci(number);
    printf("%d", answer);
    return 0;
}
//0 1 1 2 3 5 8 13 21...