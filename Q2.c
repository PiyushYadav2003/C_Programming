#include<stdio.h>

bool ChkGreater(int iValue)
{
    if(no<100)
        return true;
    else 
        return false;
}

int main()
{
    int iValue;
    bool bRet = false;

    printf("Enter a  number");
    scanf(" %d",&iValue);

    bRet= ChkGreater(iValue);

    if(bRet==false)
        printf("Greater");
    else 
        printf("Samller");

    return 0;
}