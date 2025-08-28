// what will the following line produce in a C program
// int a = 4
// printf("%d %d %d \n", a, ++a, a++);

#include<stdio.h>
int main(){
    int a = 4;
    
    printf("%d %d %d \n", a, ++a, a++);
    
    // 4 5 5 (if evaluation order is left - right)
    // 6 6 4 (if evaluation order is right - left)
    // but in this question, evaluation order is not defined
    // so compiler print the output itself
    // so both the answers are correct
    
    return 0;
}