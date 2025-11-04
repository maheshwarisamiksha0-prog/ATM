#include <stdio.h>

int main() {
    int pin = 1234, enteredPin, option;
    float balance = 5000.0, amount;

    printf("==== Welcome to ATM System ====\n");
    
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Wrong PIN! Access Denied.\n");
        return 0;
    }

    do {
        printf("\n==== ATM Menu ====\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Your current balance: %.2f\n", balance);
                break;
            
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= amount;
                    printf("Withdraw successful! Current balance: %.2f\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful! Current balance: %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using ATM!\n");
                break;

            default:
                printf("Invalid option! Try again.\n");
        }

    } while (option != 4);

    return 0;
}
