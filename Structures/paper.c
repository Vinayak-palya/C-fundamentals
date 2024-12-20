#include <stdio.h>

int main() {
    FILE *file;
    int a=46;

    // Open the file in append mode
    file = fopen("input.txt", "a");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Append a string to the file
    fprintf(file, "45");

    // Close the file
    fclose(file);

    return 0;
}