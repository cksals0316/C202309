#include <stdio.h>

int main()
{
	int i = 0;  //선언
	while (i < 10){
		if (i % 2 == 0) {
			i++;  //i가 2일때 다시 처음으로 돌아가서 i++만큼 더하고 시작함으로써 2가 들어가지 않게 만듦                                 
			continue;
		}
		printf("%d Hello World!\n", i++);
	
	}
	return 0;
}