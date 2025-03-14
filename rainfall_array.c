

int weather_arrays();

int main()
{
    weather_arrays();
    return 0;
}



int weather_arrays()
{   float array_of_values[5][12] = 
    {
    {14.23, 3.98, 18.47, 6.54, 11.34, 7.89, 1.23, 19.45, 0.56, 10.78, 5.34, 17.89},
    {12.34, 4.56, 15.67, 3.45, 9.87, 2.34, 16.78, 7.89, 1.23, 13.56, 6.78, 8.90},
    {11.22, 5.67, 12.34, 8.90, 4.56, 19.78, 3.45, 17.89, 2.34, 14.56, 7.89, 10.12},
    {6.78, 1.23, 14.56, 19.45, 3.45, 12.34, 5.67, 17.89, 8.90, 2.34, 13.56, 11.22},
    {9.87, 0.56, 18.47, 6.54, 15.67, 1.23, 10.78, 4.56, 19.45, 7.89, 3.45, 16.78}
    };

    printf("RAINFAIL VALUES:\n\n");

    for(int i = 0; i <= 4; i++)
    {
        printf("Year %d", i);

        for (int j = 0; j <= 11; j++)
        {
            switch(i)
            {
                case 0:
                printf(" %.2f, ", array_of_values[i][j]);
                break;

                case 1:
                printf(" %.2f, ", array_of_values[i][j]);
                break;

                case 2:
                printf(" %.2f, ", array_of_values[i][j]);
                break;

                case 3:
                printf(" %.2f, ", array_of_values[i][j]);
                break;

                case 4:
                printf(" %.2f, ", array_of_values[i][j]);
                break;

                case 5:
                printf(" %.2f, ", array_of_values[i][j]);
                break;

            }

            
           
        }
        printf("\n");
    }


    return 0;
}
