#include<stdio.h>

void Table(int iNo)
{
    int iCnt=0,iSum=0;

    for(iCnt=iNo;iCnt<0;iCnt++)
    {
        iSum=iNo*iCnt;
        printf("%d",iSum);
    }
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}