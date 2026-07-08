#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int p;
    int ch[20];
    int i;
    long long nok;
    long long a, b, ost;

    scanf("%d", &p);

    for (i = 0; i < p; i++)
    {
        scanf("%d", &ch[i]);
    }
    nok = ch[0];
    for (i = 1; i < p; i++)
    {
        a = nok;
        b = ch[i];
        while (b != 0)
        {
            ost = a % b;
            a = b;
            b = ost;
        }
        nok = (nok / a) * ch[i];
    }

    printf("%lld\n", nok);

    return 0;
}