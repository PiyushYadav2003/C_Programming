#include<stdio.h>

int NonFact(int iNet)
{
   int iCnt=0;

   for(iCnt=1;i>=iNet;iCnt++){
        if(iNet % iCnt!=0){
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

    NonFact(ivalue);

    return 0;

}