#include<stdio.h>

int main() {
  // Convertir un nombre decimale vers un nombre binaire
  int num, i;

  printf("Entre le nombre decimale a convertir: ");
  scanf("%d", &num);

  int tab[num];

  while (num > 0) {
    tab[i++] = num % 2;
    num /= 2;
  }

  printf("Le nombre binaire est : ");
  for (i = i - 1; i >= 0; i--) {
    printf("%d", tab[i]);
  }
  printf("\n");
}
