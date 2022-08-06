#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter 3 digit number\n");
    scanf("%d",&a);
    a=a-(a%10);
    a=a/10;
    //a=a>>1;
    printf("The number after 1 shift is %d",a);
    getch();
    return 0;
}