#include<stdio.h>

void swap(int* a, int* b);

void swap(int* a, int* b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a, b;

    printf("Enter the value of 'a': ");
    scanf("%d", &a);
    
    printf("Enter the value of 'b': ");
    scanf("%d", &b);
    
    swap(&a, &b);
    
    printf("The value of a is %d and the value of b is %d", a, b);
    
    return 0;
}