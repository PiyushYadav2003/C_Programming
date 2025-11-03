#include<stdio.h>

float KMtoMeter(float iNo)
{
    float ans;
    ans=iNo*1000;

    return ans;
}

int main()
{
    float fValue = 0.0;
    float dRet=0.0;

    printf("Enter distance in kilometre");
    scanf("%f",&fValue);

    dRet = KMtoMeter(fValue);

    printf("Distance in metter is %f",dRet);

    return 0;
}