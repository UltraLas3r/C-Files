#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int weather_arrays();

int main()
{
    weather_arrays();
    return 0;
}


#define MONTHS 12
#define YEARS 5

int weather_arrays()
{
    float rain[5][12] =
        {
            {4.23, 3.98, 8.47, 6.54, 1.34, 7.89, 1.23, 9.45, 0.56, 1.78, 5.34, 7.89},
            {1.34, 4.56, 5.67, 3.45, 9.87, 2.34, 6.78, 7.89, 1.23, 3.56, 6.78, 8.90},
            {1.22, 5.67, 2.34, 8.90, 4.56, 9.78, 3.45, 7.89, 2.34, 4.56, 7.89, 1.12},
            {6.78, 1.23, 4.56, 9.45, 3.45, 2.34, 5.67, 7.89, 8.90, 2.34, 1.56, 1.22},
            {9.87, 0.56, 8.47, 6.54, 1.67, 1.23, 1.78, 4.56, 1.45, 7.89, 3.45, 1.78}
        };

    printf("RAINFAIL VALUES: \n \n");

    int year, month;
    float subtot, total;

    for (year = 0, total=0; year < YEARS; year++)
    {
        printf("Year \t RAINFALL (inches)\n");

        for (month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += rain[year][month];
        }

        printf("%5d\t%15.1f\n", (2010 + year), subtot);

        total += subtot;
    }
  
    printf("\n YEARLY AVERAGE: \t %f", total/YEARS);
    printf("\n\n");
    printf(" Monthly Averages: \n");
    printf("  JAN  FEB   MARCH  APRIL  MAY  JUNE  JULY  AUG   SEPT   OCT  NOV   DEC\n ");

    for (month = 0; month < MONTHS; month++)
    {
        for(year = 0, subtot = 0; year < YEARS; year++)
        {
            subtot += rain[year][month];
        }
            

        printf("%4.1f  ", subtot/YEARS);
    }
  
   

    return 0;
}

int array_arrithmetic()
{
 
}