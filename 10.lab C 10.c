#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int arraySort(int arr[],int size);
int mergeArrays(int arr1[], int arr2[], int mergedArr[], int size1, int size2);
int missingSmallestElement(int arr[],int size);

int main(){
    // --------- 1 ---------
    // int size1=0,size2=0,size3=0,size4=0;
    // printf("Enter sizes of first 2D array: ");
    // scanf("%d%d",&size1,&size2);
    // printf("Enter sizes of second 2D array: ");
    // scanf("%d%d",&size3,&size4);

    // int arr[size1][size2];
    // int arr2[size3][size4];
    // printf("\nEnter elements of first 2D array:\n");
    // for (int i = 0; i < size1; i++) {
    //     for (int j = 0; j < size2; j++) {
    //         printf("Element [%d][%d]: ",i,j);
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // printf("\n");
    // printf("Enter elements of second 2D array:\n");
    // for (int i = 0; i < size3; i++) {
    //     for (int j = 0; j < size4; j++) {
    //         printf("Element [%d][%d]: ",i,j);
    //         scanf("%d",&arr2[i][j]);
    //     }
    // }
    // printf("\n");
    // printf("First 2D array:\n");
    
    // for (int i = 0; i < size1; i++)
    // {
    //     for (int j = 0; j < size2; j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Second 2D array:\n");
    // for (int i = 0; i < size3; i++)
    // {
    //     for (int j = 0; j < size4; j++)
    //     {
    //         printf("%d ",arr2[i][j]);
    //     }
    //     printf("\n");
    // }
    // int counter = 1;
    // if (size1==size3 && size2==size4)
    // {
    //     for (int i = 0; i < size1; i++)
    //     {
    //         for (int j = 0; j < size2; j++)
    //         {
    //             if(arr[i][j]!=arr2[i][j]){
    //                 counter=0;
    //                 break;
    //             }
    //         }
    //     }
    // }else{
    //     counter=0;
    // }
    // if (counter!=1)
    // {
    //     printf("\nThe two arrays are not equal.");
    // }else{
    //     printf("\nThe two matrices are equal.");
    // }

    // --------- 2 ---------
    // int size1=0,size2=0, i=0;
    // int arr[MAX_SIZE];
    // int arr2[MAX_SIZE];
    // printf("Enter size of 1st array: ");
    // scanf("%d",&size1);
    // printf("Enter elements of 1st array:\n");
    // while (i<size1)
    // {
    //     scanf("%d",&arr[i]);
    //     i++;
    // }
    // printf("Enter size of 2nd array: ");
    // scanf("%d",&size2);
    // i=0;
    // printf("Enter elements of 2nd array:\n");
    // while (i<size2)
    // {
    //     scanf("%d",&arr2[i]);
    //     i++;
    // }
    // printf("\nSorted 1st array:\n");
    // arraySort(arr,size1);
    // for (int i = 0; i < size1; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    // printf("\nSorted 2nd array:\n");
    // arraySort(arr2,size2);
    // for (int i = 0; i < size2; i++)
    // {
    //     printf("%d ", arr2[i]);
    // }
    // printf("\n");
    // int mergedArr[size1 + size2];
    // mergeArrays(arr, arr2, mergedArr, size1, size2);
    // printf("\nMerged sorted array:\n");
    // for (int i = 0; i < size1 + size2; i++)
    // {
    //     printf("%d ", mergedArr[i]);
    // }

    // --------- 3 ---------
    // int size = 0;
    // int arr[MAX_SIZE];
    // printf("Enter size of array: ");
    // scanf("%d",&size);
    // printf("Enter elements of array:\n");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // printf("Elements of array:\n");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    
    // printf("\nThe smallest missing element is %d\n",
    //     missingSmallestElement(arr, size));
    return 0;
}

int arraySort(int arr[],int size){
    int temp;
    for (int i = 0; i < size -1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] >= arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int mergeArrays(int arr1[], int arr2[], int mergedArr[], int size1, int size2) {
    int i=0, j=0, k=0;
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < size1) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}

int missingSmallestElement(int arr[],int size){
    int i=0,j=0;
    arraySort(arr,size);
    for ( i = 0; i < size; i++)
    {
        if (arr[i]!=(arr[i+1]-1))
        {
            return arr[i]+1;
        }
    }
}