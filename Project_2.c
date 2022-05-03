#include <stdio.h>
#include <stdlib.h>
#include <time.h>
rockpaperscissor(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 'r';
    }

    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }

    else
    {
        comp = 's';
    }

    printf("Enter r for rock,Enter s for scissor and p for paper:\n");
    scanf("%c", &you);

    printf("Computer choosed %c and You choosed %c\n", comp, you);

    int result = rockpaperscissor(you, comp);

    if (result == 0)
    {
        printf("Game draw");
    }
    else if (result == 1)
    {
        printf("You won!!");
    }
    else
    {
        printf("You loose");
    }

    return 0;
}