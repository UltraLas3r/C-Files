#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h> 

int first_method();
void second_variables_intro();
void practicing_bools();
void format_specifiers();
int arithmetic_operators();
void user_input();
void self_destruct_sequence();

int main(){
    
   
    //first_method();
    //second_variables_intro();
    //practicing_bools();

    //format_specifiers();
    // arithmetic_operators();
    //user_input_addressOfOperator();
    //if_statement_practice();

    char grade = 'a';
    switch_case_practice(grade);


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

}

int arithmetic_operators(){
    int x = 5;
    int y = 2;

    float z = x/(float)y;

    printf("%.2f", z);

    return 0;
}

void user_input_addressOfOperator(){
    char name[25];
    int age;

    // scanf ONLY reads up until any whitespace, so if a user types in "First Name" the program will only read "First"
    // fgets is the function to solve that problem, it requires (nameOfVariable, length, stdin). the stdin call means "standard input" 

    printf("How Old are you: ");
    scanf("%d", &age); // the & is the "address of" operator. this says "get user input and assign it to the age variable"
    printf("\nWhat is your name: ");
    fgets(name, 25, stdin); 
    //scanf("%s", &name);

    printf("\nHello %s, how are you?", name);
    printf("\nyou are %d years old", age);

    return 0;
}

void if_statement_practice(){
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n You are %d years old,", age);

    if (age < 18){
        printf("\n You are a minor");
    }

    else if (age < 0) {
        printf("YOU HAVENT BEEN BORN YET LOL");
    }

    else {
        printf("\n You are an adult.");
    }







}


void switch_case_practice(char grade){
   const char* statement;
   bool destruct;

    switch(grade){
        case 'A' || 'a':
        statement = "Youre a rockstar!";
        break;

        case 'B':
        statement = "try harder";
        break;

        case 'C':
        statement = "better luck next year";
        break;

        default:
        statement = "invalid grade";
        destruct = true;
        break;

    }

    //printf("INVALID GRADE (%s), INITIATE SELF DESTRUCT", grade);

    if (destruct == true){

        

        for (int i = 1; i <= 100; ++i) {
            self_destruct_sequence(i);
            usleep(50000); // Sleep for 50 milliseconds to simulate progress
        }
        
        printf("\n");
        return;
    }

    printf(statement);
}


#define BAR_WIDTH 50

void self_destruct_sequence(int percentage)
    {
        int filled_length = (percentage * BAR_WIDTH) / 100;
        int empty_length = BAR_WIDTH - filled_length;

        printf("\rSELF DESTRUCT SEQUENCE: [");

        for (int i = 0; i < filled_length; ++i) {
            printf("#");
        }
        for (int i = 0; i < empty_length; ++i) {
            printf(" ");
        }

        printf("] %d%%", percentage);
        fflush(stdout);

    }