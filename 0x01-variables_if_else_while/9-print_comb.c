#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (j > 0) {
                putchar(',');
                putchar(' ');
            }
            putchar('0' + i);
            putchar('0' + j);
        }
    }

    return 0;
}
}
