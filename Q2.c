#include<stdio.h>

float C(float iWidth,float iHeight)
{
    float ans;
    ans = iWidth*iHeight;

    return ans;
}

int main()
{
    float fValue1,fValue2 = 0.0;
    float dRet=0.0;

    printf("Enter Height and width");
    scanf("%f%f",&fValue1,&fValue2);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %f",dRet);

    return 0;
}