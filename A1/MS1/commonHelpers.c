////////////////////////////
// Nicholas Chrysanthou
// NChrysanthou@myseneca.ca
// 161264197
// IPC-NEE
////////////////////////////

#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "commonHelpers.h"

// Uses the time.h library to obtain current year information
// Get the current 4-digit year from the system
int currentYear(void)
{
    time_t currentTime = time(NULL);
    return localtime(&currentTime)->tm_year + 1900;
}
void clearStandardInputBuffer(void)
{
    while (getchar() != '\n')
    {
        ; // On purpose: do nothing
    }
}

int getInteger()
{
    int tmp;
    char newLine;
    bool valid = false;
    do
    {
        scanf("%d%c", &tmp, &newLine);
        if (newLine != '\n')
        {
            clearStandardInputBuffer();
            printf("ERROR: Value must be an integer: ");
            valid = false;
        }
        else
            valid = true;

    } while (!valid);

    return tmp;
}

int getPositiveInteger()
{
    bool valid = false;
    int tmp;
    do
    {
        tmp = getInteger();
        valid = tmp >= 0;
        if (!valid)
            printf("ERROR: Value must be a positive integer greater than zero: ");
    } while (!valid);

    return tmp;
}

int getIntFromRange(int min, int max)
{
    bool valid = false;
    int tmp;
    do
    {
        tmp = getInteger();
        if (!(tmp < min || tmp > max))
            valid = true;
        else
            printf("ERROR: Value must be between %d and %d inclusive: ", min, max);
    } while (!valid);

    return tmp;
}

double getDouble()
{
    double tmp;
    char newLine;
    bool valid = false;
    do
    {
        scanf("%lf%c", &tmp, &newLine);
        if (newLine != '\n')
        {
            clearStandardInputBuffer();
            printf("ERROR: Value must be a double floating-point number: ");
            valid = false;
        }
        else
            valid = true;

    } while (!valid);

    return tmp;
}

double getPositiveDouble()
{
    bool valid = false;
    double tmp;
    do
    {
        tmp = getDouble();
        valid = tmp >= 0.00;
        if (!valid)
            printf("ERROR: Value must be a positive double floating-point number: ");
    } while (!valid);

    return tmp;
}

char getCharOption(const char *entries)
{
    int i;
    bool valid = false;
    char tmp;
    do
    {
        scanf("%c", &tmp);

        // itterate through all valid entries
        for (i = 0; i < sizeof(entries) / sizeof(entries[0]); i++)
        {
            // if a valid entry was found
            if (tmp == entries[i])
                valid = true;
        }
        clearStandardInputBuffer();
        printf("ERROR: Character must be one of [qwerty]: ");
    } while (!valid);
    return tmp;
}

char getCString(char *str, int min, int max)
{
    str = malloc(7);
    printf("\n%s\n", *str);
}