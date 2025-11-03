#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit=0,cnt=0;

    if(iNo<0)
        iNo = -iNo;

        while(iNo>0)
        {
            iDigit=iNo%10;
            if(iDigit%4==0)
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

    iRet = CountTwo(ivalue);

    printf("%d",iRet)

    return 0;
}