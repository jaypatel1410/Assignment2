#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a,b,c;
    printf("Enter a 3 digit number to get sum of individual digits\n");
    scanf("%d",&x);
    a=x/100;
    b=x%10;
    c=(x%100)/10;
    x=a+b+c;
    printf("Sum : %d",x);
    getch();
    return 0;
}