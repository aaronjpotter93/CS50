#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get size of grid
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Print grid
    for (int i = 1; i <= n; i++)
    {
        //prints the number of spaces opposite the number of #'s
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        //prints the number of #'s entered by the user
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
