#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int get_points(string word);
int points(char letter);
string lower_case(string word);

int main(void)
{
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");
    player1 = lower_case(player1);
    player2 = lower_case(player2);
    int p1 = get_points(player1);
    int p2 = get_points(player2);
    if (p1 > p2)
    {
        printf("Player 1 wins!\n");
    }
    if (p2 > p1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int get_points(string word)
{
    int marker = 0;
    for (int i = 0, lenght = strlen(word); i < lenght; i++)
    {
        int a = points(word[i]);
        marker += a;
    }
    return marker;
}

int points(char letter)
{
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'l' || letter == 'n' || letter == 'o' || letter == 'r' ||
        letter == 's' || letter == 't' || letter == 'u')
    {
        return 1;
    }
    else if (letter == 'b' || letter == 'c' || letter == 'm' || letter == 'p')
    {
        return 3;
    }
    else if (letter == 'd' || letter == 'g')
    {
        return 2;
    }
    else if (letter == 'f' || letter == 'h' || letter == 'v' || letter == 'w' || letter == 'y')
    {
        return 4;
    }
    else if (letter == 'k')
    {
        return 5;
    }
    else if (letter == 'j' || letter == 'x')
    {
        return 8;
    }
    else if (letter == 'q' || letter == 'z')
    {
        return 10;
    }
    else
    {
        return 0;
    }
}

string lower_case(string word)
{
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        word[i] = tolower(word[i]);
    }
    return word;
}
