# include<stdio.h>
# include<stdlib.h>
# include<string.h>
int main(){
    int n;
    char str[n],*ptr;
    printf("Enter number of elements:");
    scanf("%s",str);
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
    ptr = (char*)calloc(100,1);
    strcpy(ptr,"hhhhhhhhhhhhhh");
    printf("%s",ptr);}

    // Check if the memory has been successfully
    // allocated by malloc or not
   /* if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {

        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }

    return 0;
}*/
