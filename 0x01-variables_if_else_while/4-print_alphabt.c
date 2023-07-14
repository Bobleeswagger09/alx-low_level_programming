#include <stdio.h>
/**
* main - Display Alhpa in lower
* Return: Always 0 (success)
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		continue;
	}
		putchar(alphabet);
	putchar('\n');
	return (0);
}
