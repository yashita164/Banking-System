#include <stdio.h>
#include "banking.h"

int main() {

    int choice;
    int accNo, sender, receiver;
    char name[50];
    float amount;

    initTable();

    while(1) {

        printf("\n===== BANKING SYSTEM =====\n");
        printf("1. Add Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Transfer\n");
        printf("5. Search Account\n");
        printf("6. Display All Accounts\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                printf("Enter Name: ");
                scanf("%s", name);

                printf("Enter Initial Balance: ");
                scanf("%f", &amount);

                addAccount(accNo, name, amount);

                break;

            case 2:

                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);

                deposit(accNo, amount);

                break;

            case 3:

                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                withdraw(accNo, amount);

                break;

            case 4:

                printf("Enter Sender Account Number: ");
                scanf("%d", &sender);

                printf("Enter Receiver Account Number: ");
                scanf("%d", &receiver);

                printf("Enter Amount: ");
                scanf("%f", &amount);

                transfer(sender, receiver, amount);

                break;

            case 5: {

                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                Account* account = searchAccount(accNo);

                if(account != NULL) {

                    printf("\nAccount Found!\n");
                    printf("Name: %s\n", account->name);
                    printf("Balance: %.2f\n", account->balance);

                } else {

                    printf("Account not found!\n");
                }

                break;
            }

            case 6:

                displayAll();

                break;

            case 7:

                printf("Exiting Program...\n");
                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}