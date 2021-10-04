//
// Created by Karim Kabirov on 03.10.2021.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "func_prot.h"

void outArray(int *, int);

void func(void)
{
    int arraySize = 76;
    int *array = (int *) malloc(arraySize * sizeof(int));
    for (int i = 0; i < arraySize; ++i)
    {
        array[i] = rand() % 101 - 50;
    }

    puts("Заполнение массива случайными числами:");
    outArray(array, arraySize);

    puts("\n\nМассив после замены элементов кратным трем:");
    for (int i = 0; i < arraySize; ++i)
    {
        if (array[i] % 3 == 0) {
            array[i] = 1;
        }
    }
    outArray(array, arraySize);
}

void outArray(int *ptrArray, int array_size)
{
    for (int i = 0; i < array_size; ++i)
        printf("%4d;", ptrArray[i]);
    puts(" ");
}