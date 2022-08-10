#include<stdio.h>
int main()
{
    int i,n;
    printf("enter number");
    scanf("%d",&n);
    for(i=2; i<=n*2; i=i+2)
    {
       printf("%d\n",i);
    }
    
       return 0;

}