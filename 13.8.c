#include<stdio.h>
int fibc(int);
int main()
{
    int n,i;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=0;i<=5;i++)
    {
        printf("%d ",fibc(i));
    }    
    return 0;
}
int fibc(int a)
{
    int s;
    if(a==0||a==1)
    return a;
    else
    {
    s=fibc(a-1)+fibc(a-2);
    return s;
    }
    
}
    
