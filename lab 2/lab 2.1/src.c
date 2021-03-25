#include<stdio.h>

void Menu() {
    printf("1. Input of natural number\n");
    printf("2. Output of natural number in decimal and octal systems\n");
    printf("3. Output inverse number\n");
    printf("4. Convert to binare system\n");
    printf("5. Infromation about the version and the developer\n");
    printf("6. Exit the program\n");
}

int input() {
    int x;
    while (1) {
        printf("Enter a natural number:");
        if (scanf("%d", &x) != 1 || x < 1) {
            printf("Wrong input, try again\n");
            while (getchar() != '\n');
        }
        else {
            break;
        }
    }
    return x;
}

int dec2bin(int num)
{
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return bin;
}

int dec2oct(int num)
{
    int oct = 0, k = 1;

    while (num)
    {
        oct += (num % 8) * k;
        k *= 10;
        num /= 8;
    }

    return oct;
}

double inversion(int x) {
    double inv = 1 / (double)x;
    return inv;
}

void information() {
    printf("Version: v1.0 \nAuthor: Roman Krivetskiy\n");
}