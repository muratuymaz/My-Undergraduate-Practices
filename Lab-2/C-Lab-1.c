#include <stdio.h>
#include <stdlib.h>

int sum(int *, int*, int*);

int main() {
    // ------ 1 ------
    // int m=10, n, o;
    // int m=10;
    // int* z;
    // z = &m;
    // printf("z stores the address of m = %x\n",&z);
    // printf("*z stores the value of m = %d\n",*z);
    // printf("&m stores the address of m = %x\n",&m);
    // printf("&n stores the address of n = %x\n",&n);
    // printf("&o stores the address of o = %x\n",&o);
    // printf("&z stores the address of z = %x\n",&z);

    // ------ 2 ------
    // int n=10;
    // int* ptr;
    // ptr = &n;
    // printf("Before: n = %d\n", *ptr);
    // printf("Address of n = %x\n", &n);
    // *ptr = 20;
    // printf("After: n = %d\n", *ptr);
    // printf("Address of n = %x\n", &n);

    // ------ 3 ------
    // int n=300;
    // float f=3.14;
    // int* zptr;
    // zptr = &m;

    // printf("address of n = %x\n", &n);
    // printf("address of f = %x\n", &f);
    // printf("address of z = %x\n", zptr);
    // printf("------------\n");
    // printf("value of n = %d\n", n);
    // printf("value of f = %f\n", f);
    // printf("value of z = %d\n", *zptr);
    // printf("------------\n");
    // printf("address of n = %p\n", n);
    // printf("address of f = %p\n", f);
    // printf("address of z = %p\n", zptr);
    // printf("------------\n");
    // printf("value at address of n = %p\n", &n);
    // printf("value at address of f = %p\n", &f);
    // printf("value at address of z = %p\n", zptr);

    // ------ 4 ------
    // int n1,n2;
    // int* ptr1, *ptr2;
    // ptr1 = &n1;
    // ptr2 = &n2;
    // printf("Enter two integers: ");
    // scanf("%d %d", ptr1, ptr2);
    // printf("You entered: %d and %d\n", *ptr1, *ptr2);
    // printf("Sum of the two integers: %d\n", *ptr1 + *ptr2);

    // ------ 5 ------
    // int n1, n2, sum_result;
    // int* ptr1, *ptr2, *ptr_sum;
    // ptr1 = &n1;
    // ptr2 = &n2;
    // ptr_sum = &sum_result;
    // printf("Enter two integers: ");
    // scanf("%d %d", ptr1, ptr2);
    // sum(ptr1, ptr2, ptr_sum);
    // printf("Sum of the two integers: %d\n", *ptr_sum);

    // ------ 6 ------
    // int n1, n2;
    // int* ptr1, *ptr2;
    // ptr1 = &n1;
    // ptr2 = &n2;
    // printf("Enter two integers: ");
    // scanf("%d %d", ptr1, ptr2);
    // if(*(ptr1) > *(ptr2)) {
    //     printf("%d is greater than %d\n", *ptr1, *ptr2);
    // } else if(*(ptr1) < *(ptr2)) {
    //     printf("%d is greater than %d\n", *ptr2, *ptr1);
    // } else {
    //     printf("numbers are equal\n");
    // }

    // ------ 7 ------
    // int n;
    // printf("Enter the size of the array: ");
    // scanf("%d", &n);
    // int arr[n];
    // for(int i = 0; i < n; i++) {
    //     printf("Enter element %d: ", i + 1);
    //     scanf("%d", &arr[i]);
    // }
    // for(int i = 0; i < n; i++) {
    //     printf("Element %d: %d\n", i + 1, *(arr+i));
    // }

    // ------ 8 ------
    
    // ------ 9 ------
    // int n;
    // printf("Input total number of elements(1 to 100): ");
    // scanf("%d", &n);
    // int arr[n];
    // for(int i = 0; i < n; i++) {
    //     printf("Enter element %d: ", i + 1);
    //     scanf("%d", (arr+i));
    // }
    // int max = *arr;
    // for(int i = 0; i < n; i++) {
    //     if(max<*(arr+i)) {
    //         max = *(arr+i);
    //     }
    // }
    // printf("Maximum element in the array is: %d\n", max);

    // ------ 10 ------
    // char str[] = "w3resource";
    // int size = sizeof(str);
    // printf("String: %s\n", str);
    // printf("The length of the given string w3resource is :%d\n", size-1);

    // ------ 11 ------

    return 0;
}

int sum(int *a, int *b, int *sum) {
    *sum = *a + *b;
}