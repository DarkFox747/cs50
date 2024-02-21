#include <cs50.h>
#include <stdio.h>

void testeo(int height);

int main(void)
{
    int height = 0;
    while (height < 1)
    {
        int a = get_int("Height: ");
        height = a;
    }
    testeo(height);
}

void testeo(int height)
{
    int i = 1;
    while (i <= height)
    {
        for (int space = 0; space < height - i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
        i++;
    }
}
