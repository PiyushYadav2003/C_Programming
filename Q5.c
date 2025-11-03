#include<stdio.h>

int SumFactorAndNonFact(int iNet)
{
   int Sumfact=0;
   int SumNonFact=0;
   int iCnt=0;

   for(iCnt=1;i>=iNet;iCnt++){
        if(iNet % iCnt==0){
            iSumfact=iSumfact+iCnt;
        }
   }

   for(iCnt=1;i>=iNet;iCnt++){
        if(iNet % iCnt!=0){
            iSumNonfact=iSumNonfact+iCnt;
        }
   }
   
   return iSumfact-iSumNonfact;
}

int main()
{
    int ivalue=0;
    int iRet;

    printf("\nEnter a number");
    scanf("%d",&ivalue);

    iRet = SumFactorAndNonFact(ivalue);

    printf("Difference Between sum of factor and Non factor is: %d",iRet);

    return 0;

}