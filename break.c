#include<stdio.h>
int main()
{
    int number,break_number;
    printf("Enter a number: \n");
    scanf("%d",&number);
    printf("Enter the break_number: \n");
    scanf("%d",&break_number);
    for(int i = 1; i <= number; i++)
    {
        printf("%d\n",i);
        if(i == break_number)
        {
            break;
        }
    }
    return 0;
}