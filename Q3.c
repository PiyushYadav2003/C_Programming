#include<stdio.h>

void factor(int number)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<number;i++)
    {
        if(number%iCnt==0)
        {
            iSum=iSum=iCnt;
        }
    }
    return iSum;
}

int main()
{
    int number;
    int iRet=0;

    printf("Enter a number");
    scanf("%d",&number);

    iRet = factor(number);

    printf("Sum factor of %d is %d",number,iRet);

    return 0;
}