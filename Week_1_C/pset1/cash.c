#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for change owed
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    // tracking variables
    int minimumCoins = 0;
    int divided;
    int modulo;

    // change type variables
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;

    int coins[4] = {quarter, dime, nickel, penny};

    // calculate minimum coins needed
    for (int i = 0; i < 4; i++)
    {
        divided = change / coins[i];
        modulo = change % coins[i];

        minimumCoins += divided;
        change = modulo;
    }
    printf("%i\n", minimumCoins);
}
