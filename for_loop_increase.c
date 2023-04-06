#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number to get Multiplication table: \n");
    scanf("%d",&number);
    for(int i = 1;i <= 10; i++)
    {
        int result = number * i;
        printf("%d X %d = %d\n",number,i,result);
    }
    return 0;
}