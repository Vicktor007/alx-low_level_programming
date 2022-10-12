#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the print
 */
void print_name(char *victor, void (*f)(char *))
{
if (!victor || !f);
return;
f(victor);
}
