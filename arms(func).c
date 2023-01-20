#include<stdio.h>
#include<stdlib.h>
int isarmstrong(n);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(isarmstrong(n)==1)
    {
        printf("%d is a armstrong number!",n);
    }
    else{
        printf("%d is not a armstrong number!",n);
    }
    return 0;
}
int isarmstrong(n)
{
    int e=n;
    int count=0;
    int rem;
    int sum=0;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        count++;

    }
     while(n!=0)
    {
        rem=n%10;
        n/=10;
        sum=sum+pow(rem,count);


    }
    if(e==sum)
        return 1;
}
