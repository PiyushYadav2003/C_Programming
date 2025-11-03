#include<stdio.h>

void DisplayFactor(int iNo)
{
    
    for(int i=0;i<iNo;i++)
    {
        if(iNo%i==0)
        {
            printf("%d",i);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}