// ENGINEERING CUT-OFF CALCULATION
# include<stdio.h>
int main()
{
int imaths,iphysics,ichemistry;
int imaths1,iphysics1,ichemistry1;
int imaths2,iphysics2,ichemistry2;
float fcut_off,fcut_off1,fcut_off2,high;
scanf("%d %d %d",&imaths,&iphysics,&ichemistry);
scanf("%d %d %d",&imaths1,&iphysics1,&ichemistry1);
scanf("%d %d %d",imaths2,&iphysics2,&ichemistry2);
fcut_off=(imaths/2)+(iphysics/4)+(ichemistry/4);
fcut_off1=(imaths1/2)+(iphysics1/4)+(ichemistry1/4);
fcut_off2=(imaths2/2)+(iphysics2/4)+(ichemistry2/4);
printf("%f,%f,%f",fcut_off,fcut_off1,fcut_off2);
((fcut_off>fcut_off2)&&(fcut_off>fcut_off1))?printf("\n%f",fcut_off):printf("");
((fcut_off1>fcut_off)&&(fcut_off1>fcut_off2))?printf("\n%f",fcut_off1):printf("");
((fcut_off2>fcut_off)&&(fcut_off2>fcut_off1))?printf("\n%f",fcut_off2):printf("");
}

