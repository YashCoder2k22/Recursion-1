#include<stdio.h>
int sumsquN(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("Sum of square of first %d natural numbers is %d",n,sumsquN(n));
    return 0;
}
int sumsquN(int a)
{
    int s;
    if(a>0)
    {
    s=a*a+sumsquN(a-1);
    return s;
    }

}