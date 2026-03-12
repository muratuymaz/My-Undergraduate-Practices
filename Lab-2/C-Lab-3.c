#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char name[50];
    int studentAge;
    float grade;
} StudentInfo;

typedef struct {
    int timeHours;
    int timeMinutes;
    int timeSeconds;
} Time;

typedef struct {
    char bookName[50];
    char author[50];
    float price;
} BookManagement;

int main(){

    // ------ 1 ------
    // StudentInfo student1, student2;
    // printf("Enter name: ");
    // scanf("%s", &student1.name);
    // printf("Enter student age: ");
    // scanf("%d", &student1.studentAge);
    // printf("Enter grade: ");
    // scanf("%f", &student1.grade);

    // printf("Enter name: ");
    // scanf("%s", &student2.name);
    // printf("Enter student age: ");
    // scanf("%d", &student2.studentAge);
    // printf("Enter grade: ");
    // scanf("%f", &student2.grade);

    // float mean;
    // mean = (student1.grade + student2.grade)/2;

    // printf("%s:\n", student1.name);
    // printf("Age: %d\n",student1.studentAge);
    // printf("Grade: %.2f\n",student1.grade);

    // printf("%s:\n", student2.name);
    // printf("Age: %d\n",student2.studentAge);
    // printf("Grade: %.2f\n",student2.grade);

    // printf("Mean: %.4f\n",mean);

    // ------ 2 ------
    // Time time1, time2, result;
    // printf("Enter time (hours minutes seconds): ");
    // scanf("%d %d %d", &time1.timeHours, &time1.timeMinutes, &time1.timeSeconds);
    // printf("Enter time (hours minutes seconds): ");
    // scanf("%d %d %d", &time2.timeHours, &time2.timeMinutes, &time2.timeSeconds);
    
    // result.timeSeconds = (time1.timeSeconds + time2.timeSeconds)%60;
    // result.timeMinutes = (((time1.timeSeconds+time2.timeSeconds)/60)+(time1.timeMinutes+time2.timeMinutes))%60;
    // result.timeHours = ((time1.timeHours+time2.timeHours)+(time1.timeSeconds+time2.timeSeconds)/3600+(time1.timeMinutes+time2.timeMinutes)/60)%24;

    // printf("%d:%d:%d",result.timeHours, result.timeMinutes, result.timeSeconds);

    // ------ 3 -------
    // BookManagement book1, book2, book3;

    // printf("Enter first book name, author and price: ");
    // scanf("%s%s%f",&book1.bookName,&book1.author,&book1.price);
    
    // printf("Enter second book name, author and price: ");
    // scanf("%s%s%f",&book2.bookName,&book2.author,&book2.price);
    
    // printf("Enter third book name, author and price: ");
    // scanf("%s%s%f",&book3.bookName,&book3.author,&book3.price);
    
    // BookManagement max;
    // if (book1.price >= book2.price && book1.price >= book3.price) {
    //     max = book1;
    // } else if (book2.price >= book1.price && book2.price >= book3.price) {
    //     max = book2;
    // } else {
    //     max = book3;
    // }
    
    // BookManagement min;
    // if (book1.price <= book2.price && book1.price <= book3.price) {
    //     min = book1;
    // } else if (book2.price <= book1.price && book2.price <= book3.price) {
    //     min = book2;
    // } else {
    //     min = book3;
    // }

    // printf("\nMax price:\n");
    // printf("Title: %s\n", max.bookName);
    // printf("Author: %s\n", max.author);
    // printf("Price: %.2f\n", max.price);
    
    // printf("\nMin price:\n");
    // printf("Title: %s\n", min.bookName);
    // printf("Author: %s\n", min.author);
    // printf("Price: %.2f\n", min.price);

    return 0;
}