#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

#define NUL '\0'

int is_white( int ch );
void deblank( char *string );


void main(void)
{
	char input[50];

	while( gets( input ) != NULL )
	{
		printf("orignal string : %s\n", input);
		deblank( input );
		printf( "deblank string: %s\n",input);
	}
}


void deblank( char *string )
{
	char *dest;
	char *src;
	int ch;
	
	src = string;
	dest = string++;

	while( (ch = *src++) != NUL )
	{
		if( is_white( ch ) ) {
			if( src == string || !is_white( dest[-1] ) )
				*dest++ = ' ';
			}
		else
		{
			*dest++ = ch;
		}

	}
	*dest = NUL;
}

int is_white( int ch )
{
	return ch == ' '|| ch == '\t' || ch == '\v'
			|| ch == '\f' || ch == '\n' || ch == '\r';
}
