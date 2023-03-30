#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get size of grid
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    //print grid
    for (int i = 1; i <= n; i++)
    {
        //print the left half of the pyramid
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
        //prints the gap between pyramids
        printf("  ");
        //prints the right half of the pyramid
        for (int h = 1; h <= i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
