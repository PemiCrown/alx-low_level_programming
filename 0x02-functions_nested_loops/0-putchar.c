#include <unistd.h>
/**
 *main : print character
 *@_putchar: writes the chracter c to stdout
 *@c: The character to print
 *Return: On success (1)
 */
int _purchar(char c)
{
return (write(1, &c, 1));
}
