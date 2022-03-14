/*
    County Library System
    By Trappy
    7th feb 2022
    MIT license
    C99 Compiler
*/
#include <stdio.h>
#include <stdlib.h>
struct patron{

    char name[100];
    char email[50];
    char password[30];
    int is_staff;

    };

void execute_action(int action);
void add_patron()
    {
        struct patron patron;
    printf("enter name: ");
    getchar();
    gets(patron.name);
    printf("enter email");
    gets(patron.email);
    printf("enter initial password: ");
    gets(patron.password);
    printf("enter 1 if staff 0 otherwise: ");
    scanf("%d",&patron.is_staff);
    printf("Patron %s successfully added\n",patron.name);


}



int menu(){
    int action;
        printf("Select An Action Below...\n");
        printf("1. Add New Patron\n");
        printf("2. View All Patrons\n");
        printf("3. Add New Resources\n");
        printf("4. View All Resources\n\n");
        printf("Your Selection: \n");
        scanf("%d", &action);
        if (action < 1 || action > 4){
            printf("Invalid Action. Try Again!\n\n");
        }
        return action;
}

void execute_action(int action) {
    switch (action) {
    case 1:
        add_patron();
        break;
    case 2:
        printf("Here is the list of Patron\n");
        break;
    case 3:
        printf("Adding New Resources\n");
        break;
    case 4:
        printf("Here Is the list of Resources\n");
        break;
    default:
        printf("Wrong Entry\n");

    }

}

int main(){
    int action;
    char title[100] = "COUNTY LIBRARY SYSTEM";
    char status[100] = "Welcome Weston";
    printf("\n\n\n\t\t\t   *********************\n\t\t\t%s\n \t\t\t    %s\n\t\t\t   ********************\n\n", title, status);
    action = menu();
    execute_action(menu());
    return 0;
}
