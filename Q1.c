#include<stdio.h>

void print_number(int limit)
{
    int i;

    for(i=0;i<limit;i++)
        print("%d",i);
}

int main()
{
    int limlt;

    printf("Enter the number");
    scanf("%d",&limit);

    print_number(limlt);

    return 0;
}