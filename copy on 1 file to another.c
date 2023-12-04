#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char filename1[100], filename2[100], ch;

    printf("Enter the source filename: ");
    scanf("%s", filename1);

    printf("Enter the destination filename: ");
    scanf("%s", filename2);

    fp1 = fopen(filename1, "r"); // Open the source file in read mode
    if (fp1 == NULL) {
        printf("Error: Unable to open file %s.\n", filename1);
        return 1;
    }

    fp2 = fopen(filename2, "w"); // Open the destination file in write mode
    //if (fp2 == NULL) {
     //   printf("Error: Unable to open file %s.\n", filename2);
        fclose(fp1);
        return 1;
    }

    // Copy the contents of the source file to the destination file
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(fp1);
    fclose(fp2);

    return 0;
}
