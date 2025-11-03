#include<stdio.h>

bool divisible_by_five(int number)
{
    if(number % 5 ==0)
        return true;
    else
        return false;   
}

int main()
{
    int number;
    bool bRet=false;

    printf("Enter a number");
    scanf("%d",&number);

    bRet = divisible_by_five(number);

    if(bRet==true)
        printf("%d is divisible by five",number);
    else
        printf("%d is not divisible by five",number);

    return 0;
}