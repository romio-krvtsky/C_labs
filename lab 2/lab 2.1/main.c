#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "src.h"



int main() {
    int choice=0;
    int natural;
    bool IsInput = 0;
    while (choice != 6) {
        Menu();
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            natural = input();
            IsInput = 1;
            break;
        case 2:
            if (IsInput) {
                printf("\n%d\n", natural);
                printf("%d \n", dec2oct(natural));
            }
            else printf("\nNo input!\n\n");
            break;
        case 3:
            if (IsInput) {
                double inv = inversion(natural);
                printf("%lf \n", inv);
            }
            else printf("\nNo input!\n\n");
            break;
        case 4:
            if (IsInput) {
                int bin = dec2bin(natural);
                printf("%d \n", bin);
            }
            else printf("\nNo input!\n\n");
            break;
        case 5:
            information();
            break;
        case 6:
            break;
        default:
            printf("Wrong input!");
            break;
        }
    }
    return 0;
}