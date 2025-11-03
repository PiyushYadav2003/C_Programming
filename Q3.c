#include<stdio.h>

int RangeDisplay(int iNo1,int iNo2)
{
    int iCnt=0,iSum=0;

    if(iNo1>iNo2)
    {
        for(iCnt=iNo1;iCnt<iNo2;iCnt++)
        {
            iSum=iSum+iCnt;
        }
    }
    else
    {
        printf("\nInvali input");
    }

    return iSum;
}

int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter Starting Point");
    scanf("%d",&iValue1);
    printf("Enter End Point");
    scanf("%d",&iValue2);

    iRet = RangeDisplay(iValue1,iValue2);

    return 0;

}