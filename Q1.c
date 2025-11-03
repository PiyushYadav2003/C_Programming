#include<stdio.h>

float CircleArea(float iRadius)
{
    float ans;
    ans = 3.14*iRadius*iRadius;

    return ans;
}

int main()
{
    float fValue = 0.0;
    float dRet=0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %f",dRet);

    return 0;
}