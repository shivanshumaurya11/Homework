#include<stdio.h>
int main(){
    int a,b,c,avg;
    printf("Enter 3 Numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    avg = (a+b+c)/3;
    printf("%d",avg);
    return 0;
}