//筛选法，求质数
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 300

int prime_v1( int n );
int prime_v2( int n );

int main()
{
	printf("%d\n", prime_v1( NUM ));
	printf("\n");
	printf("%d\n", prime_v2( NUM ));

}

//此版本有许多重复计算的，改进
int prime_v1( int n )
{
	int i,j;
	int col = 0,count =0;

	char num[NUM+1];
	for( i = 2; i < NUM+1; i++){
		num[i] = 1;
	}

	for( i = 2; i < NUM+1; i++){
		j = 2;
		while( j * i < NUM+1 ){
			num[j*i] = 0;
			j++;
		}
	}

	for( i = 2; i < NUM+1; i++)
	{
		
		if( num[i] != 0){
			printf( "%-5d", i);
			col++;
			count++;
		}

		if( col % 8 == 0){
			printf("\n");
			col = 0;
		}

	}

	return count;
}


int prime_v2( int n )
{
	int i,j,col=0;
	int count=0;

	char* flag = (char*) malloc( n+1 );

	flag[2] = 1;

	for( i=3; i<n; i++)
	{
		flag[i++] = 1;
		flag[i] = 0;
	}

	if( n%2 != 0)
		flag[n] = 1;

	for( i=3; i<=n/2; i+=2) //条件可以再精简下
	{
		if( 0 == flag[i]) continue;

		for( j=i+i; j<=n; j+=i)
			flag[j] = 0;
	}

	for( i=2; i<=n; i++)
	{
		if( flag[i] != 0) 
			{
				printf( "%-5d", i);
				col++;
				count++;
			}
			if( col % 8 == 0){
			printf("\n");
			col = 0;
			}
	}

	free( flag );

	return count;
}