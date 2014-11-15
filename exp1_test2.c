/*This is Exp1_test2.c*/
/*输入两个整型数字（a,b); 
 * 输出有两行 第一行输出整型和字符在内存中所占的字节数， 第二行输出两个整数（输入的两个整数）所对应的字符。*/
#include<stdio.h>
int main()
{
	int i1, i2;
	char ch1, ch2;
	scanf( "%d %d", &i1, &i2 );
	ch1 = i1;
	ch2 = i2;
	printf( "%d %d\n", sizeof( i1 ), sizeof( ch1 ) );
	printf( "%c %c\n", ch1, ch2 );
	return 0;

}
