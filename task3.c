#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int p;
    long long f[31];
    int i;

    scanf("%d", &p);
    f[1] = 2;  
    f[2] = 4;   
    for (i = 3; i <= p; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }

    printf("%lld\n", f[p]);

    return 0;
}