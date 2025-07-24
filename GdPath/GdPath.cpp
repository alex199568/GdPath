#include <iostream>

#include <cstdio>

int main()
{
    printf("Fahrenheit to Celcius\n");
    for (float fahr = 0; fahr <= 300; fahr += 20)
    {
        float celc = 5 * (fahr - 32) / 9;
        printf("%3.0f %6.1f\n", fahr, celc);
    }

    printf("Celcius to Fahrenheit\n");
    for (float celc = -40; celc <= 120; celc += 10)
    {
        float fahr = celc / 5 * 9 + 32;
        printf("%3.0f %6.1f\n", celc, fahr);
    }

    return 0;
}
