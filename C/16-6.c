#include<stdio.h>
int main()
{
    int n;
    int s=0,r=0;
    scanf("%d",&n);
    int temp=n;
    if (n<0)
    { printf("Negative value Not Allowed."); return 0;}
    while (n!=0){   
    r=n%10;
    s+=r;
    n=n/10;
    }
    printf("Sum of digits of %d is: %d",temp,s);

}