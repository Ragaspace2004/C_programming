int main() {
   int i, j, n;

scanf("%d",&n);
int a[n][n],b[n][n];
   for (i = 0; i < n; i++){
      for (j = 0; j < n; j++) {
         scanf("%d", &a[i][j]);}}
   for (i = 0; i < n; i++){
      for (j = 0; j < n; j++) {
      scanf("%d", &b[i][j]);
         }}
   for(i = 0; i < n; i++){
      for (j = 0; j < n; j++) {
         printf("%d ",a[i][j]+b[i][j]);
         }
         printf("\n");}

   return (0);
}
