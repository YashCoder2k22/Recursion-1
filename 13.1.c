#include<stdio.h>
int sumfn(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is %d",n,sumfn(n));
    return 0;
}
int sumfn(int a)
{
    int s;
    if(a>0)
    {
    s=a+sumfn(a-1);
    return s;
    }

}