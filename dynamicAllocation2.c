//15 March 2023
#include <stdio.h>
#include <stdlib.h>

//struct 
typedef struct variables
{   
   int* arr;
   int lenght;
   int cap; //capacity
}Var; //Variable

Var v1 = { .arr = NULL, .lenght = 0, .cap = 1};

void push(Var* v1, int data);
void pop(Var* v1);
void printArray(Var v1);
void printStorage();

int main(){
    int pushOrPop;
    int data;
    v1.arr = (int*)malloc(sizeof(int)*(v1.cap));
    while(1){
        printStorage();
        printf("Press 1 to push or press 0 to pop: ");
        scanf("%d", &pushOrPop);
        if(pushOrPop == 1){
            printf("Data you want to add: ");
            scanf("%d", &data);
            push(&v1, data);
            printArray(v1);
        }
        else if(pushOrPop == 0){
            pop(&v1);
            printArray(v1);
        }
        else{
            break;
        }

    }
    return 0;
}

void push(Var* v1, int data){
    v1->arr[v1->lenght] = data;
    v1->lenght++;
    if(v1->lenght >= (v1->cap)){
        int* arr2 = (int*)malloc(sizeof(int)*(v1->cap)*2);
        for(int i = 0; i < (v1->cap); i++){
            arr2[i] = v1->arr[i];
        }
        free(v1->arr);
        v1->arr = arr2;
        v1->cap *= 2;
    }
}

void pop(Var* v1){

    if(v1->lenght == 0){
        printf("You can't pop anymore!!\n");
    }

    else{
        v1->lenght--; 
    
        if(v1->cap > 0 && v1->lenght <= (v1->cap)/2){
            int* arr2 = (int*)malloc(sizeof(int)*(v1->cap)/2);
            for(int i = 0; i < (v1->cap)/2; i++){
                arr2[i] = v1->arr[i];
            }
            free(v1->arr);
            v1->arr = arr2;
            v1->cap /= 2;

            if(v1->cap < 1){
            v1->cap = 1;
            }
        }
    }
}

void printArray(Var v1){
    for(int i = 0; i < v1.lenght; i++){
        printf("%d ", v1.arr[i]);
    }
    printf("\n");
}

void printStorage(){
    printf("Storage: %d / %d\n", v1.lenght, v1.cap);
}