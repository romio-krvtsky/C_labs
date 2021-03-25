#include <stdio.h>


int main(){

       int arabic;
    while (1) {
        printf("Enter an arabic number:");
        if (scanf("%d", &arabic) != 1 || arabic < 1 || arabic > 3999) {
            printf("Wrong input, try again\n");
            while (getchar() != '\n') { ; }         
        }
        else {
            break;
        }
    }

    int units = arabic % 10;
    int dozens = arabic / 10 % 10; 
    int hundreds = arabic / 100 % 10;
    int thousands = arabic / 1000;

    if(arabic==0){
        printf("nulla");
    }
    
    switch(thousands){
        case 0: break;            
        case 1: printf("M");
        break;
        case 2: printf("MM");
        break;
        case 3: printf("MMM");
        break;         
    }

    switch(hundreds){
        case 0: break; 
        case 1: printf("C");
        break;
        case 2: printf("CC");
        break;
        case 3: printf("CCC");
        break;
        case 4: printf("CD");
        break;
        case 5: printf("D");
        break;
        case 6: printf("DC");
        break;
        case 7: printf("DCC");
        break;
        case 8: printf("DCCC");
        break;
        case 9: printf("MC");
        break;
    }

    switch(dozens){
        case 0: 
        break; 
        case 1: printf("X");
        break;
        case 2: printf("XX");
        break;
        case 3: printf("XXX");
        break;
        case 4: printf("XL");
        break;
        case 5: printf("L");
        break;
        case 6: printf("LX");
        break;
        case 7: printf("LXX");
        break;
        case 8: printf("LXXX");
        break;
        case 9: printf("XC");
        break;            
    }

    switch(units){
        case 1: printf("I");
        break;
        case 2: printf("II");
        break;
        case 3: printf("III");
        break;
        case 4: printf("IV");
        break;
        case 5: printf("V");
        break;
        case 6: printf("VI");
        break;
        case 7: printf("VII");
        break;
        case 8: printf("VIII");
        break;
        case 9: printf("IX");
        break; 
    }
    
    return 0;

}
