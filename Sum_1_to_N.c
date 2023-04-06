#include<stdio.h>
int main()
{
    int initial,last,sum=0;
    printf("Enter a value for initial: \n");
    scanf("%d",&initial);
    printf("Enter a value for last value: \n");
    scanf("%d",&last);
    for(int i=initial; i <= last; i++)
    {
        sum += i;
    }
    printf("Summation of %d to %d is %d",initial,last,sum);
    return 0;
}