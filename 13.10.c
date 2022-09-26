#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
    int x,y;
    printf("Enter a Number and its exponent");
    scanf("%d%d",&x,&y);
    printf("Power is %d",power(x,y));
    return 0;
}
int power(int a,int b)
{
    int s;
    if(b>0)
    {
    s=a*power(a,b-1);
    return s;
    }
    else
    {
        return 1;
    }
}