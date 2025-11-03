#include<stdio.h>

void factor(int number)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<number;i++)
    {
        if(number%iCnt==0)
        {
            if(number%2==0)
            {
                iSum=iSum=iCnt;
            }
        }
    }
    printf("Sum of Even factor of %d is %d",number,iSum);

}

int main()
{
    int number;

    printf("Enter a number");
    scanf("%d",&number);

    factor(number);

    return 0;
}