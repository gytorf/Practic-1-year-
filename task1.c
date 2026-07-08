#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int t1, t2, t3;
    float chast1, chast2, chast3;
    float suma;
    float chas;

    printf("Введіть три значення:\n");
    scanf("%d %d %d", &t1, &t2, &t3);

    chast1 = 1.0 / t1;
    chast2 = 1.0 / t2;
    chast3 = 1.0 / t3;

    suma = chast1 + chast2 + chast3;

    chas = 1.0 / suma;

    printf("Час, необхідний для з'їдання пирога: %.2f годин\n", chas);

    return 0;
}