#include<stdio.h>

void factor(int number)
{
    int iCnt=0,iCounter;

    for(iCnt=0;iCnt<number;i++)
    {
        if(number%iCnt==0)
        {
            iCounter++;
        }
    }
    return iCounter;
}

int main()
{
    int number;
    int iRet=0;

    printf("Enter a number");
    scanf("%d",&number);

    iRet = factor(number);

    printf("Total factor of %d is %d",number,iRet);

    return 0;
}