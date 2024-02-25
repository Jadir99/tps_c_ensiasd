#include <stdio.h>

// Function to calculate the square of a number
float carre(float x){
    return x * x;
}

// Function to apply a function f to each element of an array
void appliquer_carre(float (*f)(float), float *t, int n) {
    for (int i = 0; i < n; i++) {
        t[i] = f(t[i]); // Apply the function f to each element of the array t
    }
}

// Function to display all elements of an array
void afficher(float tab[], int n) {
    for(int i = 0; i < n; i++)
        printf("tab[%d] = %.2f\t", i + 1, tab[i]);
}

int main() {
    // Initialize an array of floats
    float tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // Declare a pointer to the function
    float (*ptrCarre)(float) = &carre;

    // Apply the carre function to each element of the array
    appliquer_carre(ptrCarre, tab, 10);

    // Display all elements of the array after applying the function
    afficher(tab, 10);

    return 0;
}
