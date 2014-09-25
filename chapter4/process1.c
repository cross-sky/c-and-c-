#include<stdio.h>

void main( void )
{
	float num, new_guess;
	float last_guess ;

	while( scanf( "%f", &num) == 1)
	{
		new_guess = 1; //important 要不然此值就是上一次计算后的值，没初始化
		if( num <= 0 )
			printf( " %g is not a negative number, cannot compute\n", num);

		else
			{
				do{
					last_guess = new_guess;
					new_guess = ( last_guess + num / last_guess ) / 2;
					printf( "%.15e    ", new_guess);
					printf( "%g\n", new_guess);
				
				}while( new_guess != last_guess );
		
			printf( "square root of %g is %g\n", num, new_guess);
			}
	}
}