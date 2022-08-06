#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    a=a-(a%10);
    a=a/10;
    printf("The entered number a without its last digit is %d",a);
    getch();
    return 0;
}