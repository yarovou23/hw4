#include <stdio.h>
#include <locale.h>

int main()
{
	int A, B, C;

	scanf_s("%d %d %d", &A, &B, &C);
	if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0) {
		printf("Портал откроется");
	}

	return 0;
}