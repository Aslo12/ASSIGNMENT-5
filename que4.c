#include<stdio.h>
int main()
{
    int i,n;
    printf("enter value of \n ");
    scanf("%d",&n);
    for(i=1; i<=n*2; i=i+2)
    {
       printf("%d\n",i);
    }
    
       return 0;

}