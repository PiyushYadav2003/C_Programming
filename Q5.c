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
    int iValue=0,iRet1=0,iRet2=0,ans;

    printf("Enter a number");
    scanf("%d",&iValue);

    iRet1 = EvenFactorial(iValue);
    iRet2 = OddFactorial(iValue);

    ans = iRet1-iRet2;

    printf("Difference Between Factorial is %d",ans);

    return 0;
}