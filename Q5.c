#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iNo;iCnt++)
    {
         iSum=iCnt*4;
         printf("%d\t",iSum)  
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}