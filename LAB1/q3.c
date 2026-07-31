#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        printf("Enter elements");
        scanf("%d", &nums[i]);
    }
    int target;
    printf("Enter the number to be searched: ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(nums[i]==target){
          printf("Element found at index %d",i);
          return i;
        }
        
    }
    printf("Element not found");
    return -1;
}