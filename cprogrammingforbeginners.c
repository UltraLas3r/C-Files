# include <stdio.h>
# include <stdbool.h>

int  playing_with_arrays();
int playing_with_pointers1();
int initializing_an_array();
int print_prime_numbers();
int multi_dimensional_arrays();
int  more_array_stuff();

int main(){

    // char typeOfArray[15] = "numbers";
    // playing_with_arrays1(typeOfArray, 33);
    // playing_with_pointers1();
    // initializing_an_array();
   // print_prime_numbers();
   // multi_dimensional_arrays();
    more_array_stuff();
    
    return 0;

}

int   playing_with_arrays1(char type[], int value)
    {    
        int grades[10]; //array to store 10 values of grades
        int count = (sizeof(grades) / sizeof(grades[0])); // number of values to be read. This is flexible
        long sum = 0; 
        float average = 0.0f;

        printf("\n\n Enter the 10 grades: \n");
        
        for(int i = 1; i < count + 1; i++)
            {
                printf("%d. ", i);
                scanf("%d", &grades[i-1]);
            }

        printf("FINAL ARRAY == {");

        for (int i = 0; i < count; i++)
            {
                if(i < count - 1)
                    {
                        printf("%i, ", grades[i]);
                    }
                else  
                    {
                        printf("%i", grades[i]);
                    }            
                    sum += grades[i];
            }

        printf("}");

        average = (float)sum/count;  //we're casting these two different variable types to a float. sum is originally a long, and count is an int. 

        printf("\n\n CLASS AVERAGE : %.3f", average);

        return 0;
    }

int initializing_an_array()
    {
        int counters[20] = {44, 45, 81, 1, 4};
        printf("Values: {");
        for (int i = 0; i < 8; i++)
        {
            
           printf("%d, ", counters[i]);
        }

        printf("}");

            return 0;
    }

int print_prime_numbers()
{
    int p;
    int i;

    int primes[50]= {0};
    int primeIndex = 2;

    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 100; p = p + 2)
    {
        isPrime = true;

        for(i = 1; isPrime && (p / primes[i]) >= primes[i]; ++i)
            {
                if (p % primes[i] == 0)
                    { 
                        isPrime == false;
                    }                
            }

            if (isPrime == true)
                {
                    primes[primeIndex] = p;
                    ++primeIndex;
                    
                }
                
    }

        for (i = 0; i < primeIndex; ++i)
        {
          
            printf("%i ", primes[i]);
            
        }
   
    return 0;
}

int multi_dimensional_arrays()
{
    int number_array[2][3] =
        {   {44, 35, 23}, 
            {11, 76, 32}
        };

        printf("{%d, ", number_array[0][0]);
        printf("%d, ", number_array[0][1]);
        printf("%d }\n", number_array[0][2]);

        

    printf("Change value in array: ");
    scanf("%d", &number_array[0][1]);

    printf("{%d, ", number_array[0][0]);
    printf("%d, ", number_array[0][1]);
    printf("%d }", number_array[0][2]);
}

int more_array_stuff(){

    //you can use subscripts to initialize. unspecified elements are set to 0 by default. 
    // this array has 4 rows and 3 columns
    int array_matrix[4][3] = {[0][0] = 1, [1][0] = 44, [2][0] = 8, [3][0] = 981};

    for (int i = 0; i <=3; i++)
        {
         printf("print value %d of array: %d \n", i, array_matrix[i][0]);
        }
   
        return 0;
}


int playing_with_pointers1()
{




    return 0; 
}