#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    float dollors;

    int coin = 0;

    do

    {
        dollors = get_float("Change owed: ");
    }

    while (dollors <= 0);

    int coins = round(dollors * 100);
    
    while (coins >= 25)
    {
        coins -= 25;
        coin++;
    }
    while (coins >= 10)
    {
        coins -= 10;
        coin++;
    }
    while (coins >= 5)
    {
        coins -= 5;
        coin++;
    }
    while (coins >= 1)
    {
        coins -= 1;
        coin++;
    }

    printf("%i\n", coin);

}