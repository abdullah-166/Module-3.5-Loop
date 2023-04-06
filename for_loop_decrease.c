#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d",&number);
    for(int i = number; i >= 1; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}