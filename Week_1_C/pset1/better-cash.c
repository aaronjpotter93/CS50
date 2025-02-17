#include <cs50.h>
#include <stdio.h>
#include <float.h>

typedef struct Money {
    string type;
    int value;
} Money;

int make_change(int remaining, Money* money);

Money initMoney(string type, int value) {
    Money m;
    m.type = type;
    m.value = value;
    return m;
}

int main(void)
{
    double cash;
    // Prompt user for cash to exchange in change
    do
    {
        cash = get_double("Change owed: ");
    }
    while (cash < 0);

    // Convert double to dollars
    int dollars = (int)cash;
    // Handle the weird nature of truncating by casting where rounding occurs somehow
    double decimal = ((cash - dollars) * 100) + 0.5;
    // Convert double to int for cents in a way that doesnt lose value
    int cents = (int)decimal;

    // Dollar inits
    Money hundred;
    hundred = initMoney("hundreds", 100);

    Money fifty;
    fifty = initMoney("fifties", 50);

    Money twenty;
    twenty = initMoney("twenties", 20);

    Money ten;
    ten = initMoney("tens", 10);

    Money five;
    five = initMoney("fives", 5);

    Money one;
    one = initMoney("ones", 1);

    // Coin inits
    Money quarter;
    quarter = initMoney("quarters", 25);

    Money dime;
    dime = initMoney("dimes", 10);

    Money nickel;
    nickel = initMoney("nickels", 5);

    Money penny;
    penny = initMoney("pennies", 1);

    Money dollarsArray[6] = {hundred, fifty, twenty, ten, five, one};
    Money centsArray[4] = {quarter, dime, nickel, penny};

    printf("Cash:\n");
    for (int i = 0; i < 6; i++) {
        dollars = make_change(dollars, &dollarsArray[i]);
    }

    printf("Coins:\n");
    for (int i = 0; i < 4; i++) {
        cents = make_change(cents, &centsArray[i]);
    }
}

int make_change(int remaining, Money* money)
{
    int divided = remaining / money->value;
    int modulo = remaining % money->value;

    if (money->value > remaining)
    {
        return remaining;
    }
    else
    {
        printf(" >  %s: %i\n", money->type, divided);
        return modulo;
    }
}
