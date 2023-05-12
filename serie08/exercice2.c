#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

void sortArray(int array[], int size) {
    int i, j, temp;
    for (i = 0; i < size-1; i++) {
        for (j = 0; j < size-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main() {
    int array[ARRAY_SIZE];
    int i;

    // Ouvrir le fichier en lecture
    FILE *file = fopen("entiers.txt", "r");
    if (file == NULL) {
        printf("Erreur: impossible d'ouvrir le fichier\n");
        exit(1);
    }

    // Lire les valeurs du fichier dans un tableau
    for (i = 0; i < ARRAY_SIZE; i++) {
        fscanf(file, "%d", &array[i]);
    }

    // Fermer le fichier
    fclose(file);

    // Trier le tableau
    sortArray(array, ARRAY_SIZE);

    // Ouvrir le fichier en écriture
    file = fopen("entiers.txt", "w");
    if (file == NULL) {
        printf("Erreur: impossible d'ouvrir le fichier\n");
        exit(1);
    }

    // Réinitialiser le curseur de fichier au début
    fseek(file, 0, SEEK_SET);

    // Écrire les valeurs triées dans le fichier
    for (i = 0; i < ARRAY_SIZE; i++) {
        fprintf(file, "%d ", array[i]);
    }

    // Fermer le fichier
    fclose(file);

    printf("Le fichier a été trié avec succès.\n");

    return 0;
}
