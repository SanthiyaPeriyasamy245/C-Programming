#include<stdio.h>
#include<stdbool.h>
int main(){
    int x;
     printf("enterth value of x:");
     scanf("%d",&x);
 bool isPalindrome(int x) {

        long int num = x, rev = 0, rem = 0;
        while(x != 0)
        {
            rem = x%10;
            rev = rev*10 + rem;
            x /= 10;
        }
        if(num == rev)
            return true;
        else
            return false;
    }
};


