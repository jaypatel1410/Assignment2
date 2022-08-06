#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the numbers you want to swap\n");
    scanf("%d\n%d",&a,&b);
    printf("The numbers before swapping are a=%d and b=%d\n",a,b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("The swapped numbers are a=%d and b=%d",a,b);
    getch();
    return 0;
}