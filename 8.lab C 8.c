#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE 50

void fillArray(int arr[], int size);
int arraySorting(int arr[], int size);
int arraySortingDecrease(int arr[], int size);
int arrayOddEven(int arr[], int size);
int deleteArrayElement(int arr[], int size, int element);
int arrayInsertElement(int arr[], int size, int element[],int counter);
int arrayInsertElementUnlisted(int arr[], int size, int element[],int counter);
int arraySecondLargest(int arr[], int size);
int arraySecondSmallest(int arr[], int size);

int main() {
    int arr[SIZE],element[SIZE];
    fillArray(arr, SIZE);
    // --------- 1 ---------
    // arraySorting(arr, SIZE);
    // --------- 2 ---------
    // arraySortingDecrease(arr, SIZE);
    // --------- 3 ---------
    // arrayOddEven(arr, SIZE);
    // --------- 4 ---------
    // printf("Original array:\n");
    // for (int i = 0; i < SIZE; i++) {
    //     printf("%d.%d\n",i, arr[i]);
    // }
    // printf("\n");
    // deleteArrayElement(arr, SIZE, 5);
    // --------- 5 ---------
    // int counter=0;
    // printf("how many number do you want to add?");
    // scanf("%d",&counter);
    // for (int i = 0; i < counter; i++)
    // {
    //     element[i] = rand() % 101;
    //     printf("Element %d: %d\n",i+1, element[i]);
    // }
    // printf("-------- Insertion ---------\n");
    // arrayInsertElement(arr, SIZE-20, element,counter);
    // ---------- 6 ---------
    // int counter=0;
    // printf("how many number do you want to add?");
    // scanf("%d",&counter);
    // for (int i = 0; i < counter; i++)
    // {
    //     element[i] = rand() % 101;
    //     printf("Element %d: %d\n",i+1, element[i]);
    // }
    // printf("-------- Insertion Unlisted ---------\n");
    // arrayInsertElementUnlisted(arr, SIZE-20, element,counter);
    // --------- 7 ---------
    // arraySorting(arr, SIZE-20);
    // arraySecondLargest(arr, SIZE-20);
    // --------- 8 ---------
    // arraySorting(arr, SIZE-20);
    // arraySecondSmallest(arr, SIZE-20);

    return 0;
}
// --------- Array olusturma ---------
void fillArray(int arr[], int size) {
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < size-20; i++) {
        arr[i] = rand() % 101;
    }
}
// --------- 1 ---------
int arraySorting(int arr[], int size) {
    int temp;
    for (int i = 0; i < size -1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d. %d\n",i+1, arr[i]);
    // }
}
// --------- 2 ---------
int arraySortingDecrease(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j >i; j--) {
            if (arr[j] > arr[j - 1]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
// --------- 3 ---------
int arrayOddEven(int arr[], int size) {
    int temp;
    int even[SIZE] = {0}, odd[SIZE] = {0};
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2 == 0)
        {
            even[i] = arr[i];
        }else
        {
            odd[i] = arr[i];
        }
    }
    printf("Even numbers:\n");
    for (int i = 0; i < size; i++)
    {
        if (even[i] != 0)
        {
            printf("%d\n", even[i]);
        }
    }
    printf("Odd numbers:\n");
    for (int i = 0; i < size; i++)
    {
        if (odd[i] != 0)
        {
            printf("%d\n", odd[i]);
        }
    }
}
// --------- 4 ---------
int deleteArrayElement(int arr[], int size, int element) {
    int i, j,temp;
    for (i = 0; i < size; i++) {
        if (i == element) {
            for (j = i; j < size; j++) {
                temp = arr[j + 1];
                arr[j] = temp;
                arr[j+1] = 0;
            }
            size--;
        }
    }
    printf("Array after deletion:\n");
    for (i = 0; i < size; i++) {
        printf("%d.%d\n",i, arr[i]);
    }
}
// --------- 5 ---------
int arrayInsertElement(int arr[], int size, int element[],int counter) {
    for (int i = 0; i < counter; i++) {
        arr[size + i] = element[i];
    }
    arraySorting(arr, size+counter);
}
// --------- 6 ---------
int arrayInsertElementUnlisted(int arr[], int size, int element[],int counter) {
    for (int i = 0; i < counter; i++)
    {
        arr[size + i] = element[i];
    }
    printf("Array after insertion:\n");
    for (int i = 0; i < size + counter; i++) {
        printf("%d.%d\n",i+1, arr[i]);
    }
}
// --------- 7 ---------
int arraySecondLargest(int arr[], int size) {
    int largest = arr[0];
    int second = -1;
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] < largest) {
            if (second == -1 || arr[i] > second) {
                second = arr[i];
            }
        }
    }
    printf("Second largest element is %d\n", second);
}
// --------- 8 ---------
int arraySecondSmallest(int arr[], int size) {
    int temp;
    for (int i = 0; i < size -1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int secondSmallest = 0;
    secondSmallest = arr[1];
    printf("Second smallest element is %d\n", secondSmallest);
}