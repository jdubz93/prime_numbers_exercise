#include <stdio.h>
#include <stdint.h>
#include <string.h>

// in this challenge you are going to create a program that will find all the prime numbers from 3 - 100
// there will be no input to the program

// the output will be each prime number separated by a space on a single line.
// you will need to create an array that will each prime number as it is generated
// you can hard-code the first two prime numbers 2 and 3 in the primes array.

void printArray(uint8_t* array);

int main(void)
{
    uint8_t prime_nums[100] = {2, 3};
    uint8_t n = 2;

    for(int i = 3; i < 100; i+=2) // after 2 all the rest of the numbers are odd for prime. 
    {
        if (n % i == 0) {
            // not prime
        } else {
            prime_nums[i] = i;
        }
    }

    printArray(prime_nums);
    return 0;
}

void printArray(uint8_t* array){
    for (int i = 3; i < 100; i++)
    {
        if(array[i] != 0)
            printf("%d ", array[i]);
    }
}