#include <stdio.h>
#include <stdint.h>
#include <string.h>


int main(void)
{
    // int grades[10] = {0,0,0,0,0,0,0,0,0,0};
    // int grades[10] = {[2] = 500, [1] = 300, [0] = 100}; // you can initialize specific elements based on indexes of grades. all the rest are 0.
    int grades[10] = {0}; // if you just initialize the first value rest will get set to 0. First value could be any number rest will always be 0.
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 grades:\n");

    
    for (int i = 0; i < 10; i++) 
    {
        printf("%2u) ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum/count;

    printf("\nAverage: %f\n", average);

    return 0;
}