#include <stdio.h>


void start_program();
int add_values_to_list(int list[]);

int i = 0;

int main()
{
    int test_list[10] = {43, 44, 2, 86, 3829, 44};
    printf("length = %d ", (get_list_length(test_list)));
    printf("length = %d ", (get_list_length(test_list)));
    printf("length = %d ", (get_list_length(test_list)));
   
   // start_program();
    

    return 0;
}

void start_program()
{
    int numbers[5]; // Initialize the array with a size of 5
    printf("Hello \nYour list has 5 empty buckets \nPlease enter 5 random numbers in any order:\n");

    

    for ( i; i < 5; ++i) {
        printf("%d. ", i + 1);
        while (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input. Please enter a number: ");
            while(getchar() != '\n'); // Clear the input buffer
        }
    }
    printf(" ~~~ YOU CHOSE THE FOLLOWING NUMBERS ~~~ \n\n");
    
    add_values_to_list(numbers); 
    

}


int add_values_to_list(int list[]){

    for (i = 0; i < 4; i++ )
    {
        printf("Item %d: %d .. added to list\n", i+1, list[i+1]);
        
    }

    printf("");
    organize_list_contents_big_to_small(list);

    return 0;
}

int print_list_items(int list[]){

    for (i = 0; i < 4; i++ )
    {
        printf("Item %d: %d\n", i, list[i]);
        
    }

    return 0;
}

int organize_list_contents_big_to_small(int list[]){
    int temp_number;

    printf("%d", get_list_length(list));
    printf("%d", get_list_length(list));
    printf("%d", get_list_length(list));
    printf("%d", get_list_length(list));



    for (i = 0; i < get_list_length(list); i++ )
    {



    }


    return 0;
}

int organize_list_contents_small_to_big(){


    return 0;
}

int alphabetize_list_contents()
{


    return 0;
}

int get_list_length(int list[])
{
    int size_of_array = sizeof(list) / sizeof(list[0]);

    


    return size_of_array;
}