#include<stdio.h>
int sumfoddn(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("Sum of first %d odd natural numbers is %d",n,sumfoddn(n));
    return 0;
}
int sumfoddn(int a)
{
    int s;
    if(a>0)
    {
    s=2*a-1+sumfoddn(a-1);
    return s;
    }

}