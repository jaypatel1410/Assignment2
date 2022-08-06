#include<stdio.h>
#include<conio.h>
int main()
{
    float INR,USD;
    printf("Enter The INR amount : ");
    scanf("%f",&INR);
    USD=INR/76.23;
    printf("The USD amount is %f $",USD);
    getch();
    return 0;
}