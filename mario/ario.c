#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;
    do
    {

        height = get_int("Height: ");

    }
    while (height < 1 || height > 8);

    int level, s;

    for (level = 0; level < height; level++)
    {

        for (s = 0; s < height; s++)
        {

            if (s + level < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }

        }
        printf("\n");
    }
}