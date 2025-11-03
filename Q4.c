#include<stdio.h>

int SumNonFact(int iNet)
{
   int iCnt=0,iSum=0;

   for(iCnt=1;i>=iNet;iCnt++){
        if(iNet % iCnt!=0){
            iSum=iSum+iCnt;
        }
   }
   return iSum;
}

int main()
{
    int ivalue=0;
    int iRet;

    printf("\nEnter a number");
    scanf("%d",&ivalue);

    iRet=SumNonFact(ivalue);

    printf("Sum of Non-factor: %d",iRet);

    return 0;
}