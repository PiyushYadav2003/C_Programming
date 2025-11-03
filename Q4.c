#include<stdio.h>

void OddFactorial(int iNo)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iNo;i++)
    {
        if(iCnt%2!=0)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial is %d",iRet);

    return 0;
}