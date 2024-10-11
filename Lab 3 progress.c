// Online C compiler to run C program online
#include <stdio.h>

int main() {

int selection;
int i=0;


while(i==0){
    printf("Welcome!\n1. User mode\n2. Admin mode\n3. End application\n");
    scanf("%d", &selection);

    while (selection==1){
        printf("MENU:\n1. Espresso      3.5 AED\n2. Cappucino     4.5 AED\n3. Mocha         5.5 AED\n4. Exit\n");
        int coffee_selection; //assign coffee selection a varible
        scanf("%d",&coffee_selection); //takes the input varible from user
        
        if(coffee_selection == 4)
            break;
            
        else if (coffee_selection == 1)
        {
            printf("You selected Espresso");
            break;
        }
        else if (coffee_selection == 2)
        {
            printf("You selected Cappucino");
            break;
        }
        else if (coffee_selection == 3)
        {
            printf("You selected Mocha");
            break;
        }
        else 
        printf("You inputted an invalid value\n");
            continue;
     } //end of loop while(selection==1)
     
     
     while (selection==2){ //admin mode selsection
        printf("Enter admin password:");
        int admin_password;
        scanf("%d", &admin_password);
        
        if (admin_password == 12345678) 
        {
            printf("MENU:\n1. Check pantry and sales\n2. Replenish ingredients\n3. Change coffee price\n4. Exit\n");
            int admin_selection;
            scanf("%d", &admin_selection);
            break;
        }
        else
        {
            printf("Incorrect password");
            break;
        }
        continue;
    } //end of loop while(selection==2)
    
    
    
    while (selection==3){
        break;
    } // end of loop (selection==3)
    break;
} //end of the while(1)
    

    return 0;
}