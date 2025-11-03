#include<stdio.h>

int FactRev(int iNet)
{
   int iCnt=0;

   for(iCnt=iNet;i>=1;iCnt--){
        if(iNet % iCnt ==0){
            printf("%d ",iCnt);
        }
   }
   printf("\n");
}

int main()
{
    int ivalue=0;
    int iRet;

    printf("\nEnter a number");
    scanf("%d",&ivalue);

    FactRev(ivalue);

    return 0;

}