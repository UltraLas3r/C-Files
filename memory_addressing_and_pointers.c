#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int memory_addressing(){
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person?)
    // memory address = the address of where a memory block is located (house address)
 
    //how many bytes do the different data types use? char, int, long, double, short, etc..
    //what happens if you put a short into an array? 
 
    char a = 'Z';
    int b = 'Y';
    short c = 'X';
    long d = 'W';
    double e = 'V';
 
    char arrayOfChars[1];
    char arrayOfInts[1];
    char arrayOfShorts[1];
    char arrayOfLongs[1];
    char arrayOfDoubles[1];
    
     
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
 
     printf("%p\n", &a);
     printf("%p\n", &b);
     printf("%p\n", &c);
 
 
     return 0;
 }
 
 int pointers_practice() {
    // a pointer is a "variable-like" reference that holds a memory address, as a value, to another variable, array, etc...
    // some tasks are performed more easily with pointers
        // less time in program execution, 
        //can create data structures - linked-list, stack, queue
        // returning more than 1 vale from functions
        // searching and sorting large data very easily
        // Dynamic memory allocation
    // * = indirection operator (value at address)(see de-referencing)

    int age = 21; // has a a value and an address
    int birthYear;

    int *pAge = &age; //the address of age (pAge) and the address of variable (age) are the same
                        // ensure that the data type of your pointer is consistent with the data type of the object it is pointing to
    
    int *pBirthYear = NULL; // if declaring a pointer and not assigning a value immediately - assign it a NULL reference. 


    printf("\n~~~~~~~\n ");
    printf("\n~~~~~~~\n");

    printf("Address of age variable: %p\n", &age);
    printf("Value of age variable: %d\n", age);

    printf("Size of age in bytes: %d\n", sizeof(age));
    printf("Size of pAge in bytes: %d\n", sizeof(pAge));

    printf("\n~~~~~~~\n ");
    printf("\n~~~~~~~\n ");
   
    printf("\nAddress variable age, %p\n", &age);
    printf("Address pointer for age, %p\n", pAge);


    printf("\n~~~~~~~\n ");
    printf("\n~~~~~~~\n ");
    //de-referencing a pointer, is basically going backwards from the memory location to the value of what is stored there

    printf("\nVALUE OF age variable:  %d\n", age);
    printf("VALUE at stored address (pAge):, %d\n", *pAge); // extracting the value AT the given address stored in pAge

    printf("\n~~~~~~~\n ");
    printf("\n~~~~~~~\n ");
    print_age(pAge);
     
     return 0;
 }

 void print_age(int *pAge){
    printf("\n\n\n\nYou are %d years old.", *pAge);
 }

 int student_list(char name[])
 {
    
    printf("%c", name);
      
 }

 int add_or_remove_student(int action, char fname[], char lname[])
 {
    //action variable. value of 1 adds, value of 0 removes.

    //requires first and last name
    // concatenates the name so there is a return variable of full name.

    //if action == 1, return concatenated string value of the full name

    //if action == 0, call the add/remove student function to remove the student from the roster


 }

 int remove_student_from_roster()
 {
    //delete student from student roster

 }


 void student_gpa_scores(){
    //a collection of student test scores
 }

 void add_or_remove_gpa(int gpa_value, char fullname[]){
    //add or remove gpa to the gpa roster
 }

 int main(){

   // memory_addressing();

    //pointers_practice();

    //student_gpa_scores();

    student_list("Jericho Bunker");


    return 0;
 }