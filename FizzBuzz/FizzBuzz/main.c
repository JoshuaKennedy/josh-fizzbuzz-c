#include <stdio.h>
#include <conio.h>

void Pause()
{
	printf("Press any key to continue...");
	_getch();
	printf("\n");
}

int main()
{
	int max = 100;
	int i = 0;

	for (i = 0; i < max; i++)
	{
		if (i % 3 == 0 && !(i % 15 == 0) && i != 0)
			printf("Fizz");
		else if (i % 5 == 0 && !(i % 15 == 0) && i != 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0 && i != 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		printf("\n");
	}

	Pause();
}
