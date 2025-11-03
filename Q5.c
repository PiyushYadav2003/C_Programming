#include<stdio.h>

int CountDiffer(int iNo)
{
    int iDigit=0,Ecnt=0,Ocnt=0,ans=0;

    if(iNo<0)
        iNo = -iNo;

        while(iNo>0)
        {
            iDigit=iNo%10;
            if(iDigit%2==0)
                Ecnt++;
            else
                Ocnt++;
            iDigit=iNo/10;
        }
        ans=Ecnt-Ocnt;
        return ans;
}

int main()
{
    int ivalue=0;
    int iRet=0;

    printf("Enter a number");
    scanf("%d",ivalue);

    iRet = CountDiffer(ivalue);

    printf("%d",iRet)

    return 0;
}