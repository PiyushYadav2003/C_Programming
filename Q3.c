#include<stdio.h>

int FirstOcc(int Arr[],int ilenght,int iNo = 0)
{
    int loc = -1,iCnt = 0;

    for(iCnt = 0; iCnt< ilength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            loc = iCnt;
        }
        
    }
   
    return loc;
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

    iRet = FirstOcc(p,iSize,iValue);

    if(iRet == -1)
        printf("No such element present");
    else
        printf("%d is present at %d location",iValue,iRet);


    free(p);

    return 0;
}