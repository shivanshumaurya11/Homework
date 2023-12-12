#include<stdio.h>
int main(){
    int n,sum_even=0,sum_odd=0;
    printf("Enter no. or press 0 to get sum : ");
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        if(n%2==0)
            sum_even += n;
        else
            sum_odd += n;
    }
    printf("Sum of Even Integers = %d \n Sum of Odd Integers = %d",sum_even,sum_odd);
    return 0;
}