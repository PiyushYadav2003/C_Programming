#include<stdio.h>

float Divide(int iNo1,int iNo2)
{
    float iAns;

    if(iNo2 == 0)
        return -1;
    
    iAns = iNo1/iNo2;

    return iAns;
    
}

int main()
{
    float iValue1 = 15, iValue2=5;
    float iRet;

    iRet= Divide(iValue1,iValue2);

    printf("Divide is %d",iRet);

    return 0;
}