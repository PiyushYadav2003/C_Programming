#include<stdio.h>

int Multiply(int a,int b,int c)
{
    int ans=0;

    if(a==0||b==0||c==0)
        printf("Zero as a input is not allowed");
    else
        return a*b*c;
}

int main()
{
    int iValue1,iValue2,iValue3;
    int ans,flag=1;

    printf("Enter two  number");
    scanf(" %d%d%d",&iValue1,&iValue2,iValue3);

    ans= ChkEqual(iValue1,iValue2,iValue3);

    if(flag==1)
        printf("Multiplication if three number is %d",ans);
    else
        printf("Program End");

    return 0;
}