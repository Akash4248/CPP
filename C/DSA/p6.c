#include <stdio.h>

#define TABLE_SIZE 10
#define PRIME 7

int hashTable[TABLE_SIZE];

// Initialize hash table with -1 to represent empty slots
void initialize() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1;
    }
}

// Primary and secondary hash functions
int primaryHash(int key) { return key % TABLE_SIZE; }
int secondaryHash(int key) { return PRIME - (key % PRIME); }

// Insert element into hash table
void insert(int element) {
    int key = primaryHash(element);

    // If the slot is empty, insert directly
    if (hashTable[key] == -1) {
        hashTable[key] = element;
        return;
    }

    // Resolve collision using double hashing
    for (int i = 1; i < TABLE_SIZE; i++) {
        int newKey = (key + i * secondaryHash(element)) % TABLE_SIZE;
        if (hashTable[newKey] == -1) {
            hashTable[newKey] = element;
            return;
        }
    }
    printf("Table is full, insertion failed\n");
}

// Delete element from hash table
void delete(int element) {
    int key = primaryHash(element);
    if (hashTable[key] == element) {
        hashTable[key] = -1;
        printf("Deleted %d\n", element);
        return;
    }

    // Search for element with double hashing
    for (int i = 1; i < TABLE_SIZE; i++) {
        int newKey = (key + i * secondaryHash(element)) % TABLE_SIZE;
        if (hashTable[newKey] == element) {
            hashTable[newKey] = -1;
            printf("Deleted %d\n", element);
            return;
        }
    }
    printf("%d not found\n", element);
}

// Display hash table contents
void display() {
    printf("Hash Table:\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] != -1)
            printf("Slot %d: %d\n", i, hashTable[i]);
        else
            printf("Slot %d: ~\n", i); // ~ indicates empty
    }
}

int main() {
    int choice, element;

    initialize();

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                insert(element);
                break;
            case 2:
                printf("Enter element to delete: ");
                scanf("%d", &element);
                delete(element);
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice, try again.\n");
        }
    }
}