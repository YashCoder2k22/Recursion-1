#include<stdio.h>
int sumfevenN(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("Sum of first %d even natural numbers is %d",n,sumfevenN(n));
    return 0;
}
int sumfevenN(int a)
{
    int s;
    if(a>0)
    {
    s=2*a+sumfevenN(a-1);
    return s;
    }

}