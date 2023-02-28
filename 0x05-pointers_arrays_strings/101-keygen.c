#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point
*Return: always 0
*/
int main(void)
{
    int i;
    char password[8];
    srand(time(NULL));

    for (i = 0; i < 8; i++)
    {
        password[i] = 'a' + rand() % 26;
    }

    password[7] = '\0';

    printf("%s\n", password);

    return 0;
}
