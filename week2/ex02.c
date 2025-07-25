#include<stdio.h>

int main(){
int a;

printf("Enter total minutes:");
scanf("%d", &a); 

int hour = a/60;
int min = a%60;

printf("%d minutes is %dhour and %d minutes\n",a,hour,min);


return(0);


}