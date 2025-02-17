#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    //prompt user for starting value
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    //prompt user for ending value
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    //iterate through each number from min to max and print the prime numbers
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    //returns false if the number passed in is less than 2
    if (number <= 1)
    {
        return false;
    }

    //returns false if the number has a whole number as a factor
    for (int n = 2; n < number; n++)
    {
        if (number % n == 0)
        {
            return false;
        }
    }

    //returns true if the number passed in doesn't have whole number factor, making it a prime number
    return true;
}
