#include<stdio.h>

// Fibonacci series = 0,1,1,2,3,5,8,13,21,.....

int fibonacci(int);

int fibonacci(int n){
    if (n == 1 || n == 2){
        return (n - 1);
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    
    printf("The value of fibonacci series at %d is: %d",n, fibonacci(n));

    return 0;
}