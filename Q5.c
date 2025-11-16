#include<stdio.h>

int CountEven(int Arr[],int ilenght,int iNo = 0)
{
    int Count = 0,iCnt = 0;

    for(iCnt = 0; iCnt< ilength; iCnt++)
    {
        if(Arr[iCnt] % iNo == 0)
            Count++;
    }
   
    return Count;
}


int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iLength = 0,iValue = 0;
    int *p = NULL;

    printf("\nEnter number of elements");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memery")
        return -1;
    }

    printf("\nEnter %d elemnts",iLength);

    for(iCnt = 0;iCnt <iLenght; iCnt++)
    {
        printf("Enter Elements: %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("\nEnter the number you want to search");
    scanf("%d",&iValue);

    iRet = CountEven(p,iSize,iValue);

    if(iRet >= 1)
        printf("%d is present",iValue);
    else
        printf("%d is not present",iValue);

    printf("\nResult : %d",iRet);

    free(p);

    return 0;
}