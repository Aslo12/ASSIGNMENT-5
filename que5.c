#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter value of n\n ");
    scanf("%d",&n);
    for(i=n*2-1; i>=1; i=i-2)
    {
       printf("%d\n",i);
    }
    
       return 0;

}