#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter any value\n");
    scanf("%d",&a);
    a=a%10;
    printf("The unit value of a is %d",a);
    getch();
    return 0;
}