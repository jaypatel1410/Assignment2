#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Enter any single digit\n");
    scanf("%d",&b);
    a=a*10;
    b=a+b;
    printf("The new number with its last digit added is \n%d",b); 
    getch();
    return 0;
}