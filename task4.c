#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    int m;
    int chast, zal;
    int sum;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    sum = 0;
    for (m = 1; m <= n; m++)
    {
        chast = n / m;   
        zal = n % m;  
        if (chast == zal)
        {
            sum++;
        }
    }

    printf("Кількість рівних дільників числа %d: %d\n", n, sum);

    return 0;
}