#include<stdio.h>
int main()
{
    int initial,last;
    printf("Enter an initial number: \n");
    scanf("%d",&initial);
    printf("Enter a last number: \n");
    scanf("%d",&last);
    for(int i = initial; i <= last; i++)
    {
        if(i %2 == 0)
        {
            printf("%d is an even number.\n",i);
        }
        else
        {
            printf("%d is an odd number.\n",i);
        }
    }
    return 0;
}