#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    long long f[10000];
    int i;
    int mod = 12345;

    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);
    f[0] = 1; 
    f[1] = 2; 
    f[2] = 4;  
    for (i = 3; i <= n; i++)
    {
        f[i] = (f[i - 1] + f[i - 2] + f[i - 3]) % mod;
    }

    printf("Кількість шуканих послідовностей: %lld\n", f[n]);

    return 0;
}