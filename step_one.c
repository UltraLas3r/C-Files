#include <stdio.h>
#include <stdbool.h>

int first_method();
void second_variables_intro();
void practicing_bools();

int main(){
    
    //first_method();
    //second_variables_intro();
    //practicing_bools();

    format_specifiers();

    return 0; //return 0 if program runs successfully, else return 1
}

int first_method(){
    printf("This \n is \n the \n first \n method \t \t lol");

    return 0;
}

void second_variables_intro(){
    // Allocated space in memory to store a value.
    // we need to declare the type of data we are storing first...

    //always declare the variable first, then secondly initialize it. you can do that all in one step, or separately. 
    int x; // declaration
    x = 123; //initialization
    int age = 34;
    float gpa = 2.8;

    char grade = 'B';

    // c is not an OOP language, there is no string data type. you must make an ARRAY OF CHARS
    char name[] = "Miguel";

    

    printf("%s are %d years old\n", name, age);
    printf("your grade is %c,\n and your gpa is %f", grade, gpa);
}

void practicing_bools(){
    bool passing;
    char grade;

    grade = 'A';
    printf("%c", grade);

    
}

void format_specifiers(){
    // Format Specifier (%) defines and formats a type of data to be displayed
    // %.1 = decimal precision 
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("ITEM1: $%100.2f \n", item1);
    printf("ITEM2: $%8.2f \n", item2);
    printf("ITEM3: $%8.2f \n", item3);