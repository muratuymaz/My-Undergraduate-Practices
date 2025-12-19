#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    // ------ Örnek 1 ------
    
    // int n;
    // printf("kac tane elemanli dizi olusturmak istiyorsunuz? ");
    // scanf("%d", &n);

    // int myArr[n];

    // for (int i = 0; i < n; i++) {
    //     printf("Dizinin %d. elemanini giriniz: ", i + 1);
    //     scanf("%d", &myArr[i]);
    // }

    // printf("Dizinin elemanlari: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", myArr[i]);
    // }

    // ------ Örnek 2 ------
    
    // int n;
    // printf("kac tane elemanli dizi olusturmak istiyorsunuz? ");
    // scanf("%d", &n);
    // int myArr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Dizinin %d. elemanini giriniz: ", i + 1);
    //     scanf("%d", &myArr[i]);
    // }
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     printf("%d.terim %d \n", i + 1, myArr[i]);
    // }
    
    // ------ Örnek 3 ------
    
    // int n;
    // printf("kac tane elemanli dizi olusturmak istiyorsunuz? ");
    // scanf("%d", &n);
    // int myArr[n];
    // int toplam = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Dizinin %d. elemanini giriniz: ", i + 1);
    //     scanf("%d", &myArr[i]);
    //     toplam += myArr[i];
    // }

    // printf("Dizinin elemanlari: ");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", myArr[i]);
    // }
    // printf("\nToplam: %d", toplam);

    // ----- Örnek 4 ------

    // int n;
    // printf("kac tane elemanli dizi olusturmak istiyorsunuz? ");
    // scanf("%d", &n);

    // int myArr[n],myArr2[n];

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Dizinin %d. elemanini giriniz: ", i + 1);
    //     scanf("%d", &myArr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     myArr2[i]=myArr[i];
    //     printf("2.dizi %d. eleman: %d\n", i + 1, myArr2[i]);
    // }
    
    // ----- Örnek 5 ------

    // int n;
    // srand(time(NULL));
    // printf("kac tane elemanli dizi olusturmak istiyorsunuz? ");
    // scanf("%d", &n);
    // int myArr[n],count[n];
    // for (int i = 0; i < n; i++)
    // {
    //     count[i] = 0;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     myArr[i] = rand() % 100;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (myArr[i] == myArr[j])
    //         {
    //             count[i]++;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Dizinin %d. eleman: %d, tekrar sayisi: %d\n", i + 1, myArr[i], count[i]);
    // }

    // ----- Örnek 6 ------

    // int n, max, min;
    // srand(time(NULL));
    // printf("kac tane elemanli dizi olusturmak istiyorsunuz? ");
    // scanf("%d", &n);
    // int myArr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     myArr[i] = rand() % 10 + 1;
    //     printf("Dizinin %d. eleman: %d\n", i + 1, myArr[i]);
    // }

    // // Initialize max and min to the first element
    // max = myArr[0];
    // min = myArr[0];

    // for (int i = 1; i < n; i++)
    // {
    //     if (myArr[i] > max)
    //     {
    //         max = myArr[i];
    //     }
    //     if (myArr[i] < min)
    //     {
    //         min = myArr[i];
    //     }
    // }
    // printf("Dizinin en buyuk elemani: %d\n", max);
    // printf("Dizinin en kucuk elemani: %d\n", min);

    // ---- Örnek 7 ------

    // int n=0;
    // int oddCount = 0, evenCount = 0;
    // srand(time(NULL));
    // printf("kac tane elemanli dizi olusturmak istiyorsunuz? ");
    // scanf("%d", &n);
    // int myArr[n], odd[n], even[n];
    // for (int i = 0; i < n; i++)
    // {
    //     myArr[i] = rand() % 100 + 1;
    //     printf("Dizinin %d. eleman: %d\n", i + 1, myArr[i]);
    //     if (myArr[i] % 2 == 0)
    //     {
    //         even[evenCount] = myArr[i];
    //         evenCount++;
    //     }
    //     else
    //     {
    //         odd[oddCount] = myArr[i];
    //         oddCount++;
    //     }
    // }
    // printf("Cift sayilar: ");
    // for (int i = 0; i < evenCount; i++)
    // {
    //     printf("%d ", even[i]);
    // }
    // printf("\nTek sayilar: ");
    // for (int i = 0; i < oddCount; i++)
    // {
    //     printf("%d ", odd[i]);
    // }

    // ---- Örnek 8 ------

    // int n;
    // srand(time(NULL));
    // printf("kac tane elemanli dizi olusturmak istiyorsunuz? ");
    // scanf("%d", &n);
    // int myArr[n],count[n];
    // for (int i = 0; i < n; i++)
    // {
    //     count[i] = 0;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     myArr[i] = rand() % 10 + 1;
    //     printf("Dizinin %d. eleman: %d\n", i + 1, myArr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //         {
    //             break;
    //         }
    //         if (myArr[i] == myArr[j])
    //         {
    //             if (i == j)
    //             {
    //                 count[i]++;
                    
    //             }
    //             else{
    //                 count[i] = 0;
    //                 break;
    //             }
    //         }
    //         else
    //         {
    //             count[i]++;
    //         }
    //     }
    // }
    // int uniqueCount = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (count[i] == 0)
    //     {
    //         uniqueCount++;
    //     }
    // }
    // printf("Benzersiz eleman sayisi: %d\n", uniqueCount);

    return 0;
}