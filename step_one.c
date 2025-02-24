#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>


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
int variable_value_swap();
int sort_an_array();
int structs_part_one();
int typdef();
void array_of_structs();
void random_number_guessing_game();


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
    //nested_for_loops();
    //break_vs_continue();
    //array_practice_one();
    //print_array_with_loop();
    //multi_array();
    //string_array();
    // variable_value_swap();
    //sort_an_array();
    //structs_practice();
    //typdef_practice();
    // array_of_structs();
    //enums_practice();
    // random_numbers();
    random_number_guessing_game();

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

    int rows;
    int columns;
    char symbol;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);
    scanf("%c");

    for (int i = 1; i <= rows; i++)
    {
        for(int j=1; j <= columns; j++)
        {
            printf("%c", symbol);
        }

        printf("\n");
    }
    
    return 0;
}

int break_vs_continue(){
    // a continue statement will skip the rest of the code for the condition you set, and force the next iteration of the loop
    // a break statement will stop the loop entirely and not continue running the loop.

    // example for CONTINUE
    // for (int i = 1; i <= 20; i++)
    // {
    //    if (i == 13){
    //     continue;
    //    }

    //    printf("%d\n", i);

    // }

     // example for CONTINUE
     for (int i = 1; i <= 20; i++)
     {
        if (i == 13){
         break;
        }
        printf("%d\n", i); 
     }


    return 0;
}

int array_practice_one(){
    // a data structure that can store many values OF THE SAME DATA TYPE
    //they are fixed sizes and cannot change after running the program ** you cant add or remove elements in an array **

    double prices[] = {1.2, 3.5, 5.99, 25.00};

    printf("$%.2lf", prices[3]);

    return 0;
}

int print_array_with_loop(){
    // a data structure that can store many values OF THE SAME DATA TYPE
    //they are fixed sizes and cannot change after running the program ** you cant add or remove elements in an array **

    double prices[] = {1.244, 3.5, 5.99, 25.00, 33, 199.22};
    double size_of_array = sizeof(prices)/sizeof(prices[0]);


    for (int i = 0; i < size_of_array; i++){
        printf("$%.2lf \n", prices[i]);
    }
    

    return 0;
}

int multi_array(){
    //a 2D array is where each element of the array is an entire OTHER array. useful if you need a matrix, grid or table of data (row/column)
    // the numbers[][] = first  [] specifies max amout of arrays within the main array.
    //                   second [] specifies max items in each array 
    int numbers[2][3] = {{5,7,9}, {13,14,15}}; 
   
    int size_of_array = sizeof(numbers)/sizeof(numbers[0]);
    int size_of_mini = sizeof(numbers)/sizeof(numbers[0][1]);

    //printf("%d", numbers[1][2]);
    //printf("%d", size_of_array); 


    for (int i=0; i < size_of_array; i++)
        {
            for(int j=0; j < 3; j++)
            {
                printf("%d ", numbers[i][j]);
            }
            printf("\n");
        }
    
        
    return 0;
}

int string_array(){
    //in an array of strings we cannot directly change one of the values, 
    char cars[][10] = {"Gladiator", "Mustang", "Pantera"};

    //to update an individual value you must use the string copy strcpy function
    strcpy(cars[0], "Tesla");

    //printf("%s", cars[1]);
    // to print the values of the array
    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    };
}

int variable_value_swap()
{ //very useful in sorting algorithms

    char x = 'X';
    char y = 'Y';
    //to swap, create a temp variable to store a value in transit
    char temp;

    temp = y;
    y = x;
    x = temp;

    printf("X = %c\n", x);
    printf("Y = %c\n", y);

    //working with strings is a little different,
    // you may need to specify the size of the arrays to prevent unexpected behavior
    char a[8] = "soda";
    char b[8] = "water";
    char temp_value[15];

    printf("\n");
    printf("Original A == %s\n", a);
    printf("Original B == %s\n", b);

    
    printf("\n ~~~~ SWAPPING VALUES ~~~\n");
    strcpy(temp_value, a);
    strcpy(a, b);
    strcpy(b, temp_value);

    printf("\n");
    printf("A == %s\n", a);
    printf("B == %s\n", b);

}

