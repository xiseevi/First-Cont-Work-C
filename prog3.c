#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "mylib.h"

int prog3(void) {

  puts("Задание №3. Табулирование функции:");

          double a = -2.2;
          double b = 2.2;
          double h = 0.2;



           printf(" x\t| y\n");
            printf("---------------------------\n");
      
          for (double x = a; x <= b; x += h) {
             double y = function(x);
             printf("%.2lf\t| %.2lf\n", x, y);
             
    }
  printf("---------------------------\n\n");

     int userChoice = getUserChoice();

 if (userChoice == 1) {
    printf("The End!\n");
    exit (EXIT_SUCCESS);
 } else if (userChoice == 2) {
     return 2;
 }
}
