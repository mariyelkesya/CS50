#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Height: ");

    int i;

    for (i = 1; i <= num; i++)
    {
        for (int j = num - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k<= i; k++)
        {
            printf("#");
        }printf("  ");
        for (int k = 1; k<= i; k++)
        {
            printf("#");
        }
    printf("  \n");
    }

    return 0;
}