int sort_an_array()
{
    int array[]= {6, 1, 4, 5, 6, 8, 19, 22, 4, 2};
    int size = sizeof(array)/sizeof(array[0]);

    print_array(array, size);
    sort(array, size);
    


    return 0;

}

void sort(int array[], int size)
{ 
    for(int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j+1] = temp;
            };
        };
    };

    printf("\n New Array after sorting:\n");
    print_array(array, size);
}

void print_array(int array[], int size)
{
    printf("Array : {");
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            printf("%d", array[i]);
        }
        else{
        printf("%d, ", array[i]);
        }
    }
    printf("}");

}

struct Player
{
    // struct = collection of related members ("variables")
    //          they can be different data types
    //          listed under ONE NAME in a block of memory
    //          very similar to classes in other languages (but cannot contain methods)

    //its almost like we're creating a variable that can be used over and over... see structs_practice()

    char name[25];
    int score;

};

void structs_practice(){

    struct Player player1;
    struct Player player2;
    
   strcpy(player1.name, "Michael");
   player1.score = 4;

   strcpy(player2.name, "Johan");
   player2.score = 2;

   printf("%s \n", player1.name);
   printf("%d", player1.score);
}

typedef char user[25];

typedef struct {
    char name[25];
    char password[12];
    int id;

} userStruct;

void typdef_practice(){
    // a reserved keyword that gives an existing data type a "nickname"
    // very similar to a struct but only for a specific data type, not an object

    user user1= "Bro";

    userStruct user1struct = {"Mike", "passewrd", 11122};


    printf("%s\n", user1struct.name);
    printf("%s\n", user1struct.password);
    printf("%d\n", user1struct.id);

}

struct student
{
    char name[50];
    float gpa;
    char favoriteBook[50];
};

void array_of_structs(){

    struct student student1= {"Spongebob", 3.0, ""};
    struct student student2= {"Patrick", 4.0, ""};
    struct student student3= {"Sandy", 2.0, ""};
    struct student student4= {"Squidward", 2.5, "Narnia"};

    struct student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
        {
           
            for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++) 
            {
                printf("%s (%.1f)\n", students[i].name, students[i].gpa);

                if (strlen(students[i].favoriteBook) > 0) {
                    printf("Favorite Book: %s\n", students[i].favoriteBook);
                }
            }
        }
}

int enums_practice(){
    //each enum has a number associated with it, mouseover the enum to see it's number
    // you can assign each enum a custom value if you wish, 
    enum Day{Sun = 1, Mon, Tue, Wed, Thur, Fri, Sat};

    enum Day today = Sun;
    // can be declared inside or outside of the main function
    // a user defined type of named integer identifiers to help make the program more readable
    // treated as integers

    if (today == Sun || today == Sat)
    {
        printf("Its the weekend!! party time!!");
    }

    else
    {
        printf("Today is: %d \n", today);
        printf("I have to work sadddd");
    }
}

int random_numbers(){

    srand(time(0));

    int number1 = ((rand() % 100) + 1);
    int number2 = ((rand() % 100) + 1);
    int number3 = ((rand() % 100) + 1);

    printf("Your first number is: %d \n", number1);
    printf("Your second number is: %d \n", number2);
    printf("Your third number is: %d ", number3);

}

int random_number_guessing_game(){
    srand(time(0));
    int playerGuess;
    int numberToGuess = ((rand() % 100) + 1);
    int guessCounter = 5;

    printf("Guess a number between 1 and 100");
    scanf("%d", &playerGuess);

    if (playerGuess < numberToGuess){
        printf("Too low! try again!");
        guessCounter--;
        printf("Guesses left: %d", guessCounter);
    }

    else if (playerGuess > numberToGuess)
    {
        printf("Too High! Try again!");
        guessCounter++;
    }

    else
    {
        printf("Your guess >> %d << \n ~~~!!! IS CORRECT!! !!~~~ \n");
    }

}