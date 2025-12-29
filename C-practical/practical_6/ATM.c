#include <stdio.h>
int main() {
    // ansh kumar_10233
    int originalPin, enteredPin;
    int attempts = 3;
    int success = 0;
    printf("Set your ATM PIN: ");
    scanf("%d", &originalPin);
    printf("\n--- PIN SET SUCCESSFULLY ---\n\n");
    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your PIN to login: ", i);
        scanf("%d", &enteredPin);

        if (enteredPin == originalPin) {
            printf("\nAccess Granted! Welcome back.\n");
            success = 1;
            break;
        } else {
            if (i < attempts) {
                printf("Incorrect PIN. Try again.\n\n");
            } else {
                printf("\nAccess Denied. You have used all 3 attempts.\n");
            }
        }
    }
    return 0;
}
// Set your ATM PIN: 1452

// --- PIN SET SUCCESSFULLY ---

// Attempt 1: Enter your PIN to login: 1254
// Incorrect PIN. Try again.

// Attempt 2: Enter your PIN to login: 1879
// Incorrect PIN. Try again.

// Attempt 3: Enter your PIN to login: 1452

// Access Granted! Welcome back.