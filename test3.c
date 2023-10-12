#include <stdio.h>

void program1() {
    printf("1\n");
}

void program2() {
    printf("2\n");
}

void program3() {
    printf("3\n");
}

void chooseOperation() {
    int choice;
    printf("Выберите номер программы:\n");
    printf("1. Программа 1\n");
    printf("2. Программа 2\n");
    printf("3. Программа 3\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            program1();
            break;
        case 2:
            program2();
            break;
        case 3:
            program3();
            break;
        default:
            printf("Неверный выбор\n");
    }
}

int main() {
    chooseOperation();
    return EXIT_SUCCESS;
}
