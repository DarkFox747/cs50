#include <cs50.h>
#include <stdio.h>

void testeo(int height);
void hashes(int a);
void spaces(int a, int b);

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
        spaces(height, i);
        hashes(i);
        for (int k = 0; k < 2; k++)
        {
            printf(" ");
        }
        hashes(i);
        printf("\n");
        i++;
    }
}

void hashes(int a)
{
    for (int j = 0; j < a; j++)
    {
        printf("#");
    }
}
void spaces(int a, int b)
{
    for (int space = 0; space < a - b; space++)
    {
        printf(" ");
    }
}
