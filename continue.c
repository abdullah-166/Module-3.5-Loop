#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d",&number);
    for(int i =1; i <= number; i++)
    {
        if(i == 7)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}