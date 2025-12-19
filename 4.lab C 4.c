#include <stdio.h>
#include <stdlib.h>

int main(){


    // ----- 1 -----
    // int n=0;

    // printf("enter the number:");
    // scanf("%d",&n);
    // if (n<0)
    // {
    //     printf("that is not a number of days!!");
    //     return 0;
    // }
    
    // switch (n)
    // {
    // case 1:
    //     printf("monday");
    //     break;
    // case 2:
    //     printf("tuesday");
    //     break;
    // case 3:
    //     printf("wednesday");
    //     break;
    // case 4:
    //     printf("thursday");
    //     break;
    // case 5:
    //     printf("friday");
    //     break;
    // case 6:
    //     printf("saturday");
    //     break;
    // case 7:
    //     printf("sunday");
    //     break;
    // default:
    //     break;
    // }
    // ----- 2 -----
    // int n=0;
    
    // printf("enter the number:");
    // scanf("%d",&n);
    // if (n<0 || n>9)
    // {
    //     printf("that is not a number of digit!!");
    //     return 0;
    // }
    
    // switch (n)
    // {
    // case 1:
    //     printf("%d",n);
    //     break;
    // case 2:
    //     printf("%d",n);
    //     break;
    // case 3:
    //     printf("%d",n);
    //     break;
    // case 4:
    //     printf("%d",n);
    //     break;
    // case 5:
    //     printf("%d",n);
    //     break;
    // case 6:
    //     printf("%d",n);
    //     break;
    // case 7:
    //     printf("%d",n);
    //     break;
    // case 8:
    //     printf("%d",n);
    //     break;
    // case 9:
    //     printf("%d",n);
    //     break;
    // case 0:
    //     printf("%d",n);
    //     break;
    // default:
    //     break;
    // }

    // ----- 3 -----

    // int x=0,fact=1;
    
    // printf("enter the number:");
    // scanf("%d",&x);
    // if (x<=0)
    // {
    //     printf("wrong number!");
    //     return 0;
    // }
    
    // for (int i = 1; i <=x; i++)
    // {
    //     fact *=i;
    // }
    // printf("%d! = %d",x,fact);

    // ----- 4 -----

    // int x=0,sum=0,i=0;

    // do
    // {
    //     printf("enter the number:");
    //     scanf("%d",&x);
    //     if (x<=0)
    //     {
    //         break;
    //     }else
    //     {
    //         sum+=x;
    //     }
    //     i++;
    // } while (x>=0);
    // printf("%d numbers sum is %d",i,sum);

    // ----- 5 -----
    
    // int i,j,n;
    
    // printf("enter the number:");
    // scanf("%d",&n);

    // for ( i = 0; i <= n; i++)
    // {
    //     for ( j = 0; j < i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    // ----- 6 -----

    // int i,j,n;
    
    // printf("enter the number:");
    // scanf("%d",&n);

    // for ( i = 0; i <= n; i++)
    // {
    //     for ( j = 0; j < i; j++)
    //     {
    //         printf("%d",j+1);
    //     }
    //     printf("\n");
    // }
    
    // ----- 7 -----
    
    // int n1,n2;

    // printf("enter two number:");
    // scanf("%d%d",&n1,&n2);

    // sumOfNumbers(n1,n2);

    
    // ----- 8 -----
    
    // int n;
    // printf("enter the number:");
    // scanf("%d",&n);

    // sqrOfNum(n);

    // ----- 9 -----
    
    // int n1,n2;

    // printf("enter first number:");
    // scanf("%d",&n1);
    // printf("enter second number:");
    // scanf("%d",&n2);

    // swapNum(n1,n2);

    return 0;
}

int sumOfNumbers(int n1,int n2){
    return printf("sum = %d",n1+n2);
}
int sqrOfNum(int n){
    return printf("%d",n*n);
}
int swapNum(int n1,int n2){
    int i;
    i = n1;
    n1 = n2;
    n2 = i;
    return printf("number 1 is = %d and number 2 is = %d",n1,n2);
}