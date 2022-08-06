#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    a=a-(a%10);
    printf("The new number with its last digit as 0 is \n%d",a); 
    getch();
    return 0;
}