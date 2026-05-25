#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "banking.h"

Account* hashTable[TABLE_SIZE];

void initTable() {
    for(int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = NULL;
    }
}

int hashFunction(int accountNumber) {
    return accountNumber % TABLE_SIZE;
}

void addAccount(int accountNumber, char name[], float balance) {

    int index = hashFunction(accountNumber);

    Account* newAccount = (Account*)malloc(sizeof(Account));

    if(newAccount == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newAccount->accountNumber = accountNumber;
    strcpy(newAccount->name, name);
    newAccount->balance = balance;

    // Insert at head
    newAccount->next = hashTable[index];
    hashTable[index] = newAccount;

    printf("Account created successfully!\n");
}

Account* searchAccount(int accountNumber) {

    int index = hashFunction(accountNumber);

    Account* current = hashTable[index];

    while(current != NULL) {

        if(current->accountNumber == accountNumber) {
            return current;
        }

        current = current->next;
    }

    return NULL;
}

void deposit(int accountNumber, float amount) {

    Account* account = searchAccount(accountNumber);

    if(account == NULL) {
        printf("Account not found!\n");
        return;
    }

    account->balance += amount;

    printf("Deposit successful!\n");
    printf("Updated Balance: %.2f\n", account->balance);
}

void withdraw(int accountNumber, float amount) {

    Account* account = searchAccount(accountNumber);

    if(account == NULL) {
        printf("Account not found!\n");
        return;
    }

    if(account->balance < amount) {
        printf("Insufficient balance!\n");
        return;
    }

    account->balance -= amount;

    printf("Withdrawal successful!\n");
    printf("Remaining Balance: %.2f\n", account->balance);
}

void transfer(int senderAcc, int receiverAcc, float amount) {

    Account* sender = searchAccount(senderAcc);
    Account* receiver = searchAccount(receiverAcc);

    if(sender == NULL || receiver == NULL) {
        printf("Invalid account details!\n");
        return;
    }

    if(sender->balance < amount) {
        printf("Insufficient balance for transfer!\n");
        return;
    }

    sender->balance -= amount;
    receiver->balance += amount;

    printf("Transfer successful!\n");
}

void displayAll() {

    printf("\n===== ALL ACCOUNTS =====\n");

    for(int i = 0; i < TABLE_SIZE; i++) {

        Account* current = hashTable[i];

        while(current != NULL) {

            printf("Account No: %d\n", current->accountNumber);
            printf("Name: %s\n", current->name);
            printf("Balance: %.2f\n", current->balance);
            printf("-------------------------\n");

            current = current->next;
        }
    }
}