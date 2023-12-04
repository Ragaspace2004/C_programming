#include <stdio.h>
#include <stdlib.h>

// Define a struct for a person
struct person {
    char *name;
    int age;
};

int main() {
    // Create a pointer to a person struct
    struct person *ptr;

    // Allocate memory for the struct using malloc()
    ptr = (struct person*)malloc(sizeof(struct person));

    // Initialize the struct's fields using the -> operator
    ptr->name = "John";
    ptr->age = 30;

    // Print out the values of the struct's fields
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    // Free the memory allocated for the struct
    free(ptr);
return 0;}


