#include <stdio.h>

/*
Enter integer #1: 4
Enter integer #2: -1
Enter integer #3: 10

Results:
Minimum: -1
Maximum: 10
Sum: 13
Average: 4.33
*/

int main(){
    int num1 , num2 , num3;
    int max , min , sum ;
    float avg;

    printf("Enter integer #1: ");
    scanf("%d" , &num1);
    printf("Enter integer #2: ");
    scanf("%d" , &num2);
    printf("Enter integer #3: ");
    scanf("%d" , &num3);

    if (num1 > num2 && num1 > num3){
        max = num1;
    }
    if (num2 > num1 && num2 > num3){
        max = num2;
    }
    if (num3 > num1 && num3 > num2){
        max = num3;
    }

    if (num1 < num2 && num1 < num3){
        min = num1;
    }
    if (num2 < num1 && num2 < num3){
        min = num2;
    }
    if (num3 < num1 && num3 < num1){
        min = num3;
    }

    sum = num1 + num2 + num3;
    avg = sum / 3.0;
    printf("Results: \nMinimum: %d \nMaximum: %d \nSum: %d \nAverage: %.2f" , min , max , sum , avg);

    return 0;
}