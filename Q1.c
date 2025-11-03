#include<stdio.h>

void factor(int number)
{
    int iCnt=0;

    for(iCnt=0;iCnt<number;i++)
    {
        if(number%iCnt==0)
            printf("%d",iCnt);
    }
}

int main()
{
    int number;

    printf("Enter a number");
    scanf("%d",&number);

    factor(number);

    return 0;
}