#include<stdio.h>
int main()
{
    int number,result=1;
    int i = 1;
    printf("Enter a number for multiplication: \n");
    scanf("%d",&number);
    while (i <= 10)
    {
        result = number * i;
        printf("%d X %d = %d\n",number,i,result);
        i++;
    }
    return 0;
}