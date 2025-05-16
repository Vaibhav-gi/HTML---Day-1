Q.1 Write a C program to print sum of digits entered by user
--------

Sample input  : int n = 1234

Sample output : 10
Sample Input
1234
Sample Output
Sum of digits of 1234 is: 10
C Program:
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