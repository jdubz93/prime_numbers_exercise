#include <stdio.h>
#include <stdint.h>
#include <string.h> // size_t
#include <stdlib.h> // size_t
#include <stdbool.h> // bool

#define MAX_SIZE 100 // constant for maximum number of elements in array
#define MAX_PRIME 50 // constant for maximum number of prime numbers in array

// in this challenge you are going to create a program that will find all the prime numbers from 3 - 100
// there will be no input to the program

// the output will be each prime number separated by a space on a single line.
// you will need to create an array that will each prime number as it is generated
// you can hard-code the first two prime numbers 2 and 3 in the primes array.

void printArray(uint8_t* array);

int main(void)
{
    uint8_t prime_nums[MAX_PRIME] = {2, 3};
    uint8_t n = 2;
    bool isPrime = {false};
    uint8_t prime_idx = 0;

    for(int i = 5; i < MAX_SIZE; i+=2) // after 2 all the rest of the numbers are odd for prime. 
    {
        isPrime = true;
        if (n % i == 0) // if n is divisible by i then it is not prime
        {
            // do nothing
            isPrime = false;
        }

        if (isPrime)
        {
            prime_nums[prime_idx++] = i;
        }
    }

    printArray(prime_nums);
    return 0;
}

void printArray(uint8_t* array){
    for (int i = 3; i < MAX_PRIME; i++)
    {
        if(array[i] != 0)
            printf("%d ", array[i]);
    }
    printf("\n");
    size_t arraysize = sizeof(&array);
    printf("size of array: %ld\n", arraysize);
}