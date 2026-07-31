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
    int max= -999;
    int min=1000;
    int sum=0;
    for(int i=0;i<n;i++){
        if(nums[i]>max){
            max=nums[i];
        }
        if(nums[i]<min){
            min=nums[i];
        }
        sum=sum+nums[i];
    }
    printf("Largest element is: %d",max);
    printf("Smallest element is: %d",min);
    float avg=sum/n;
    printf("Average is %f",avg);

}