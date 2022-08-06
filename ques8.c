#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Even");
    }
    if(a%2!=0) //we can also use else here 
    {
        printf("Odd");
    }
    //printf("%d",a);
    getch();
    return 0;
}