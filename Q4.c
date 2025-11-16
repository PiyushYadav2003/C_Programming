#include<stdio.h>

int Frequency(int Arr[],int ilenght)
{
    int Count = 0,iCnt = 0;

    for(iCnt = 0; iCnt< ilength; iCnt++)
    {
        if(Arr[iCnt] == 11)
            Count++;
    }

    return Count;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iLength = 0;
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

    iRet = Frequency(p,iSize);

    printf("\nResult : %d",iRet);

    free(p);

    return 0;
}