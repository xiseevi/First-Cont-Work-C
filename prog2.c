#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "mylib.h"

int prog2(void) {
    puts("Задание №2. Вычисление условного выражения:");

    double q = 0, x = 0, y = 0, z = 0;

    x = inputDouble("Введите x: ");
    y = inputDouble("Введите y: ");
    z = inputDouble("Введите z: ");

    if (x * y < -1) {
        q = x * y * z - fabs(y - z);
    } else if (-1 <= x * y && x * y <= 1) {
        q = pow(x, 2) - pow(y, 2) + 2;
    } else if (x * y > 1) {
        q = sqrt(pow(x, 2) + pow(y, 2) + 2 * sin(2 * z));
    } else {
        printf("Ошибка!\n");
        exit(EXIT_FAILURE);
    }

     if (isnan(q)) {
        printf("Результат: не определено!\n");
      } else {
        printf("q = %.2f\n", q);
    }

     int userChoice = getUserChoice();

 if (userChoice == 1) {
    printf("The End!\n");
    exit (EXIT_SUCCESS);
 } else if (userChoice == 2) {
     return 2;
 }
}
