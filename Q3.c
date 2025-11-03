#include<stdio.h>

void EvenFactorial(int iNo)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iNo;i++)
    {
        if(iCnt%2==0)
        {
            iSum = iSum * iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number in USD");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial is %d",iRet);

    return 0;
}