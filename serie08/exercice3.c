
#include <stdio.h>

int main() {
    FILE *fichier;
    int valeur;
    char choix;
    int rang,compteur=0;

    // Ouverture du fichier en mode �criture
    fichier = fopen("valeurs.txt", "w");
    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return 1;
    }

    // Boucle pour demander � l'utilisateur de saisir des valeurs
    while (1) {
        // Demande � l'utilisateur de saisir une valeur enti�re positive
        printf("Saisissez une valeur enti�re positive (ou tapez 'q' pour quitter) : ");
        scanf("%d", &valeur);
        if (valeur < 0) {
            // Si la valeur saisie est n�gative, on la rejette
            printf("La valeur saisie doit �tre positive.\n");
        } else {
            // �criture de la valeur dans le fichier
            fprintf(fichier, "%d\n", valeur);
        }

        // Demande � l'utilisateur s'il souhaite continuer
        printf("Voulez-vous saisir une autre valeur ? (o/n) : ");
        scanf(" %c", &choix);
        if (choix == 'n' || choix == 'N') {
            // Si l'utilisateur ne souhaite pas continuer, on sort de la boucle
            break;
        }
    }

    // Fermeture du fichier
    fclose(fichier);

    printf("Les valeurs ont �t� enregistr�es dans le fichier 'valeurs.txt'.\n");


    fichier = fopen("valeurs.txt", "r");
    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return 1;
    }
     // Demande � l'utilisateur de saisir le rang de la valeur recherch�e
    printf("\nSaisissez le rang de la valeur recherch�e : ");
    scanf("%d", &rang);

    // Boucle pour lire chaque valeur dans le fichier
    while (fscanf(fichier, "%d", &valeur) != EOF) {
        compteur++;
        if (compteur == rang) {
            // Si on a atteint le rang recherch�, on affiche la valeur correspondante
            printf("La valeur de rang %d est : %d\n", rang, valeur);
            break;
        }
    }

    // Si le compteur est inf�rieur au rang demand�, le rang est invalide
    if (compteur < rang) {
        printf("Le rang demand� d�passe la taille du fichier.\n");
    }

    // Fermeture du fichier
    fclose(fichier);

    return 0;
}
