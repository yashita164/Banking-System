#ifndef BANKING_H
#define BANKING_H

#define TABLE_SIZE 10

typedef struct Account {
    int accountNumber;
    char name[50];
    float balance;
    struct Account* next;
} Account;

extern Account* hashTable[TABLE_SIZE];

// Function declarations
void initTable();
int hashFunction(int accountNumber);

void addAccount(int accountNumber, char name[], float balance);
Account* searchAccount(int accountNumber);

void deposit(int accountNumber, float amount);
void withdraw(int accountNumber, float amount);
void transfer(int senderAcc, int receiverAcc, float amount);

void displayAll();

#endif