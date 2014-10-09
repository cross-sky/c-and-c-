#include <stdio.h>  //笨方法2，从2-n/2，笨方法3，从2-根号n，方法四，筛选法
 
void main ( void )
{
	int num, count = 0, value;

	while ( scanf( "%d", &num ) == 1 )       //2是最小的是质数，
	{
		if( num == 1) printf( "num:%d is not a prime\n", num);

		else{
//			printf( "num:1\n"); //1.质数在1-n/2之间被整除1次，2.质数在2-n/2之间不能被整除

			for( value = 2; value <= num; value++ )
			{	int i;
				for( i = 1; i < value/2 + 1; i++)
				{
					if( value % i == 0 ) count++;
					if( count > 1) break;
				}
				
				if( count == 1)
					printf( "num:%d\n", value);

				count = 0;
			}
		}
	}
}








/*

void main( void )
{
	int num;

	while( scanf( "%d", &num) == 1 )
	{
		int i,j;

		for( i = 2; i <= num ; i++)
		{
			{
				for( j = 2; j <= i/2 ; j++)
				{
					if( i % j == 0 ) 
						{
							if( j == i ) printf( "num: %d\n", i );
							else break;
					}
					
					else


				}
			}
		}
	}
}
*/