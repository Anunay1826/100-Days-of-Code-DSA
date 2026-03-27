/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

#include<stdio.h>
int main(){
    int num[10],n,sum;
    printf("enter the no of elements of the array:");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    printf("enter the target sum:");
    scanf("%d",&sum);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(num[i]+num[j]==sum){
                printf("%d %d\n",i,j);
                return 0;
            }
        }
    }
    printf("no pair found\n");
    return 0;
}
