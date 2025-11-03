#include<stdio.h>

int MultiFact(int iNet)
{
    int iSum=0;
    int i;

    for(i=0;i<=iNet;i++)
    {
        if(iNet%i==0)
        {
            iSum=iSum*i;
        }
    }

    return iSum;
}

int main()
{
    int ivalue=0;
    int iRet;

    printf("\nEnter a number");
    scanf("%d",&ivalue);

    iRet = MultiFact(ivalue);
    printf("%d",iRet);

    return 0;

}