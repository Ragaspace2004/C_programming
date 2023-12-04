# include<stdio.h>
int main(){
FILE *fp;
char ch;
fp=fopen("test.txt","w");
printf("Enter data into the file");
while(ch = getchar() !=EOF){
putc(ch,fp);
}
fclose(fp);
fp=fopen("text.txt","r");
while(ch=getc(fp)!=EOF){
printf("%c",ch);}
fclose(fp);}
