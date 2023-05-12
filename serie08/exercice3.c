
#include <stdio.h>

int main() {
    FILE *fichier;
    int valeur;
    char choix;
    int rang,compteur=0;

    // Ouverture du fichier en mode écriture
    fichier = fopen("valeurs.txt", "w");
    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return 1;
    }

    // Boucle pour demander à l'utilisateur de saisir des valeurs
    while (1) {
        // Demande à l'utilisateur de saisir une valeur entière positive
        printf("Saisissez une valeur entière positive (ou tapez 'q' pour quitter) : ");
        scanf("%d", &valeur);
        if (valeur < 0) {
            // Si la valeur saisie est négative, on la rejette
            printf("La valeur saisie doit être positive.\n");
        } else {
            // Écriture de la valeur dans le fichier
            fprintf(fichier, "%d\n", valeur);
        }

        // Demande à l'utilisateur s'il souhaite continuer
        printf("Voulez-vous saisir une autre valeur ? (o/n) : ");
        scanf(" %c", &choix);
        if (choix == 'n' || choix == 'N') {
            // Si l'utilisateur ne souhaite pas continuer, on sort de la boucle
            break;
        }
    }

    // Fermeture du fichier
    fclose(fichier);

    printf("Les valeurs ont été enregistrées dans le fichier 'valeurs.txt'.\n");


    fichier = fopen("valeurs.txt", "r");
    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return 1;
    }
     // Demande à l'utilisateur de saisir le rang de la valeur recherchée
    printf("\nSaisissez le rang de la valeur recherchée : ");
    scanf("%d", &rang);

    // Boucle pour lire chaque valeur dans le fichier
    while (fscanf(fichier, "%d", &valeur) != EOF) {
        compteur++;
        if (compteur == rang) {
            // Si on a atteint le rang recherché, on affiche la valeur correspondante
            printf("La valeur de rang %d est : %d\n", rang, valeur);
            break;
        }
    }

    // Si le compteur est inférieur au rang demandé, le rang est invalide
    if (compteur < rang) {
        printf("Le rang demandé dépasse la taille du fichier.\n");
    }

    // Fermeture du fichier
    fclose(fichier);

    return 0;
}
