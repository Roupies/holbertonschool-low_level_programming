#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string(name) to print
 * @f: function callback used to print (as it is or with uppercases)
 * @*: string(name) to print
 */

void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
