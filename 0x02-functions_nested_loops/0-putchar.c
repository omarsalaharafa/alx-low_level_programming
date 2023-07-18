#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always ) (success)
*/

int main(void)
{char str[] = "_putchar";
int ch;
for (ch = 0; ch < 8; ch++)
	_putchar(str[ch]);
_putchae('\n');

return (0);
}

