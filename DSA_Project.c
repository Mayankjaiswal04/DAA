#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100

typedef struct {
    int id;
    char name[256];
    int quantity;
} Item;

Item inventory[MAX_ITEMS];
int itemCount = 0;

void addItem(int id, const char* name, int quantity) {
    if (itemCount < MAX_ITEMS) {
        inventory[itemCount].id = id;
        strcpy(inventory[itemCount].name, name);
        inventory[itemCount].quantity = quantity;
        itemCount++;
    } else {
        printf("Inventory full, cannot add more items.\n");
    }
}

void deleteItem(int id) {
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == id) {
            for (int j = i; j < itemCount - 1; j++) {
                inventory[j] = inventory[j + 1];
            }
            itemCount--;
            return;
        }
    }
    printf("Item not found.\n");
}

void displayInventory() {
    printf("Inventory:\n");
    for (int i = 0; i < itemCount; i++) {
        printf("ID: %d, Name: %s, Quantity: %d\n", inventory[i].id, inventory[i].name, inventory[i].quantity);
    }
}

int main() {
    int id, quantity;
    char name[256];
    char choice;
    int add_item;
    do {
        printf("Enter item ID: ");
        scanf("%d", &id);
        printf("Enter item name: ");
        scanf("%s", name);
        printf("Enter item quantity: ");
        scanf("%d", &quantity);

        addItem(id, name, quantity);

        printf("Do you want to add another item? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    displayInventory();

    printf("Enter the ID of the item to delete: ");
    scanf("%d", &id);
    deleteItem(id);

    displayInventory();

    return 0;
}
