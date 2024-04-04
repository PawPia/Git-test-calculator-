#include <iostream>
#include "menu.h"

float first_number, second_number;
float result;

void menu(){

    printf("Simple calculator\n\n");
    printf("Pick an option: \n");
    printf("1.Sum\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("0. EXIT\n");

}

void insertingNumbers(){
    printf("Insert first number\n");
    scanf("%f", &first_number);
    printf("Insert second number\n");
    scanf("%f", &second_number);
}

void sum(){
    printf("###Sum###\n\n");
    insertingNumbers();
    result = first_number + second_number;
    printf("Your result is :\n%f\n\n", result);
}

void subtraction(){
    printf("###Subtraction###\n\n");
    insertingNumbers();
    result = first_number - second_number;
    printf("Your result is :\n%f\n\n", result);
}
void multiplication(){
    printf("###Multiplication###\n\n");
    insertingNumbers();
    result = first_number * second_number;
    printf("Your result is :\n%f\n\n", result);
}
void division(){
    printf("###Division###\n\n");
    insertingNumbers();
    result = first_number / second_number;
    printf("Your result is :\n%f\n\n", result);
}