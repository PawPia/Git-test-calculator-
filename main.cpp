#include <iostream>

float first_number, second_number;
int option;

void menu(){

    printf("Simple calculator\n\n");
    printf("Pick an option: \n");
    printf("1.Sum\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("0. EXIT\n");
    scanf("%d", &option);
}

void insertingNumbers(){
    printf("Insert first number\n");
    scanf("%f", &first_number);
    printf("Insert second number\n");
    scanf("%f", &second_number);
}
int main() {
    do{
        float result;
        menu();
    switch(option){
        case 1:
            printf("###Sum###\n\n");
            insertingNumbers();
            result = first_number + second_number;
            printf("%f\n\n", result);
            break;

        case 2:
            printf("###Subtraction###\n\n");
            insertingNumbers();
            result = first_number - second_number;
            printf("%f\n\n", result);
            break;
        case 3:
            printf("###Multiplication###\n\n");
            insertingNumbers();
            result = first_number * second_number;
            printf("%f\n\n", result);
            break;
        case 4:
            printf("###Division###\n\n");
            insertingNumbers();
            result = first_number / second_number;
            printf("%f\n\n", result);
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
