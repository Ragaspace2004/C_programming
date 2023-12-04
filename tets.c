# include<stdio.h>
int main(){
int n,i,j,k;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]==a[j]){
for(k=j;k<n;k++){
a[k]=a[k+1];
}
n--;
}else{
j--;}}}
for(i=0;i<n;i++){
printf("%d ",a[i]);}}
/*#include <stdio.h>

int main() {
    int arr[100], n, i, j, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Removing duplicate elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    // Printing the array after removing duplicate elements
    printf("\nArray after removing duplicate elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}*/

