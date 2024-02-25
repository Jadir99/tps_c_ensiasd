#include <stdio.h>
#include <stdlib.h>

// Function to add an array of integers to a binary file
void addToBin(int *tab, char *path) {
    FILE *f;
    f = fopen(path, "ab+"); // Open the file in append mode for binary writing
    if (f != NULL) {
        fwrite(tab, sizeof(int), 10, f); // Write the array to the file
        fclose(f); // Close the file
    } else {
        printf("Error: Unable to open file\n");
    }
}

// Function to read an array of integers from a binary file and print its contents
void readFromBin(char *path, int *tab, int *tab2) {
    FILE *f;
    f = fopen(path, "rb"); // Open the file in read mode for binary reading
    if (f != NULL) {
        fread(tab2, sizeof(int), 10, f); // Read the array from the file
        for (int i = 0; i < 10; i++) {
            printf("%d \t", tab2[i]); // Print the elements of the array
        }
        fclose(f); // Close the file
    } else {
        printf("Error: Unable to open file\n");
    }
}

// Function to search for a specific integer in a binary file
int searchInBin(char *path, int a) {
    FILE *f;
    int n;
    f = fopen(path, "rb"); // Open the file in read mode for binary reading
    if (f != NULL) {
        while (fread(&n, sizeof(int), 1, f) == 1) { // Read integers one by one from the file
            if (n == a) { // Check if the integer matches the target value
                fclose(f); // Close the file
                return 1; // Return 1 if found
            }
        }
        fclose(f); // Close the file
        return 0; // Return 0 if not found
    } else {
        printf("Error: Unable to open file\n");
        return 0; // Return 0 in case of error
    }
}

int main() {
    int *tab, *tab2;
    tab = malloc(10 * sizeof(int)); // Allocate memory for the array
    tab2 = malloc(10 * sizeof(int)); // Allocate memory for the array
    for (int i = 0; i < 10; i++) {
        tab[i] = i + 1; // Initialize the array with values
    }
    addToBin(tab, "tabs.bin"); // Add the array to the binary file
    readFromBin("tabs.bin", tab, tab2); // Read and print the contents of the binary file
    int a = searchInBin("tabs.bin", 3); // Search for a specific value in the binary file
    if (a == 1) {
        printf("\nValue found\n"); // Print a message if the value is found
    } else {
        printf("Value not found\n"); // Print a message if the value is not found
    }

    return 0;
}
