#include<stdio.h>
#define PI 3.14159
int main()
{
	float high, radius, vol;
	scanf( "%f %f", &radius, &high );
	vol = ( radius * radius * PI ) * high;
	printf( "The vol:%0.3f\n", vol );
	return 0;
}
