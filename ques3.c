#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers you want to swap\n");
    scanf("%d\n%d",&a,&b);
    printf("The numbers before swapping are a=%d and b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("The swapped numbers are a=%d and b=%d",a,b);
    getch();
    return 0;
}