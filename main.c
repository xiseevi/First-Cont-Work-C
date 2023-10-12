#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "mylib.h"


void closeProgram();

int main(void) {
    setlocale(LC_CTYPE, "RU");

		puts("Махмудов А. В.,\nГруппа 4305, СПбГТИ (ТУ), 2023.\nКонтрольная работа №1\n");

    int choice;
    char input[100];

    while (true) {
        printf("Выберите программу:\n");
        printf("1. Задание 1\n");
        printf("2. Задание 2\n");
        printf("3. Задание 3\n");
        printf("4. Выход.\n");

        fgets(input, sizeof(input), stdin);

        char *endptr;
        choice = strtol(input, &endptr, 10);

        if (*endptr != '\n' || choice < 1 || choice > 4) {
            printf("Ошибка: введите один числовой выбор (1, 2, 3, 4) без пробелов и букв.\n");
            continue;
        }

        switch (choice) {
        case 1:
            prog1();
            break;
        case 2:
            prog2();
            break;
        case 3:
            prog3();
            break;
        case 4:
            closeProgram();
            break;
        default:
            printf("Неверный выбор\n");
        }

        if (choice == 4) {
            break;
        }
    }

    return EXIT_SUCCESS;
}




void closeProgram(void) {
    printf("The End!\n");
    exit(EXIT_SUCCESS);
}
