#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get credit card number from the user
    long long card_number;
    do
    {
        card_number = get_long("Number: ");
    }
    while (card_number <= 0);

    // Initialize variables for checksum calculation
    int sum = 0;
    int digit_count = 0;

    // Iterate through each digit of the credit card number
    while (card_number > 0)
    {
        int digit = card_number % 10;
        card_number /= 10;

        // Multiply every other digit by 2, starting from the second-to-last digit
        if (digit_count % 2 == 1)
        {
            digit *= 2;

            // Add the products' digits together
            while (digit > 0)
            {
                sum += digit % 10;
                digit /= 10;
            }
        }
        else
        {
            // Add the digits that weren't multiplied by 2
            sum += digit;
        }

        digit_count++;
    }

    // Check if the card is valid based on Luhn's Algorithm
    if (sum % 10 == 0)
    {
        // Determine the type of the credit card
        if ((digit_count == 13 || digit_count == 16) && (card_number / 1000000000000 == 4))
        {
            printf("VISA\n");
        }
        else if (digit_count == 16 && (card_number / 100000000000000 == 51 || card_number / 100000000000000 == 52 || card_number / 100000000000000 == 53 || card_number / 100000000000000 == 54 || card_number / 100000000000000 == 55))
        {
            printf("MASTERCARD\n");
        }
        else if (digit_count == 15 && (card_number / 10000000000000 == 34 || card_number / 10000000000000 == 37))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
