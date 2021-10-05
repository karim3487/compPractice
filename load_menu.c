//
// Created by Karim Kabirov on 03.10.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include "load_lib.h"
#include "func_prot.h"

int main(void)
{
    int a = 0, b = 1;
    puts("--------------------------------");
    puts("Выберите библиотеку для работы с ОС Linux:");
    puts("|1.| Библиотека с массивом. |");
    puts("|2.| Библиотека с матрицей. |");
    puts("|3.| Выход. |");
    puts("--------------------------------");
    printf("Введите номер нужного пункта: ");
    while (b)
    {
        scanf("%d", &a);
        if (a == 1)
            LoadRun("func_array.dll");
//funcA();
        if (a == 2)
            LoadRun("func_matrix.dll");
//funcM();
        if (a == 3)
            b = 0;
        else
            printf("\nВведите число в диапазоне от 1 до 3: ");
    }
    return 0;
}
