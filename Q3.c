#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    
    for(int i=0;i<iNo;i++)
    {
        if(iNo%i==0)
        {
            if(i%2==0)
            printf(i);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}