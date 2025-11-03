#include<stdio.h>

bool ChlVowel(char ich)
{
    if(ich=="A"||ch=="a"||ich=="U"||ch=="u"||ich=="I"||ch=="i"||ich=="E"||ch=="e"||ich=="O"||ch=="o"||)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char iValue;
    bool bRet= false;

    printf("Enter a number");
    scanf("%c",&iValue);

    bRet = (iValue);

    if(bRet==true)
        printf("True");
    else
        printf("False");

    return 0;
}