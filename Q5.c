#include<stdio.h>

double SquareMeter(float iNo)
{
    int ans;
    ans = iNo*0.0929;

    return ans;
}

int main()
{
    float fValue = 0.0;
    double dRet=0.0;

    printf("Enter area in Square feet");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Area in Square Meter is %d",dRet);

    return 0;
}