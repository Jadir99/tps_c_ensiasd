#include <stdio.h>
#include <stdlib.h>

// Define the structure
typedef struct Element Element;
struct Element {
    int a;                  // Data stored in the element
    struct Element *suivant; // Pointer to the next element
};

// Function to initialize a stack (returning NULL as an empty stack)
Element *InitialiserPile() {
    return NULL;
}

// Function to push an element onto the stack
Element *Empiler(Element *sommet, int donnee) {
    Element *nouveau;
    nouveau = (Element *)malloc(sizeof(Element)); // Allocate memory for the new element
    nouveau->a = donnee; // Set data for the new element
    nouveau->suivant = sommet; // Set the next pointer of the new element
    sommet = nouveau; // Update the top of the stack
    return sommet; // Return the updated top of the stack
}

// Function to pop an element from the stack
Element *Depiler(Element *liste) {
    if (liste != NULL) {
        Element *e = liste; // Temporarily store the current top of the stack
        liste = liste->suivant; // Move the top of the stack to the next element
        free(e); // Free the memory of the popped element
        return liste; // Return the updated top of the stack
    }
}

// Function to print the elements of the stack iteratively
void afficher(Element *liste) {
    if (liste != NULL) {
        while (liste != NULL) {
            printf("%d\n", liste->a); // Print the data of the current element
            liste = liste->suivant; // Move to the next element
        }
    }
}

// Function to print the elements of the stack recursively
void afficher_recursive(Element *liste) {
    if (liste != NULL) {
        printf("%d\n", liste->a); // Print the data of the current element
        afficher_recursive(liste->suivant); // Recursively call to print the next element
    }
}

// Function to find the maximum element in the stack
Element *Max(Element *liste) {
    if (liste != NULL) {
        Element *max = liste; // Assume the first element as the maximum
        liste = liste->suivant; // Move to the next element
        while (liste != NULL) {
            if (liste->a > max->a) {
                max = liste; // Update the maximum if a greater element is found
            }
            liste = liste->suivant; // Move to the next element
        }
        return max; // Return the maximum element found
    }
    return NULL; // Return NULL if the stack is empty
}

// Function to count the number of elements in the stack
int NbElement(Element *liste) {
    if (liste != NULL) {
        int count = 0;
        while (liste != NULL) {
            count++; // Increment the count for each element
            liste = liste->suivant; // Move to the next element
        }
        return count; // Return the total count
    }
    return 0; // Return 0 if the stack is empty
}

void separer(Element *liste,Element **pair,Element **impair) {
        if(liste!=NULL){
            while(liste!=NULL){
                if(liste->a%2==0)
                *pair=Empiler(*pair,liste->a);
                else 
                *impair=Empiler(*impair,liste->a);
                liste=liste->suivant;
            }
        }
}


// Main function
int main() {
    Element *e = NULL; // Declare and initialize a stack
    e = InitialiserPile(); // Initialize the stack

    Element *pile = e; // Assign the stack to a variable

    pile = Empiler(e, 19); // Push elements onto the stack
    pile = Empiler(pile, 12);
    pile = Empiler(pile, 6); // Push elements onto the stack
    pile = Empiler(pile, 9);
    pile = Empiler(pile, 55); // Push elements onto the stack
    pile = Empiler(pile, 30);
    pile = Empiler(pile, 3);
    pile = Depiler(pile); // Pop an element from the stack

    afficher(pile); // Print the elements of the stack iteratively
    afficher_recursive(pile); // Print the elements of the stack recursively
    printf("le max est %d\n", Max(pile)->a); // Print the maximum element in the stack
    printf("le nombre d'element est %d\n", NbElement(pile)); // Print the number of elements in the stack

// pour la fonction separer

    Element *pair=InitialiserPile(),*impair=InitialiserPile();
    separer(pile,&pair,&impair);
    printf("les paires sont :\n");
    afficher(pair);
    printf("les impaires sont :\n");
    afficher(impair);

    return 0;
}
