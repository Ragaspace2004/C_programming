# include<stdio.h>
int iscoprime(int a,int b){
int t;
if(a<b){
    t=a;
    a=b;
    b=t;
}
while(!(b==0)){
    t=b;
    b=a%b;
    a=t;
}
if(a==1){
    return 1;
}
else{
    return 0;
}
}
int main(){
int prev,curr;
int i,n;
int count=0;
scanf("%d",&n);
scanf("%d",&prev);
for(i=0;i<n;i++){
scanf("%d",&curr);
count=count+iscoprime(prev,curr);
prev=curr;
}}
