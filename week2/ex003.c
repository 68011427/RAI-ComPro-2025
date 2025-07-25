#include <stdio.h>

int main() {
    char name[30];
    int age;
    float height;
    int weight;
    char gender;
    char education[30];

    printf("Enter your Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your weight: ");
    scanf("%d", &weight);

    printf("Enter your gender: ");
    scanf(" %c", &gender); // Note the space before %c

    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]s", education);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Height: %.1f\n", height);
    printf("Weight: %d\n", weight);
    printf("Education: %s\n", education);

    return 0;

}