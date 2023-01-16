#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n[10]={22,33,45,56,67,78,89,99,100,120};
    int key,low,mid,high,i;
    printf("enter the searching element:");
    scanf("%d",&key);
    low=0;
    high=9;
    while(high>=low)
    {
       mid=(low+high)/2;
       if(key<n[mid])
       {
           high=mid-1;
       }
       else{
            if(key==n[mid]){
                printf("the searching element %d  present in the array",key);
                break;
            }
            else{
                low=mid+1;
            }
    }
    if(low>high)
    {
        printf("the searching element %d is not present in the array",key);
    }

    }
return 0;

}
