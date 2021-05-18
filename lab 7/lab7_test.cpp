#include "lab7.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h> 

void test_shop() {
    processing();
    FILE* order = fopen("order.txt", "r");
    FILE* answer = fopen("answer.txt", "r");
    if (order == NULL || answer == NULL) {exit(-1);}
    char res[100];
    char out[100];
    while (!feof(order) && !feof(answer)) {
        fscanf(order, "%s", res); 
        fscanf(answer, "%s", out);
        assert(strcmp(res, out) == 0);
    }
    fclose(order);
    fclose(answer);
}

#undef main
int main() {
    test_shop();
    return 0;
}