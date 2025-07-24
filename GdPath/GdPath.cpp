#include <iostream>

#include <cstdio>

int main()
{
    std::cout << "Hello World!\n";

    printf("Hello, World\n");

    float fahr;
    float celc;
    int lower = 0;
    int upper = 300;
    int step = 20;

    printf("Fahrenheit to Celcius\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celc = 5 * (fahr - 32) / 9;
        // celc / 5 = (fahr - 32) / 9
        // celc / 5 * 9 = fahr - 32
        // celc / 5 * 9 + 32 = fahr
        printf("%3.0f %6.1f\n", fahr, celc);
        fahr += step;
    }

    printf("Celcius to Fahrenheit\n");
    lower = -40;
    upper = 120;
    step = 10;
    celc = lower;
    while (celc <= upper)
    {
        fahr = celc / 5 * 9 + 32;
        printf("%3.0f %6.1f\n", celc, fahr);
        celc += step;
    }

    return 0;
}
