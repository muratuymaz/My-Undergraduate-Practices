#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int sumFunction(int num1,int num2);
int squareNum(int num);
int swapNum(int num1,int num2);
int evenOrOdd(int num);
int primeNum(int num);
int largestNum(int num1,int num2);
int factorialNum(int num);
int armstrongAndPerfectNum(int num);
int decimalToBinary(int num);

int main(){
    // ----- 1 -----
    // int num1,num2;
    // printf("iki sayi giriniz: ");
    // scanf("%d%d",&num1,&num2);
    // sumFunction(num1,num2);
    // ----- 2 -----
    // int num;
    // printf("sayi giriniz: ");
    // scanf("%d",&num);
    // squareNum(num);
    // ----- 3 -----
    // int num1,num2;
    // printf("degerleri degistirilecek iki sayi giriniz\n");
    // printf("a:");
    // scanf("%d",&num1);
    // printf("b:");
    // scanf("%d",&num2);
    // printf("------\n");
    // swapNum(num1,num2);
    // ----- 4 -----
    // int num;
    // printf("sayi giriniz: ");
    // scanf("%d",&num);
    // evenOrOdd(num);
    // ----- 5 -----
    // int num;
    // printf("sayi giriniz: ");
    // scanf("%d",&num);
    // primeNum(num);
    // ----- 6 -----
    // int num1,num2;
    // printf("iki sayi giriniz: ");
    // scanf("%d%d",&num1,&num2);
    // largestNum(num1,num2);
    // ----- 7 -----
    // int num;
    // printf("sayi giriniz: ");
    // scanf("%d",&num);
    // factorialNum(num);
    // ----- 8 -----
    // int num;
    // printf("sayi giriniz: ");
    // scanf("%d",&num);
    // armstrongAndPerfectNum(num);
    // ----- 9 -----
    // int num;
    // printf("sayi giriniz: ");
    // scanf("%d",&num);
    // decimalToBinary(num);

    return 0;
}

int decimalToBinary(int num){
    int binaryNum[32];
    int i = 0;
    while (num > 0) {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    return 0;
}

int armstrongAndPerfectNum(int num){
    int sum = 0, temp = num, remainder, digits = 0;

    // Basamak sayisini bul
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Armstrong kontrolü
    while (temp != 0) {
        remainder = temp % 10;
        // DUZELTME: pow sonucunu round() ile yuvarliyoruz
        sum += round(pow(remainder, digits)); 
        temp = temp / 10;
    }

    if (num == sum) {
        printf("%d sayisi Armstrong sayisidir\n", num);
    } else {
        printf("%d sayisi Armstrong sayisi degildir\n", num);
    }

    // Mukemmel sayi kontrolü
    sum = 0; // Toplami sifirla
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d sayisi Mukemmel sayisidir\n", num);
    } else {
        printf("%d sayisi Mukemmel sayi degildir\n", num);
    }

    return 0;
}

int factorialNum(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return printf("%d sayisinin faktoriyeli = %d",num,fact);
}

int largestNum(int num1,int num2){
    if (num1 > num2)
        return printf("buyuk sayi: %d",num1);
    else if (num2 > num1)
        return printf("buyuk sayi: %d",num2);
    else
        return printf("sayilar esit");
}

int primeNum(int num){
    int counter = 1; // initialize
    int i;

    if (num <= 1) { // 0 and 1 are not prime
        return printf("%d sayisi asal degildir", num);
    }

    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            counter = 0;
            break;
        }
    }

    if (counter != 1)
    {
        return printf("%d sayisi asal degildir", num);
    }
    else
    {
       return printf("%d sayisi asaldir", num);
    }
}

int evenOrOdd(int num){
    if (num % 2 == 0)
        return printf("%d sayisi cift",num);
    else 
        return printf("%d sayisi tek",num);
}

int swapNum(int num1,int num2){
    int swapCounter;
    swapCounter = num1;
    num1 = num2;
    num2 = swapCounter;
    return printf("a:%d\nb:%d\n",num1,num2);
}

int squareNum(int num){
    int sqr;
    sqr = num*num;
    return printf("sayinin karesi = %d",sqr);
}

int sumFunction(int num1,int num2){
    int sum;
    sum = num1+num2;
    return printf("toplam = %d",sum);
}