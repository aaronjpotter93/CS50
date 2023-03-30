#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_dollars(int cents);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int dollars = calculate_dollars(cents);
    cents = cents - dollars * 100;

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
    int coins = dollars + quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    //printf("%i\n", coins);
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
int calculate_dollars(int cents)
{
    // calculates number of dollars to return
    int remaining = cents;
    int dollars = 0;
    while (remaining >= 100)
    {
        remaining -= 100;
        dollars++;
    }
    if (dollars >= 1)
    {
        //to print a more thoughtful response, a singular dollar
        if (dollars < 2)
        {
            printf("%i dollar\n", dollars);
        }
        //to print a more thoughtful response, plural dollars
        else {
            printf("%i dollars\n", dollars);
        }
    }
    return dollars;
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
    //prints only if value is greator than or equal to one
    if (quarters >= 1)
    {
        //to print a more thoughtful response, a singular quarter
        if (quarters < 2)
        {
            printf("%i quarter\n", quarters);
        }
        //to print a more thoughtful response, plural quarters
        else {
            printf("%i quarters\n", quarters);
        }
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
    //prints only if value is greator than or equal to one
    if (dimes >= 1)
    {
        //to print a more thoughtful response, a singular dime
        if (dimes < 2)
        {
            printf("%i dime\n", dimes);
        }
        //to print a more thoughtful response, plural dimes
        else {
            printf("%i dimes\n", dimes);
        }
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
    //prints only if value is greator than or equal to one
    if (nickels >= 1)
    {
        //to print a more thoughtful response, a singular nickel
        if (nickels < 2)
        {
            printf("%i nickel\n", nickels);
        }
        //to print a more thoughtful response, plural nickels
        else {
            printf("%i nickels\n", nickels);
        }
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
    //prints only if value is greator than or equal to one
    if (pennies >= 1)
    {
        //to print a more thoughtful response, a singular penny
        if (pennies < 2)
        {
            printf("%i penny\n", pennies);
        }
        //to print a more thoughtful response, plural pennies
        else {
            printf("%i pennies\n", pennies);
        }
    }
    return pennies;
}
