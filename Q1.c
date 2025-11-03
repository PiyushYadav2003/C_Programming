#include<stdio.h>

void PrintEven(int iNo)
{
    
    if(iNo<=0)
        return;

    for(int i=0;i<7;i++)
    {
        if(iNo%2==0)
        {
             printf("%d",iNo);
        }   
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}