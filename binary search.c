# include<stdio.h>
int main(){
int a[10],i,key,low,high,mid,f=0;
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
printf("Enter the key:");
scanf("%d",&key);
low=0;high=4;
mid=(low+high)/2;
while(low<=high){
if(a[mid]==key){
printf("key found");
break;}
else if(a[mid]<key){
low=mid+1;
}
else if(a[mid]>key){
high=mid-1;}
/*else{
    printf("key not found");
}*/
mid=(low+high)/2;
}

}
