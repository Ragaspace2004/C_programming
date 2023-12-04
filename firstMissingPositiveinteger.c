# include<stdio.h>
int firstMissingPositive(int* nums, int numsSize){
int i,j;
for(i=1;i<=numsSize;i++){
for(j=1;j<=numsSize;j++){
    if(nums[i]==j){
    break;}
else if(nums[i]==0){
    break;
}
else{
    return j;
}}}
}
int main(){
int numsSize,i;
scanf("%d",&numsSize);
int nums[numsSize];
for(i=0;i<numsSize;i++){
scanf("%d",&nums[i]);
}
printf("%d",firstMissingPositive(nums[numsSize],numsSize));}
