#include<stdio.h>
int countdigit(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("No of digits is %d",countdigit(n));
    return 0;
}
int countdigit(int a)
{
    static int count=0;
    if(a>0)
    {
     count++;
     countdigit(a/10);
    }
    else
    {
    return count;
    }
}