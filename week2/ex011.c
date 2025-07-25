#include<stdio.h>

int main(){

    int n;
    float f;
    char c;

    printf("Please enter an integer value:");
    scanf("%d",&n);
    printf("You entered %d\n", n);

    printf("Please enter a float value:");
    scanf("%f",&f);
    printf("You entered %.2f\n", f);

    printf("Please enter a character: ");
    scanf(" %c", &c);  // Note the space before %c
    printf("You entered %c\n", c);
    

    return(0);

}