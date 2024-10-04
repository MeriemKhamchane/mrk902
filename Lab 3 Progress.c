// Online C compiler to run C program online
#include <stdio.h>

int admin_password;
int main() {
    
    printf("Welcome!\n1. User mode\n2. Admin mode\n");
    int selection;
    int coffee_selection;
    scanf("%d", &selection);
    if (selection == 1){
        printf("MENU:\n1. Espresso      3.5 AED\n2. Cappucino     4.5 AED\n3. Mocha         5.5 AED\n4. Exit\n");
        scanf("%d",&coffee_selection);
    }
    else if (selection == 2){
        printf("Enter admin password:");
        scanf("%d", &admin_password);
        if (admin_password == 12345678)
        printf("MENU:\n1. Check pantry and sales\n2. Replenish ingredients\n3. Change coffee price\n4. Exit");
    
        else
        printf("Incorrect password entered please try again");
    }
}

///// different statment code

#include <stdio.h>

int admin_password;
int main() {
    
    printf("Welcome!\n1. User mode\n2. Admin mode\n");
    int selection;
    scanf("%d", &selection);

    if (selection == 1) {
        while (1){
            printf("MENU:\n1. Espresso      3.5 AED\n2. Cappucino     4.5 AED\n3. Mocha         5.5 AED\n4. Exit\n");
            int coffee_selection;
            scanf("%d",&coffee_selection);
            if (coffee_selection == 4) {
                break;
            }
            // Add code to handle coffee selection here
        }
    } else if (selection == 2) {
        while (1){
            printf("Enter admin password:");
            scanf("%d", &admin_password);
            if (admin_password == 12345678) {
                while (1) {
                    printf("MENU:\n1. Check pantry and sales\n2. Replenish ingredients\n3. Change coffee price\n4. Exit");
                    int admin_selection;
                    scanf("%d", &admin_selection);
                    if (admin_selection == 4) {
                        break;
                    }
                    // Add code to handle admin selection here
                }
                break;
            } else {
                printf("Incorrect password entered please try again\n");
            }
        }
    }

    return 0;
}