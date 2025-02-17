#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // prompts user for an amount of change that will only accept a value greater than 0 before returning
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 1);
    return change;
}

int calculate_quarters(int cents)
{
    // calculates number of quarters to return
    int remaining = cents;
    int quarters = 0;
    while (remaining >= 25)
    {
        remaining -= 25;
        quarters++;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    // calculates number of dimes to return
    int remaining = cents;
    int dimes = 0;
    while (remaining >= 10)
    {
        remaining -= 10;
        dimes++;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    // calculates number of nickels to return
    int remaining = cents;
    int nickels = 0;
    while (remaining >= 5)
    {
        remaining -= 5;
        nickels++;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    // calculates number of pennies to return
    int remaining = cents;
    int pennies = 0;
    while (remaining >= 1)
    {
        remaining -= 1;
        pennies++;
    }
    return pennies;
}
