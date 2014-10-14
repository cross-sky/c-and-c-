
#include <stdio.h>
#include <stdlib.h>

void main (void)
{
	int		ch;
	char	sum = -1;

	while ( (ch = getchar()) != EOF )
	{
		putchar(ch);
		sum += ch;

	}
	printf( "%d\n", sum);
}