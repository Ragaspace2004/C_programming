# include<stdio.h>
# include<math.h>
int main(){
int num,rev,sqnum,sqrev,sum=0,ans;
scanf("%d",&num);
sqnum=pow(num,2);
//printf("%d",sqnum);}
while(num!=0){
int last=num%10;
rev=rev*10+last;
num/=10;
}
sqrev=pow(rev,2);

while(sqrev!=0){
int end=sqrev%10;
ans=ans*10+end;
sqrev/=10;
}
if(ans==sqnum)
printf("Adam number");
else
printf("Not an Adam number");
}
