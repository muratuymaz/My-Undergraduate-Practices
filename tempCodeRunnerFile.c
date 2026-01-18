#include <stdio.h>
#include <stdlib.h>

int f(int n){
    int arr[n/2];
    int k=0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n%i==0)
        {
            arr[k]=i;
            k++;
        }
    }
    for (int i = 0; i < k-1; i++)
    {
        if (n == (arr[i]*(arr[i]+1)))
        {
            return 1;
        }
    }
    return 0;
}

int main(){

    int n=132;
    int result = f(n);
    if (result==1)
    {
        printf("True\n");
    }
    else printf("False\n");
    
    return 0;
}