#include<stdio.h>
int main(){
    int t,n=10899
    ,rev=0;
    t=n;
    while(t!=0){
        rev = rev*10 + (t%10);
        t = t/10;
    }
    printf("Reverse of %d = %d",n,rev);
    return 0;
}