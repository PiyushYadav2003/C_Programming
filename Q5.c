#include<stdio.h>

void FindLarge(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    if(b>a && b>c)
        return b;
    else
        return c;
        
}

int main()
{
    int a,b,c,result;

    printf("Enter three number")
    scanf("%d",&number);

    result=FindLarge(a,b,c);
    printf("Largest Number is %d",result);

    return 0;
}