#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int Minimum(int Arr[],int iSize)
{
    int iCnt = 0,iMin = 0;  

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iLength = 0,iCnt = 0,iRet = 0;
    int *iPtr = NULL;

    printf("\nEnter the total number of elements");
    scanf("%d",&iLength);
    
    iPtr = (int*)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("\nUnable to allocate the memory");
        return -1;
    }

    printf("\nEnter the Element:\n");

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

        iRet = Minimum(iPtr,iLength);
    
    printf("\nMinimum number is %d",iRet);

    free(iPtr);

    return 0;
}