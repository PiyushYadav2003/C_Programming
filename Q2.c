#include<stdio.h>

int RangeDisplay(int iNo1,int iNo2)
{
    int iCnt=0;

    for(iCnt=iNo1;iCnt<iNo2;iCnt++)
    {
        if(iCnt%2==0)
            printf("%d ",iCnt);
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Starting Point");
    scanf("%d",&iValue1);
    printf("Enter End Point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;

}