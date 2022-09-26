#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
    return 0;
}
int fact(int a)
{
    int s;
    if(a==0||a==1)
    return 1;
    else
    {
    s=a*fact(a-1);
    return s;
    }
}