# include<stdio.h>
int main(){
FILE *fp;
char c,a[100];
fp=fopen("test.txt","r");
//fputs("Hellodi",fp);
c=fgetc(fp);
//fscanf(fp,"%s",a);
fprintf(fp,"%c",c);
printf("%c",c);
fclose(fp);
}
