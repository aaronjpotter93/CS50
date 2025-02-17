#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size as ss
    int ss;
    int es;
    int n = 0;
    int ye = 0;
    do
    {
        ss = get_int("Enter a Positive Integer to represent the starting population of Llamas: ");
    }
    while (ss < 9);
    int ns = ss;

    // TODO: Prompt for end size as es
    do
    {
        es = get_int("Enter a Positive Integer to represent the ending population of Llamas: ");
    }
    while (es < ss);

    // TODO: Calculate number of years until we reach threshold
    //First condition checks if the starting size and ending size are the same
    if (ss == es)
    {
        n = 0;
    }
    //Otherwise the program can do the calculations
    else
    {
        while (ye < es)
        {
            int g = ns / 3;
            int l = ns / 4;
            ye = ns + g - l;
            ns = ye;
            n++;
        }
    }

    // TODO: Print number of years
    printf("Start size: %i\n", ss);
    printf("End size: %i\n", es);
    printf("Years: %i\n", n);
}
