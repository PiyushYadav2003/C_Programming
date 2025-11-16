#include<stdio.h>

void  Range(int Arr[],int ilenght,int iStart,int iEnd)
{
    int loc = -1,iCnt = 0;

    for(iCnt = 0; iCnt< ilength; iCnt++)
    {
        if(Arr[iCnt] >= iStart &7 Arr[iCnt] <= iEnd)
        {
           print("\n%d",Arr[iCnt]);
        }  
    }
}


int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iLength = 0,iValue1 = 0,iValue2 = 0;
    int *p = NULL;

    printf("\nEnter number of elements");
    scanf("%d",&iSize);

    printf("Enter Starting point");
    scanf("%d",&iValue1);

    printf("Enter End point");
    scanf("%d",&iValue2);

    p = (int*)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memery")
        return -1;
    }


    for(iCnt = 0;iCnt <iSize; iCnt++)
    {
        printf("Enter Elements: %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Range(p,iSize,iValue);

    free(p);

    return 0;
}