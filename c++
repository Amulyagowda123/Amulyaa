#include <stdio.h>

// Define a structure for bank account
struct BankAccount {
    char name[100];
    int accountNumber;
    char accountType[20];
    float balance;
};

int main() {
    struct BankAccount acc;

    // Input bank account details
    printf("Enter account holder name: ");
    fgets(acc.name, sizeof(acc.name), stdin);

    printf("Enter account number: ");
    scanf("%d", &acc.accountNumber);

    printf("Enter account type (e.g., Savings, Current): ");
    scanf("%s", acc.accountType);

    printf("Enter account balance: ");
    scanf("%f", &acc.balance);

    // Display bank account details
    printf("\n--- Bank Account Details ---\n");
    printf("Name: %s", acc.name);
    printf("Account Number: %d\n", acc.accountNumber);
    printf("Account Type: %s\n", acc.accountType);
    printf("Balance: %.2f\n", acc.balance);

    return 0;
}

