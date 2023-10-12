#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "mylib.h"

int prog1(void) {
    puts("Задание №1. Вычисление простого выражения:\n");

        double x = 0, y = 0, n = 0;

        x = inputDouble("Введите число X = ");
        y = inputDouble("Введите число Y = ");


        n = sqrt((exp(x)) + tan(x) + 1) * (log10(y) + cos(x * y) + pow(x, (1.0 / 3)));

        if (isnan(n)) {
            printf("Результат: не определено!\n");
        } else {
            printf("Результат: N = %f\n", n);
        }

 int userChoice = getUserChoice();

 if (userChoice == 1) {
    printf("The End!\n");
    exit (EXIT_SUCCESS);
 } else if (userChoice == 2) {
    return prog1();
 } else if (userChoice == 3) {
     return 3;
 }
}
