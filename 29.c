//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main (){
    int num, count, fact=1;
    printf("enter number: ");
    scanf("%d", &num);
    for(count=1; count<= num; count++)
    fact= fact*count;
    printf("%d",fact);
return 0;

}