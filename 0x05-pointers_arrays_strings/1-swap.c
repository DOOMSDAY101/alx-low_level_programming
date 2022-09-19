#include <stdio.h>
#include "main.h"
/**
 * swap_int -  Entry
 * @a:input 1
 * @b: input 2
 * Reurn: inegers
 */
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
