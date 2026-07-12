#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <windows.h>

long long factorial(int n)
{
    long long rezult = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        rezult = rezult * i;
    }
    return rezult;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char slovo[20];
    int dist;
    int kilkist[26];
    int i;
    long long up;
    long long down;
    long long result;

    printf("Введіть слово: ");
    scanf("%s", slovo);

    dist = strlen(slovo);

    for (i = 0; i < 26; i++)
    {
        kilkist[i] = 0;
    }

    for (i = 0; i < dist; i++)
    {
        char litter = tolower(slovo[i]);
        kilkist[litter - 'a']++;
    }

    up = factorial(dist);
    down = 1;

    for (i = 0; i < 26; i++)
    {
        if (kilkist[i] > 1)
        {
            down = down * factorial(kilkist[i]);
        }
    }

    result = up / down;

    printf("Кількість анаграм: %lld\n", result);

    return 0;
}