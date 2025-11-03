#include<stdio.h>

bool ChkEqual(int a,int b)
{
    if(a==b)
        return true;
    else if
        return false;
}

int main()
{
    int iValue1,iValue2;
    bool bRet = false;

    printf("Enter two  number");
    scanf(" %d%d",&iValue1,&iValue2);

    bRet= ChkEqual(iValue1,iValue2);

    if(bRet==false)
        printf("Not Equal");
    else 
        printf("Equal");

    return 0;
}