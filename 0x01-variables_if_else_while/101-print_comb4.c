#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * no printf/puts and Numbers must be separated by , followed by a space
 *
 * Return: 0 on success
 */
int main(void)
{
	int k = '0';
	int l = '0';
	int m = '0';

	while (k <= '7')
	{
		while (l <= '8')
		{
			while (m <= '9')
			{
				if (k < l && l < m)
				{
					putchar(k);
					putchar(l);
					putchar(m);
					if (!(k == '7' && l == '8' && m == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				m++;
			}
			m = '0';
			l++;
		}
		l = '0';
		k++;
	}
	putchar('\n');
	return (0);
}

