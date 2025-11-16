#include<stdio.h>
#include<stdbool>

bool Check(int Arr[],int ilenght)
{
    int Count = 0,iCnt = 0;

    for(iCnt = 0; iCnt< ilength; iCnt++)
    {
        if(Arr[iCnt] ==11)
            return true;
        else
            return false;
    }
}

int main()
{
    int iSize = 0,iCnt = 0,iLength = 0;
    bool bRet = false;
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

    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf("\n11 is present");
    }
    else
    {
        printf("\n11 is not present");
    }
    
    free(p);

    return 0;
}