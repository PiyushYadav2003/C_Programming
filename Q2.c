#include<stdio.h>

void FindMax(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int num1,num2;
    int result;

    printf("Enter two number")
    scanf("%d%d",&num1,&num2);

    result = FindMax(num1,num2);
    printf("Maximun number is %d",result);

    return 0;
}