# include<stdio.h>
int main(){
FILE *fp;
char a,c[100];
fp=fopen("test1.txt","a+");
fputc('t',fp);
fputs("Hello ma'am",fp);
fclose(fp);/*suggested to add for writing mode as the display functions may work on together after encountering this command*/

}
