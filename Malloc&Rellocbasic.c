//Basics of malloc and realloc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int initial_size = 20;
    int new_size = 50;
    printf("--- Phase 1: Initial Allocation with malloc ---\n");
    str = (char *)malloc(initial_size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Initial memory allocated: %d bytes\n", initial_size);
    strcpy(str, "Hello");
    printf("Initial string stored: \"%s\"\n", str);
    printf("String length: %zu\n", strlen(str));
    printf("\n--- Phase 2: Expanding Memory with realloc ---\n");
    char *temp = (char *)realloc(str, new_size * sizeof(char));
    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(str);
        return 1;
    }
    str = temp;
    printf("Memory successfully expanded to: %d bytes\n", new_size);
    strcpy(str, "This is a much longer string stored now.");
    printf("New larger string stored: \"%s\"\n", str);
    printf("New string length: %zu\n", strlen(str));
    printf("Required memory used: %zu bytes\n", strlen(str) + 1);
    free(str);
    printf("\nMemory block successfully freed.\n");

    return 0;
}
