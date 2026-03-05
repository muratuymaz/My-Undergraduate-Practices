#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    // ----- 1 ------
    // char str[100];
    // printf("Enter a string: ");
    // gets(str);
    // printf("You entered: %s\n", str);

    // ----- 2 ------
    // char str1[100];
    // int count = 0;
    // printf("Enter a string: ");
    // gets(str1);
    // while (str1[count] != '\0')
    // {
    //     ++count;
    // }
    // printf("Length of the string is: %d\n", count+1);
    
    // ----- 3 ------
    // char str[100];
    // printf("Enter a string: ");
    // gets(str);
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     printf("%c ", str[i]);
    // }
    
    // ----- 4 ------
    // char str[100];
    // printf("Enter a string: ");
    // gets(str);
    // for(int i = strlen(str) - 1; i >= 0; i--){
    //     printf("%c ", str[i]);
    // }

    // ----- 5 ------
    // char str[100];
    // printf("Enter a string: ");
    // gets(str);
    // int i = 0, count = 0;
    // while (str[i] != '\0')
    // {
    //     if(str[i] == ' '){
    //         count++;   
    //     }
    //     i++;
    // }
    // printf("Number of words in the string is: %d\n", count + 1);

    // ----- 6 ------
    // char str1[100], str2[100];
    // printf("Enter first string: ");
    // gets(str1);
    // printf("Enter second string: ");
    // gets(str2);
    // int count = 0;
    // if (strlen(str1) != strlen(str2))
    // {
    //     printf("The strings are not equal.\n");
    //     return 0;
    // }
    // for (int i = 0; i < strlen(str1); i++)
    // {
    //     if (str1[i] != str2[i])
    //     {
    //         count = 1;
    //         if (count == 1)
    //         {
    //             printf("The strings are not equal.\n");
    //             break;
    //         }
    //     }
    // }
    // if (count == 0)
    // {
    //     printf("The strings are equal.\n");
    // }

    // ----- 7 ------
    // char str[100];
    // printf("Enter a string: ");
    // gets(str);
    // int alphabets = 0, digits = 0, specialChars = 0;
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     if (isalpha(str[i]))
    //     {
    //         alphabets++;
    //     }
    //     else if (isdigit(str[i]))
    //     {
    //         digits++;
    //     }
    //     else
    //     {
    //         specialChars++;
    //     }
    // }
    // printf("Alphabets: %d\n", alphabets);
    // printf("Digits: %d\n", digits);
    // printf("Special Characters: %d\n", specialChars);

    // ----- 8 ------
    // char str[100];
    // printf("Enter a string: ");
    // gets(str);
    // char strcopy[100];
    // strcpy(strcopy, str);
    // printf("Copied string: %s\n", strcopy);

    // ----- 9 ------
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);
    if (isupper(chr))
    {
        printf("The character is uppercase.\n");
    }
    else if (islower(chr))
    {
        printf("The character is lowercase.\n");
    }
    else
    {
        printf("The character is not an alphabet.\n");
    }
    
    return 0;
}