#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "mylib.h"

double inputDouble(const char* prompt) {
    double value = 0;
    char input[100];

    while (true) {
        printf("%s", prompt);
        fgets(input, sizeof(input), stdin);

        char *endptr;
        value = strtof(input, &endptr);

        if (*endptr == '\n' && value != 0.0) {
            return value;
        }

        printf("Ошибка: введите корректное число без пробелов и букв.\n");
    }
}

double function(double x) {
    if (x <= 0) {
        return x / ((pow(x, 4)) + 3 * (pow(x, 2)) + 2);
    } else {
        return (1 / 2) * log(((pow(x, 2)) + 1) / ((pow(x, 2)) + 2)) - (1 / 2) * log((2 * x) / 3);
    }
}


int getUserChoice(void) {
    while (true) {
        printf("Выберите опцию: \n");
        printf("1. Закрыть программу:\n");
        printf("2. Повторить задание:\n");
        printf("3. Вернуться в начало:\n");

        char choiceStr[100];
        if (fgets(choiceStr, sizeof(choiceStr), stdin) != NULL) {
            size_t len = strlen(choiceStr);
            if (len > 0 && choiceStr[len - 1] == '\n') {
                choiceStr[len - 1] = '\0';
            }
            int choice;
            if (strchr(choiceStr, ' ') != NULL || (sscanf(choiceStr, "%d", &choice) != 1) || (choice != 1 && choice != 2 && choice != 3)) {
                printf("Некорректный выбор. Пожалуйста, введите 1, 2 или 3 без пробелов.\n");
                continue;
            }
            return choice;
        } else {
            printf("Некорректный выбор. Пожалуйста, введите 1, 2 или 3.\n");
        }
    }
}

