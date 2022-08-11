#include<stdio.h>
#include<conio.h>
int main()
{
    int a,count=0;
    int result = 0;  
    printf("Enter any Number\n");
    scanf("%d",&a);
    while(a!=0)
    {
    result=a&1;
    count++;
    if(result == 1)
    {
        printf("%d",count);
        break;
    }
    a=a>>1;
    }
    getch();
    return 0;
}