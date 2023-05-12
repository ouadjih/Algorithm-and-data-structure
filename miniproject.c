#include<stdio.h>

typedef struct Contact {
  char name[50];
  char phone[15];
}Contact;


// Adds a new contact to the phonebook file
void addContact(FILE *file) {
  struct Contact contact;

  printf("Enter name: ");
  scanf("%s", contact.name);

  printf("Enter phone number: ");
  scanf("%s", contact.phone);

  fwrite(&contact, sizeof(struct Contact), 1, file);

  printf("Contact added successfully!\n");
}

// Deletes a contact from the phonebook file
void deleteContact(FILE *file) {
  struct Contact contact;
  char nameToDelete[50];
  int found = 0;

  printf("Enter name of contact to delete: ");
  scanf("%s", nameToDelete);

  while (fread(&contact, sizeof(struct Contact), 1, file)) {
    if (strcmp(contact.name, nameToDelete) == 0) {
      found = 1;
      break;
    }
  }

  if (found) {
    fseek(file, -sizeof(struct Contact), SEEK_CUR);
    fwrite(&(struct Contact){}, sizeof(struct Contact), 1, file);
    printf("Contact deleted successfully!\n");
  } else {
    printf("Contact not found!\n");
  }
}

// Searches for a contact in the phonebook file

void searchContactRecursive(FILE *file, char *nameToSearch) {
  struct Contact contact;

  if (fread(&contact, sizeof(struct Contact), 1, file)) {
    if (strcmp(contact.name, nameToSearch) == 0) {
      printf("Name: %s\nPhone number: %s\n", contact.name, contact.phone);
      return;
    }

    searchContactRecursive(file, nameToSearch);
  } else {
    printf("Contact not found!\n");
  }
}

void searchContact(FILE *file) {
  char nameToSearch[50];

  printf("Enter name of contact to search for: ");
  scanf("%s", nameToSearch);

  fseek(file, 0, SEEK_SET);

  searchContactRecursive(file, nameToSearch);
}

int main() {
  FILE *file = fopen("phonebook.dat", "r+");

  if (file == NULL) {
    file = fopen("phonebook.dat", "w+");
  }

  int choice;

  do {
    printf("Phonebook Menu\n");
    printf("1. Add contact\n");
    printf("2. Delete contact\n");
    printf("3. Search contact with name\n");
    printf("4. Search contact wth number\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        addContact(file);
        break;
      case 2:
        deleteContact(file);
        break;
      case 3:
        searchContact(file);
        break;
      case 4:
        break;
      default:
        printf("Invalid choice!\n");
    }
  } while (choice != 4);

  fclose(file);

  return 0;
}
