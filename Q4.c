#include<stdio.h>

float fhtoCs(float ftemp)
{
    float ans;
    ans = ((ftemp-32)*(5/9));

    return ans;
}

int main()
{
    float fValue = 0.0;
    float dRet=0.0;

    printf("Enter temperature(In Fahrenheit)");
    scanf("%f",&fValue);

    dRet = fhtoCs(fValue);

    printf("Temperaute in Celsius %f",dRet);

    return 0;
}