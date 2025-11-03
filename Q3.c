#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit=0,cnt=0;

    if(iNo<0)
        iNo = -iNo;

        while(iNo>0)
        {
            iDigit=iNo%10;
            if(iDigit>3 && iDigit<7)
                cnt++;
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

    iRet = CountEven(ivalue);

    printf("%d",iRet)

    return 0;
}