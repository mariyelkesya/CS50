#include <stdio.h>
#include <cs50.h>
#include <math.h>

// q -25c, d -10c, n-5c, p -1c


int quarters(int cents);
int dimes (int cents);
int nickels (int cents);
int pennies (int cents);




int main(void)
{

    int cents;
    int q = 0;
    int d = 0;
    int n = 0;
    int p = 0;

    do
    {
    cents = get_int("Input cents: ");
    }while (cents < 0);


    //int cents = round(change * 100);
    int coins = 0;

    if (cents > 0)
    {
    q = quarters(cents);
    cents = cents - q * 25;
    }

    if (cents > 0)
    {
    d = dimes(cents);
    cents = cents - d * 10;
    }

    if (cents > 0)
    {
    n = nickels(cents);
    cents = cents - n * 5;
    }

    if (cents > 0)
    {
    p = pennies(cents);
    cents = cents - p * 1;
    }

    coins = q + d + n + p;

    printf("%i\n", coins);
    printf("Quarters: %i\n", q);
    printf("Dimes: %i\n", d);
    printf("Nickels: %i\n", n);
    printf("Pennies: %i\n", p);


    return 0;

}

int quarters(int cents)
{
    int coins = 0;

    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
        //int q = coins;
    }
    return coins;
}

int dimes (int cents)
{
    int coins = 0;

    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
        //int d = coins;
    }
    return coins;
}

int nickels (int cents)
{
    int coins = 0;

    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
        //n = coins;
    }
    return coins;
}

int pennies (int cents)
{
    int coins = 0;

    while (cents >= 1 && cents > 0)
    {
        cents = cents - 1;
        coins++;
        //p = coins;
    }
    return coins;
}