#include<stdio.h>

void CheckLeap(int year)
{
    if((year%4==0 && year%100!=0) || (year%400==0))
        printf("%d is a leap year",&year);
    else
        printf("%d is not a leap year",&year);
}

int main()
{
    int yr;

    printf("Enter a year")
    scanf("%d",&yr);

    CheckLeap(yr);

    return 0;
}