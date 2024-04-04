#include <iostream>

int main() {
    int option;
    printf("Simple calculator\n\n");
    printf("Pick an option: \n");
    printf("1.Sum\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("0. EXIT\n");
    scanf("%d", &option);
do{
    switch(option){
        case 1:
            printf("###Sum###");
            break;

        case 2:
            printf("###Subtraction###");
            break;
        case 3:
            printf("###Multiplication###");
            break;
        case 4:
            printf("###Division###");
            break;
        default:
            printf("Pick a right option !!!\n\n");
    }
} while (option!= 0);
printf("THE END !!!");
    return 0;
}
