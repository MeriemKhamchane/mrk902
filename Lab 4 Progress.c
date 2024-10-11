#include <stdio.h>

int main() {
    int selection;
    int coffee_selection;
    int admin_password;
    int admin_selection;

    while(1) {
        printf("Welcome!\n1. User mode\n2. Admin mode\n3. End application\n");
        if (scanf("%d", &selection) != 1) { // Check if scanf was successful
            printf("You inputted an invalid value\n");
            while(getchar() != '\n'); // Consume the invalid input
            continue; // Go back to the beginning of the loop
        }

        switch (selection) {
            case 1:
                printf("MENU:\n1. Espresso      3.5 AED\n2. Cappucino     4.5 AED\n3. Mocha         5.5 AED\n4. Exit\n");
                scanf("%d", &coffee_selection);

                switch (coffee_selection) {
                    case 1:
                        printf("You selected Espresso\n");
                        break;
                    case 2:
                        printf("You selected Cappucino\n");
                        break;
                    case 3:
                        printf("You selected Mocha\n");
                        break;
                    case 4:
                        break;
                    default:
                        printf("You inputted an invalid value\n");
                }
                break;

            case 2:
                int valid_password = 0; 
                while(valid_password == 0) { 
                    printf("Enter admin password:");
                    scanf("%d", &admin_password);
                    getchar(); 
                    if (admin_password == 12345678) {
                        valid_password = 1; 
                        printf("MENU:\n1. Check pantry and sales\n2. Replenish ingredients\n3. Change coffee price\n4. Exit\n");
                        scanf("%d", &admin_selection);
                        switch (admin_selection) {
                            case 1:
                                printf("Checking pantry and sales...\n");
                                break;
                            case 2:
                                printf("Replenishing ingredients...\n");
                                break;
                            case 3:
                                printf("Changing coffee price...\n");
                                break;
                            case 4:
                                printf("Exiting the application...\n");
                                return 0;
                                break;
                            default:
                                printf("You inputted an invalid value\n");
                        }
                        valid_password = 0; // reset the flag
                    } else {
                        printf("Incorrect password\n");
                        valid_password = 0; // reset the flag
                        break; // break out of the inner while loop
                    }
                }
                break;

            case 3:
                printf("Exiting application...\n");
                return 0;

            default:
                printf("You inputted an invalid value\n");
        }
    }

    return 0;
}