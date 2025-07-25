#include <stdio.h>

/*
Enter your full name: Poom Konghuyrob
Enter your age: 19
Enter your heght: 160.5
Enter you University name: KMITL
Hi! Everyone. This is K.Poom from KMITL. I am 19 years old and my height is
160.5 cm tall.
*/

int main(){
    char fname[30];
    char lname[30];
    int age;
    float height;
    char univercity[30];

    printf("Enter your full name: ");
    scanf("%s %s" , fname , lname);

    printf("Enter your age: ");
    scanf("%d" , &age);

    printf("Enter your height: ");
    scanf("%f" , &height);

    printf("Enter you University name: ");
    scanf("%s" , univercity);

    printf("Hi! Everyone. This is K.%s from %s. I am %d years old and my height is %.2f cm tall." , fname , univercity , age , height);
}