#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // Matris eleman alma
    // int rows = 0, cols = 0;
    // printf("matrisin boyutlarini giriniz (satir sutun): ");
    // scanf("%d %d", &rows, &cols);
    // int matris[rows][cols];
    // printf("Matris elemanlarini giriniz (%dx%d):\n", rows, cols);
    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols; j++){
    //         printf("Eleman [%d][%d]: ", i, j);
    //         scanf("%d", &matris[i][j]);
    //     }
    // }
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", matris[i][j]);
    //     }
    //     printf("\n");
    // }

    // Matris toplama
    // int rows = 0, cols = 0;
    // printf("Matrislerin boyutlarini giriniz (satir sutun): ");
    // scanf("%d %d", &rows, &cols);
    // int matris1[rows][cols];
    // int matris2[rows][cols];
    // int toplam[rows][cols];
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         matris1[i][j] = rand() % 10;
    //         matris2[i][j] = rand() % 10;
    //     }
    // }
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         toplam[i][j] = matris1[i][j] + matris2[i][j];
    //     }
    // }
    // printf("Matris 1:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", matris1[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Matris 2:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", matris2[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Toplam Matris:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", toplam[i][j]);
    //     }
    //     printf("\n");
    // }

    // Matris Subtraction
    // int rows = 0, cols = 0;
    // printf("Matrislerin boyutlarini giriniz (satir sutun): ");
    // scanf("%d %d", &rows, &cols);
    // int matris1[rows][cols];
    // int matris2[rows][cols];
    // int fark[rows][cols];
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         matris1[i][j] = rand() % 10;
    //         matris2[i][j] = rand() % 10;
    //     }
    // }
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         fark[i][j] = matris1[i][j] - matris2[i][j];
    //     }
    // }
    // printf("Matris 1:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", matris1[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Matris 2:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", matris2[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Fark Matris:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", fark[i][j]);
    //     }
    //     printf("\n");
    // }

    // Matris Multiplication
    // int rows1 = 0, cols1 = 0;
    // int rows2 = 0, cols2 = 0;
    // printf("Ilk matrisin boyutlarini giriniz (satir sutun): ");
    // scanf("%d %d", &rows1, &cols1);
    // printf("Ikinci matrisin boyutlarini giriniz (satir sutun): ");
    // scanf("%d %d", &rows2, &cols2);
    // if (cols1 != rows2) {
    //     printf("Matris carpimi icin ilk matrisin sutun sayisi ikinci matrisin satir sayisina esit olmalidir.\n");
    //     return 1;
    // }
    // int matris1[rows1][cols1];
    // int matris2[rows2][cols2];
    // int carpim[rows1][cols2];
    // for (int i = 0; i < rows1; i++)
    // {
    //     for (int j = 0; j < cols1; j++)
    //     {
    //         matris1[i][j] = rand() % 10;
    //     }
    // }
    // for (int i = 0; i < rows2; i++)
    // {
    //     for (int j = 0; j < cols2; j++)
    //     {
    //         matris2[i][j] = rand() % 10;
    //     }
    // }
    // for (int i = 0; i < rows1; i++)
    // {
    //     for (int j = 0; j < cols2; j++)
    //     {
    //         carpim[i][j] = 0;
    //         for (int k = 0; k < cols1; k++)
    //         {
    //             carpim[i][j] += matris1[i][k] * matris2[k][j];
    //         }
    //     }
    // }
    // printf("Matris 1:\n");
    // for (int i = 0; i < rows1; i++)
    // {
    //     for (int j = 0; j < cols1; j++)
    //     {
    //         printf("%d ", matris1[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Matris 2:\n");
    // for (int i = 0; i < rows2; i++)
    // {
    //     for (int j = 0; j < cols2; j++)
    //     {
    //         printf("%d ", matris2[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Carpim Matrisi:\n");
    // for (int i = 0; i < rows1; i++)
    // {
    //     for (int j = 0; j < cols2; j++)
    //     {
    //         printf("%d ", carpim[i][j]);
    //     }
    //     printf("\n");
    // }

    // Matris Transpose
    // int rows = 0, cols = 0;
    // printf("Matrisin boyutlarini giriniz (satir sutun): ");
    // scanf("%d %d", &rows, &cols);
    // int matris[rows][cols];
    // int transpoze[cols][rows];
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         matris[i][j] = rand() % 10;
    //     }
    // }
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         transpoze[j][i] = matris[i][j];
    //     }
    // }
    // printf("Matris:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", matris[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Transpoze Matris:\n");
    // for (int i = 0; i < cols; i++)
    // {
    //     for (int j = 0; j < rows; j++)
    //     {
    //         printf("%d ", transpoze[i][j]);
    //     }
    //     printf("\n");
    // }

    // Matris sum right diagonal
    // int size = 0;
    // printf("Kare matrisin boyutunu giriniz: ");
    // scanf("%d", &size);
    // int matris[size][size];
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         matris[i][j] = rand() % 10;
    //     }
    // }
    // int sum = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     sum += matris[i][size - 1 - i];
    // }
    // printf("Matris:\n");
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         printf("%d ", matris[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Sag capraz elemanlar toplami: %d\n", sum);
    // Matris sum left diagonal
    // int size = 0;
    // printf("Kare matrisin boyutunu giriniz: ");
    // scanf("%d", &size);
    // int matris[size][size];
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         matris[i][j] = rand() % 10;
    //     }
    // }
    // int sum = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     sum += matris[i][i];
    // }
    // printf("Matris:\n");
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         printf("%d ", matris[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Sag capraz elemanlar toplami: %d\n", sum);
    
    //Matris lower triangular
    // int size = 0;
    // printf("Kare matrisin boyutunu giriniz: ");
    // scanf("%d", &size);
    // int matris[size][size];
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         matris[i][j] = rand() % 10;
    //     }
    // }
    // printf("Alt ucgen matris:\n");
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (j <= i)
    //             printf("%d ", matris[i][j]);
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // } 

    //Matris upper triangular
    // int size = 0;
    // printf("Kare matrisin boyutunu giriniz: ");
    // scanf("%d", &size);
    // int matris[size][size];
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         matris[i][j] = rand() % 10;
    //     }
    // }
    // printf("Ust ucgen matris:\n");
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (j > i)
    //             printf(" ");
    //         else
    //             printf("%d ", matris[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}