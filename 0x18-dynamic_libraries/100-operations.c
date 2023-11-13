#include <stdio.h>

/**
 * add - Add two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the addition
 */
int add(int a, int b) {
    return a + b;
}

/**
 * sub - Subtract two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the subtraction
 */
int sub(int a, int b) {
    return a - b;
}

/**
 * mul - Multiply two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the multiplication
 */
int mul(int a, int b) {
    return a * b;
}

/**
 * div - Divide two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the division
 */
int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

/**
 * mod - Calculate the modulus of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The modulus of the two integers
 */
int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Error: Modulus by zero\n");
        return 0;
    }
}

