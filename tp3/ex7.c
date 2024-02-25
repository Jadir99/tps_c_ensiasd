#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Structure to represent a participant
typedef struct {
	char nom[20];
	char prenom[30];
	int dejeuner;    // Indicates if the participant has lunch (0 or 1)
	int diner;       // Indicates if the participant has dinner (0 or 1)
	int hotel;       // Indicates the hotel type (0, 2, or 3)
	int accompagne;  // Indicates if the participant is accompanied (0 or 1)
} Participant;

// Structure to hold an array of participants
typedef struct {
	Participant Tab[100];
} TabPart;

// Function to count the number of participants who stayed in a 2-star hotel
void Nb2Etoiles(TabPart T) {
	int i;
	for(i = 0; i < 100; i++) {
		if(T.Tab[i].hotel == 2) {
			printf("nom: %s , prenom: %s\n", T.Tab[i].nom, T.Tab[i].prenom);
		}
	}
}

// Function to calculate the total amount for lunch based on the participants' choices
int NbDej(TabPart T) {
	int i, somme = 0;
	for(i = 0; i < 100; i++) {
		if(T.Tab[i].dejeuner == 1) {
			if(T.Tab[i].accompagne == 1)
				somme += 2;
			else if(T.Tab[i].accompagne == 0)
				somme++;
		}
	}
	return somme;
}

// Function to calculate the total amount for a participant
int Montant(Participant P) {
	int somme = 0;
	if(P.dejeuner == 1)
		somme += 150;
	if(P.diner == 1)
		somme += 350;
	if(P.accompagne == 1)
		somme *= 2;
	if(P.hotel == 2)
		somme += 250;
	else if(P.hotel == 3)
		somme += 400;
	
	return somme;
}

int main() {
	TabPart T;
	FILE *F = fopen("factures.txt", "w");  // Open the file for writing
	
	int i;
	for(i = 0; i < 1; i++) {
		printf("donner:\n**nom:");
		scanf("%s", T.Tab[i].nom);
		printf("**prenom:");
		scanf("%s", T.Tab[i].prenom);
		printf("**dejeuner(0/1):");
		scanf("%d", &T.Tab[i].dejeuner);
		printf("**diner(0/1):");
		scanf("%d", &T.Tab[i].diner);
		printf("**accompagne(0/1):");
		scanf("%d", &T.Tab[i].accompagne);
		printf("**hotel(0/2/3):");
		scanf("%d", &T.Tab[i].hotel);
	}
	
	fputs("  nom  |  prenom  |  Montant\n", F);  // Write header to file
	for(i = 0; i < 1; i++) {
		fprintf(F, "%s   %s:      %d\n", T.Tab[i].nom, T.Tab[i].prenom, Montant(T.Tab[i]));  // Write participant details and amount to file
	}
	fclose(F);  // Close the file
	
	return 0;
}
