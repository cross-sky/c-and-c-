
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1001

void main ( void )
{
	char	input[MAX_LEN], longest[MAX_LEN];
	int		len, longest_len = 0;

	while ( gets( input ) != NULL)
	{
		len = strlen( input );
		if ( len > longest_len )
		{
			longest_len = len;
			strcpy( longest, input );

		}
	}

	if ( longest_len > 0 )
	{
		puts( longest );
	}
}