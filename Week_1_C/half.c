// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    //find the total amount owed after tax
    float tax_percent_into_percentage = .01;
    float tax_as_percent = tax * tax_percent_into_percentage;
    float tax_amount = bill * tax_as_percent;
    float total_after_tax = bill + tax_amount;

    //type cast the tip_percent into a float
    float float_type_tip_percent = (float)tip;

    //find the amount of tip total owed
    float tip_percent_into_percent = .01;
    float tip_as_percent = float_type_tip_percent * tip_percent_into_percent;
    float total_tip = total_after_tax * tip_as_percent;

    //add tip total to bill total
    float bill_plus_tip = total_after_tax + total_tip;

    //divide by two to get the split bill + tip
    float split_amount = bill_plus_tip / 2;

    return split_amount;
}
