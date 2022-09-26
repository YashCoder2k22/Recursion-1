#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y;
    printf("Enter two Number");
    scanf("%d%d",&x,&y);
    printf("Hcf of %d and %d is %d",x,y,hcf(x,y));
    return 0;
}
int hcf(int a,int b)
{
    int s;
    if(a==b)
    return a;
    if(a%b==0)
    return b;
    if(b%a==0)
    return a;
    if(a>b)
    {
    return hcf(a%b,b);
    }
    else
    {
    return hcf(a,b%a);
    }
}