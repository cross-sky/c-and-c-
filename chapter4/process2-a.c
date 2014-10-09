#include <stdio.h>
#include <math.h>

#define N 10 

int main()
{
	int i, j;
	for( i = 2; i <=N; i++){
		for( j = 2; j <= (int)sqrt(i); j++ ){  //改进一下，2以后的质数都是奇数
			if( i % j == 0 )
				break;
		}

		if( j > (int)sqrt(i) )
			printf( "%-10d",i);
	}
	return 0;
}

