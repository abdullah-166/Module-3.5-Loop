#include<stdio.h>
int main()
{
    int number,result=1;
    int i = 1;
    printf("Enter a number for multiplication table: \n");
    scanf("%d",&number);
    do
    {
         result = number * i;
        printf("%d X %d = %d\n",number,i,result);
        i++;
    } 
    while (i <= 10);
    return 0;
}