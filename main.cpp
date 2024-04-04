#include <iostream>
#include "menu.h"

int main() {
    int option;
    do{
        menu();
        scanf("%d", &option);
    switch(option){
        case 1:
            sum();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 0:
            break;
        default:
            printf("Pick a right option !!!\n\n");
    }
} while (option!= 0);
printf("THE END !!!");
    return 0;
}
