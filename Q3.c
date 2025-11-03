#include<stdio.h>

void Factorial(int iNo)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        iSum=iSum*iCnt;
    }
    return iSum;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}