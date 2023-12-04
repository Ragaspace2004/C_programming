# include<stdio.h>
int main(){
int no,i;
char str[no],s;
printf("Enter the no.of.strings:");
scanf("%d",&no);
for(i=0;i<no;i++){
scanf("%s",&str[i]);
}
for(i=0;i<no;i++){
if(strcmp(str[i],str[i+1])>0){
s=str[i];
str[i]=str[i+1];
str[i+1]=s;
}}
for(i=0;i<no;i++){
printf("%s",str[i]);
}
}
