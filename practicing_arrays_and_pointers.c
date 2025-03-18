#include <stdio.h>


int main()

{
   float arrayOfFloats[12] = {6.78, 1.23, 14.56, 19.45, 3.45, 12.34, 5.67, 17.89, 8.90, 2.34, 13.56, 11.22};

   float *pValue = arrayOfFloats;

   printf("value at pointer:");

   for (int i = 0; i < 12; i++){
     
     printf("\n %.2f", pValue[i]);
    
   }

    return 0;
}

int variable_length_array()
{
    //still a fixed size, but you can use a variable to specify the size of the array when it is created.


}