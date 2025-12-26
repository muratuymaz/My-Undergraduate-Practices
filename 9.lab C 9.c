#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // Matris eleman alma
    int rows = 0, cols = 0;
    printf("matrisin boyutlarini giriniz (satir sutun): ");
    scanf("%d %d", &rows, &cols);
    int matris[rows][cols];
    printf("Matris elemanlarini giriniz (%dx%d):\n", rows, cols);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Eleman [%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}