#include<stdio.h>

int RangeSumEven(int iNo1,int iNo2)
{
    int iCnt=0,iSum=0;

    if(iNo1>iNo2)
    {
        for(iCnt=iNo1;iCnt<iNo2;iCnt++)
        {
            if(iCnt%2==0)
                iSum=iSum*iCnt;
        }
    }
    return iSum;   
}

int main()
{
    int iValue1=0,iValue2=0;
    iRet=0;

    printf("Enter Starting Point");
    scanf("%d",&iValue1);
    printf("Enter End Point");
    scanf("%d",&iValue2);

    iRet = RangeEvenSum(iValue1,iValue2);

    printf("Addition of Even number is %d",iRet);

    return 0;

}