#include<stdio.h>
void main(){
int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        printf("Enter elements");
        scanf("%d", &nums[i]);
    }
    int temp;
    for(int i=0;i<n/2;i++){
        temp=nums[i];
        nums[i]=nums[n-i-1];
        nums[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",nums[i]);
    }
}