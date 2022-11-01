#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
	int i;
	int a[SIZE] = {1, 2, 3, 4, 5};
	int b[SIZE] = {1, 2, 9, 4, 5};
	int flag_same = 1;
	for (i=0; i<SIZE; i++)
	{
		if (a[i] != b[i])
		{
			printf("%d 번째 요소는 서로 다릅니다", i);
			flag_same = 0;
		}
	}
	if (flag_same) printf("두 배열은 같습니다.");
}
