#include<stdio.h>

void print_number(int limit)
{
    int i,sum=0;

    for(i=0;i<limit;i++)
        sum=sum+i;

    return sum;
}

int main()
{
    int limlt;

    printf("Enter the number");
    scanf("%d",&limit);

    printf("%d",print_number(limlt));

    return 0;
}