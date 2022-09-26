#include<stdio.h>
int sumofdigit(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("Sum of digits is %d",sumofdigit(n));
    return 0;
}
int sumofdigit(int a)
{
    int s;
    if(a>0)
    {
    s=a%10+sumofdigit(a/10);
    return s;
    }
}