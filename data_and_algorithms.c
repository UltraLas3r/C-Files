#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>


int malloc_practice();
int dynamic_array();
int simple_array_practice();

int main(){
    //malloc_practice();
    //dynamic_array();
    simple_array_practice();

    return 0;
}

int malloc_practice(){
    // reserves a size of memory 

    //size --> how do we determine size?
        // if you want to store 10 integers, the size of your malloc must be 40. one int = 4 bites, 
        printf("each data type needs a different amount of space on the stack ");
        printf("FOR 10 integers you need : %lu  \n", sizeof(int) * 10);

    malloc(40);

    // you could use a void pointer... this is not a great practice.
    void* void_array = malloc(40); 

    //or dynamically assign it using the sizeof(int) expression... change the type of the variable 

    int* array = malloc(sizeof(int) * 10);

    if (array == NULL){
        printf("MEMORY ALLOCATION FAILED!");
        return 1; 
    }

  

    //lets assign and read some data!
    for (int i = 0; i < 10; i++)
        {
            //assign..
            array[i] = i;
            
           
            
            printf("\n ~~~ ");
            printf("%d", array[i]);
            
        }

       
    
        printf("\n");

        //at te end of the function call you must free up the space you assigned. (dont forget to check for null )
        free(array);

    return 0;
    }


int dynamic_array(){
    //create a count variable,
    
    int count = 0;
    int size = 10;
    //initialize an array
    int* array1 = malloc(sizeof(int) * size);

    //lets say we want to add an 11th element to the original array
    size *= 2;
    //initialize a new array by reallocating memory to the new array (array2) and re-building the memalloc using the new value using the realloc() function. 
    int* array2 = realloc(array1, sizeof(int) * size);

    //by assigning to a different variable, we can check to see if the realloc was successful.

    if(array2 == NULL)
        {
            printf("NEW MEMORY ALLOCATION FAILED!!");
            return 1;
        } 
    
    else 
        {
            array1 = array2;
        }

    for (int i = 0; i < count ; i++)
        {
            //assign..
            array1[i] = i;
            count++;

        }

        for(int i = 0; i < count; i++)
        {
            printf("\n ~~~ ");
            printf("%d", array1[i]);
        }

}

 int simple_array_practice()
 {
    

    char *carMake[] = {"Jeep", "Ford", "Kia"};
    
    printf("%s\n", carMake[0]);
    printf("%s\n", carMake[1]);
    printf("%s\n", carMake[2]);

    int array1[] = {1,4,6,3,2,22};

    printf("%d", array1[0]);
    printf("%d", array1[1]);
    printf("%d", array1[2]);
    printf("%d", array1[3]);
    printf("%d", array1[4]);
    printf("%d", array1[5]);
    
    printf("~~~~~~~~~~~~~~~~~~");

    //required to iterate through the length of an array
    int size = sizeof(array1)/sizeof(array1[0]);

    for (int i = 0; i < size; i++){
        printf("\n%d", array1[i]);
    }

    
    


    return 0;
 }