#include <iostream>

#include <cstdio>

#define FAHR_LOWER 0
#define FAHR_UPPER 300
#define FAHR_STEP 20

#define CELC_LOWER -40
#define CELC_UPPER 120
#define CELC_STEP 10

int main()
{
    printf("Fahrenheit to Celcius\n");
    for (float fahr = FAHR_LOWER; fahr <= FAHR_UPPER; fahr += FAHR_STEP)
    {
        float celc = 5 * (fahr - 32) / 9;
        printf("%3.0f %6.1f\n", fahr, celc);
    }

    printf("Celcius to Fahrenheit\n");
    for (float celc = CELC_LOWER; celc <= CELC_UPPER; celc += CELC_STEP)
    {
        float fahr = celc / 5 * 9 + 32;
        printf("%3.0f %6.1f\n", celc, fahr);
    }

    return 0;
}
