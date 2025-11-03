#include<stdio.h>

void Display(int iNo)
{
    int iAns=0;
    iAns = iNo*70;

    return iAns;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number in USD");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}