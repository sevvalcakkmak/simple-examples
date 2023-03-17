//4 January 2023
#include <stdio.h>
#include <stdlib.h>

//global variables
int* arr;
int lenght = 0;

void push(int* cap, int data);
void pop(int* cap);
void printArray();

int main(){
    int a = 1;
    int* cap;
    cap = &a;
    int pushOrPop;
    int data;
    arr = (int*)malloc(sizeof(int)*(*cap));
    while(1){
        printf("Storage: %d / %d\n", lenght, a);
        printf("Press 1 to push or press 0 to pop: ");
        scanf("%d", &pushOrPop);
        if(pushOrPop == 1){
            printf("Data you want to add: ");
            scanf("%d", &data);
            push(cap, data);
            printArray();
        }
        else if(pushOrPop == 0){
            pop(cap);
            printArray();
        }
        else{
            break;
        }

    }
    return 0;
}

void push(int* cap, int data){
    arr[lenght] = data;
    lenght++;
    if(lenght >= (*cap)){
        int* arr2 = (int*)malloc(sizeof(int)*(*cap)*2);
        for(int i = 0; i < (*cap); i++){
            arr2[i] = arr[i];
        }
        free(arr);
        arr = arr2;
        *cap *= 2;
    }
}

void pop(int* cap){

    if(lenght == 0){
        printf("You can't pop anymore!!\n");
    }

    else{
        lenght--; 
    
        if( *cap > 0 && lenght <= (*cap)/2){
            int* arr2 = (int*)malloc(sizeof(int)*(*cap)/2);
            for(int i = 0; i < (*cap)/2; i++){
                arr2[i] = arr[i];
            }
            free(arr);
            arr = arr2;
            *cap /= 2;

            if(*cap < 1){
            *cap = 1;
            }
        }
    }
}

void printArray(){
    for(int i = 0; i < lenght; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}