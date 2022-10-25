#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;
    do
    {

        height = get_int("kanteyner: ");

    }
    while (height < 1 || height > 8);


    for (int level = 0; level < height; level++)
    {

        for (int s = 0; s < height; s++)
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
        printf("  ");

        for (int s = 0; s < height; s++)
        {
            if (height - level < s + 2)
            {
                printf("#");
            }
        }

        printf("\n");

    }
}