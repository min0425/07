#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i;
int main(void)
{
	for ( i=0; i<5; i++ )
	{//같은 지역변수 i이기 때문에 f()에 의해 이미 i가 지금 10이 되어버려서 i<5라는 조건이 성립되지 않고 따라사 한번만 반복하고 끝남. 
		f();
	}
	return 0;
}
void f(void)
{
	for ( i=0; i<10; i++)
	printf("#");
}




