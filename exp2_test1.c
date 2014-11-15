/*编写一个程序，输入某雇员的每周工作时间（以小时计）和每小时的工资数，计算并输出他的工资。(如果时间小于0或大于一周的总时间输出input is wrong!)若雇员周工作小时超过40 小时，则超过部分按原工资的1.5 倍的加班工资来计算， 若雇员每周工作小时超过60 小时，则超过60 的部分按原工资的3 倍的加班工资来计算， 而40 到60 小时的工资仍按照原工资的1.5 倍的加班工资来计算。
 * Sample Input:
 * 0 4
 * 45 4.5
 * 60 5
 * -10 4
 *  Sample Output:
 *  120
 *  213.75
 *  350
 *  input is wrong!*/
#include<stdio.h>
int main()
{
	float hour, per;
	double wage;
	scanf( "%f %f", &hour, &per );
	if( hour < 0 || hour > 7 * 24 )
		printf( "input is wrong!\n" );
	else
	{
		if( hour <= 40 )
			printf( "%g\n", per * hour );
		else if( 40 < hour <= 60 )
		{
			wage = (( hour - 40 )*1.5 + 40 ) * per;
			printf( "%g\n", wage );
		}
		else if( hour > 60 )
			printf( "%g\n", (( hour - 60 ) * 3 + ( 60 - 40 ) * 1.5 + 40 ) * per );
	}
	return 0;
}
