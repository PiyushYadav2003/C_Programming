#include<stdio.h>

int Multi(int iNo)
{
    int iDigit=0,multi=1;

    if(iNo<0)
        iNo = -iNo;

        while(iNo>0)
        {
            iDigit=iNo%10;
            multi=multi*iDigit;
            iDigit=iNo/10;
        }
        return cnt++;
}

int main()
{
    int ivalue=0;
    int iRet=0;

    printf("Enter a number");
    scanf("%d",ivalue);

    iRet = Multi(ivalue);

    printf("%d",iRet)

    return 0;
}