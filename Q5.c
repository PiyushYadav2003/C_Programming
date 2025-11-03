#include<stdio.h>

float Percentage(int a,int b)
{
    int ans;
    ans = (a/b)*100;

    return ans;
}

int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;

    printf("Enter total marks");
    scanf(" %d",&iValue1);

    printf("Enter marks obtain");
    scanf(" %d",&iValue2);
    
    fRet = Percentage(iValue1,iValue2);

    printf("%d");

    return 0;
}