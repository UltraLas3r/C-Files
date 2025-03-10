# include <stdio.h>



int   playing_with_arrays();
int playing_with_pointers1();

int main(){

    char typeOfArray[15] = "numbers";
    playing_with_arrays1(typeOfArray, 33);
    playing_with_pointers1();
    

}

int   playing_with_arrays1(char type[], int value)
    {    
        int grades[10];
        int count = (sizeof(grades) / sizeof(grades[0]));
        long sum = 0;
        float average = 0.0f;

        printf("\n \n Enter the 10 grades: \n");
        for(int i = 1; i < count + 1; i++)
        {
            printf("%d. ", i);
            scanf("%d", &grades[i-1]);

            


        }

        printf("FINAL ARRAY == {");

        for (int i = 0; i < count; i++)
        {
            if(grades[i] < count)
            {
                printf("%i, ", grades[i]);
            }
            else if (grades[i] == count) {
                printf("%i", grades[i]);
            }            
        }

        printf("}");

        return 0;
    }


int playing_with_pointers1()
{



    return 0; 
}