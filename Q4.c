#include<stdio.h>

void CheckNumberType(int num)
{
    if(num>0)
        printf("Possitive Number");
    else if(num==0)
        printf("Zero");
    else
        printf("Negative Number")
       
}

int main()
{
    int number;

    printf("Enter a number")
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}