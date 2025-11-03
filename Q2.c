#include<stdio.h>

bool DisplayDigit(int iNo)
{
    int iDigit=0,cnt=0;

    if(iNo<0)
        iNo = -iNo;

        while(iNo>0)
        {
            iDigit=iNo%10;
            if(iDigit==0)
                return true;
            iDigit=iNo/10;
        }
        return false;
}

int main()
{
    int ivalue=0;
    bool bRet=false;

    printf("Enter a number");
    scanf("%d",ivalue);

    bRet = DisplayDigit(ivalue);

    if(bRet==true)
        printf("It contain Zero");
    else
        printf("It does not contain Zero");

    return 0;
}