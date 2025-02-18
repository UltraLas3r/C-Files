#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>


int first_method();
void second_variables_intro();
void practicing_bools();
void format_specifiers();
int arithmetic_operators();
void user_input();
void self_destruct_sequence();
void tempConversion();
int calculator_program();
void happy_birthday_function();
void ternary_operator();
void find_odd_or_even(int, int, char[]);
void function_prototypes(char[], int);
int for_loop_practice(int);
int do_while_loop_practice();
int nested_for_loops();
int break_vs_continue();
int array_practice_one();


int main(){
    //first_method();
    //second_variables_intro();
    //practicing_bools();1
    //format_specifiers();
    // arithmetic_operators();
    //user_input_addressOfOperator();
    //if_statement_practice();
    //char grade = 'a';
    //switch_case_practice(grade);
    //temp_conversion();
    //calculator_program();
    // for (int i = 1; i <= 4; ++i)
    // {
    //     int value = i;
    //     happy_birthday_function(value);
    // }
    // ternary_operator();

    int bro = 1;
    int sef = 96;
    char value[]= "odd";

    //find_odd_or_even(bro, sef, value);
    //function_prototypes("Mike", 29);
    //for_loop_practice(22);
    // while_loop_practice();
    // do_while_loop_practice();
    nested_for_loops();
    //reak_vs_continue();
    //array_practice_one();

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
   bool destruct = false;

    switch(grade){
        case 'A':
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
        printf("\n\nINVALID GRADE (>>>%c<<<), INITIATE SELF DESTRUCT\n\n", grade);
        break;

    }

    

    if (destruct == true){
            
            destruct = true;

            for (int i = 1; i <= 100; ++i) {
                self_destruct_sequence(i);
                usleep(50000); // Sleep for 50 milliseconds to simulate progress
                
                
                if (i == 100){
                    printf ("\n\nBOOM");
                }
            }
            
            printf("\n");
            return;
        }

    printf(statement);
}

void self_destruct_sequence(int percentage)
    {
        #define BAR_WIDTH 50

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

int temp_conversion(){


    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);

        temp = (temp * (9/5) + 32);
        
        printf("It is %.1f degrees Farenheit", temp);
        
    }

    else if (unit == 'F')
    {
        printf("Enter temperature in Farenheit: ");
        scanf("%f", &temp);

        temp = ((temp - 32) * 5) / 9;
        printf("Temp unit type is Fahrenheit:\n");
        printf("It is %.1f degrees Celsius", temp);
    }

   
   else 
    {
        printf("\n UNIT IS UNDEFINED \n");
        temp_conversion();
    }
 
}

int calculator_program(){
    char operator; // multiply, divide, add, subtract
    double num1;
    double num2;
    double result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("%d\n", num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("%d\n", num2);

    printf("enter the symbol for the operation you would like to perform\n");
    printf("multiply (*)  divide (/)  add(+)  subtract(-): ");
    scanf(" %c", &operator);

    switch (operator){
        case '*':
            result = num1 * num2;
            printf("\n%d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("\n%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '+':
            printf("%d ===> num1\n", num1);
            printf("%d ===> num2\n", num2);
            result = num1 + num2;
       
            printf(" %d result", result);
            
            break;

        case '-':
            result = num1 - num2;
            printf("\n%d - %d = %d\n", num1, num2, result);
            break;

        default:
            printf("invalid input try again");
            break;
    }
    
    return 0;
}

void happy_birthday_function(int value){
    int verse = value;
    if (verse == 3)
    {
        printf("Happy Birthday dear... YOU\n");
    }

    else if (verse == 1 || verse == 2 || verse == 4)
    {
        printf("Happy Birthday to you\n");
    }    
}

int findMax(int x, int y){
    int _x = x;
    int _y = y;
   
    return (_x > _y) ? _x : _y;
}

void ternary_operator()
{
    // (condition) ? value if true : value if false ;

    int max = findMax(75,34);

    printf("%d", max);
}

void find_odd_or_even(int xx, int yyy, char value[])
{
    //print all odd or even values between x and y 
    // printf("%d\n", xx);
    // printf("%d\n", yyy);
    // printf("%s", value);

    for (int i = 0; i < yyy; i++){
        if ((strcmp(value, "odd") == 0 && i %2 == 1))
            {
                printf("%d ", i);
            }
       if ((strcmp(value, "even") == 0 && i %2 == 0))
            {
                printf("%d ", i);
            }
    }
}

void function_prototypes(char name[], int age){
    //  a function prototype Ensures that a call to a function is made with the correct arguments
    // you put the prototype at the top of the script.

    //char name_value[25];
    char age_value;  

    //name_value[25] = name;
    age_value = age;

    printf("Hello %s, you are %d years old!", age_value);


}

int for_loop_practice(int index)
{
    for(int i = 1; i <= index; i++)
    {
        printf("test %d\n", i+=4);
    }

    return 0;
}

int while_loop_practice(){
    //repeat a section of code, possibly unlimited times, WHILE some condition is/remains true, it may never execute, or it could execute infinitely
    //Checks for a condition, THEN executes the block of code.

    char name[30];

    printf("Whats ur name?: ");
    fgets(name, 30, stdin); // this will assign the variable name (with a size of 30 bits) with the standard input from the user.

    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0){
        printf("You entered nothing, try again");

        printf("Whats ur name?: ");
        fgets(name, 30, stdin); 

        name[strlen(name) - 1] = '\0';

    }

    printf("Hello %s", name);

    return 0; 

}

int do_while_loop_practice()
{
    // always executes a block of code ONCE, then checks a condition.
    int number = 0;
    int sum = 0;

    do 
    {
        printf("Enter a number > 0: ");
        scanf("%d", &number);
        
        sum += number;
    } while (number > 0);

    printf("sum: %d", sum);
    return 0; 
}

int nested_for_loops(){
    return 0;
}

int break_vs_continue(){
    return 0;
}

int array_practice_one(){

    return 0;
}