#include <stdlib.h>
#include <stdio.h>

void func();
int recursive_function(int n);
int recursive_factorial(int n);
int recursive_evenOdd(int n);
int fibonacci(int n);
int sum_of_digits(int n);
int recursive_evenOdd_range(int start, int end);
int recursive_count_digits_number(int n);

int main(){
    // ----- func() example -----
    // func();

    // ----- recursive_function() example -----
    // int num;
    // printf("number: ");
    // scanf("%d", &num);
    // int result = recursive_function(num);
    // printf("Sum of first %d natural numbers is: %d\n", num, result);

    // ----- factorial() example -----
    // int number;
    // printf("Enter a number to calculate its factorial: ");
    // scanf("%d", &number);
    // int fact = factorial(number);
    // printf("Factorial of %d is: %d\n", number, fact);

    // ----- recursive_evenOdd() example -----
    // int n;
    // printf("Enter a number to check even or odd using recursion: ");
    // scanf("%d", &n);
    // int isEven = recursive_evenOdd(n);
    // if(isEven)
    //     printf("%d is Even\n", n);
    // else
    //     printf("%d is Odd\n", n);

    // ----- fibonacci series using recursion -----
    // printf("Fibonacci Series up to 10 terms:\n");
    // for(int i = 0; i < 10; i++){
    //     printf("%d ", fibonacci(i));
    // }

    // ----- even or odd using recursion in range -----
    // int start, end;
    // printf("Enter start and end of range to check even or odd using recursion: ");
    // scanf("%d %d", &start, &end);
    // recursive_evenOdd_range(start, end);

    // ----- sum of digits using recursion -----
    // int number;
    // printf("Enter a number to calculate sum of its digits using recursion: ");
    // scanf("%d", &number);
    // int sum = sum_of_digits(number);
    // printf("Sum of digits of %d is: %d\n", number, sum);

    // ----- count digits of a number using recursion -----
    // int number;
    // printf("Enter a number to count its digits using recursion: ");
    // scanf("%d", &number);
    // int count = recursive_count_digits_number(number);
    // printf("Number of digits in %d is: %d\n", number, count);

    return 0;
}

void func(){
    // recursive function example
    static int count = 0;
    if(count <= 50){
        printf("Count: %d\n", count);
        count++;
        func();
    }
}
int recursive_function(int n){
    // SUM ofal first n natur numbers using recursion
    if(n == 0)
        return 0;
    else
        return n + recursive_function(n - 1);
}
int recursive_factorial(int n){
    // Factorial of n using recursion
    if(n == 0)
        return 1;
    else
        return n * recursive_factorial(n - 1);
}
int recursive_evenOdd(int n){
    // Check if a number is even or odd using recursion
    if(n == 0)
        return 1; // even
    else if(n == 1)
        return 0; // odd
    else
        return recursive_evenOdd(n - 2);
}
int fibonacci(int n){
    if (n == 0)
        return 1;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int sum_of_digits(int n){
    if (n == 0)
    {
        return 0;
    }
    else{
        return (n%10) + sum_of_digits(n/10);
    }
}
int recursive_evenOdd_range(int start, int end){
    int i;
    for(i = start; i <= end; i++){
        if(recursive_evenOdd(i))
            printf("%d is Even\n", i);
        else
            printf("%d is Odd\n", i);
    }
}
int recursive_count_digits_number(int n){
    if(n == 0)
        return 0;
    else
        return 1 + recursive_count_digits_number(n / 10);
}