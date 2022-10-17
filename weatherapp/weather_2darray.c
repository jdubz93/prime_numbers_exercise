#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MONTHS 12
#define YEARS 5
#define COLS 2

int main(void)
{
    float weather[YEARS][COLS] = {
        {2010.0, 32.4},
        {2011.0, 37.9},
        {2012.0, 49.8},
        {2013.0, 44.0},
        {2014.0, 32.9}
    };

    // rainfall data 2010-2014
    float rainfall[YEARS][MONTHS] = {
        {4.3, 4.3, 3.0, 1.8, 0.4, 0.1, 0.2, 0.3, 1.7, 2.7, 3.6, 4.3},
        {8.1, 8.6, 4.7, 2.3, 1.1, 0.2, 0.0, 0.0, 0.4, 2.5, 6.2, 7.4},
        {9.9, 9.8, 6.6, 4.2, 1.3, 0.1, 0.0, 0.0, 0.1, 1.7, 4.8, 10.1},
        {15.2, 14.1, 8.3, 5.4, 2.4, 0.4, 0.0, 0.0, 0.1, 1.9, 6.5, 11.9},
        {18.5, 17.0, 11.2, 6.6, 2.9, 0.3, 0.0, 0.0, 0.0, 1.5, 5.2, 13.2}
    };

    int i, j;
    float average = 0.0;
    for (i = 0; i < YEARS; i++) // years
    {
        average = 0.0;
        for (j = 0; j < MONTHS; j++) // months
        {
            // printf("%.1f ", rainfall[i][j]);
            average += rainfall[i][j];
        }
        // printf("average = %.1f\n", average);
        weather[i][j] = (average / MONTHS);
    }

    for(i = 0; i < YEARS; i++)
    {
        printf("%.1f \n", weather[i][j]);
    }

    return 0;
}