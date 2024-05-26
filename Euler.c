#include <stdio.h>
#include <math.h>

#include "Euler.h"
#include "functions.h"


long long int Problem_6(int j_)
{
	long long int result_ = SquareSum(j_) - SumSquare(j_);

	return result_;
}

long int Problem_7(int j_)
{
	long int i = 0;
	int counter_ = 0;
	while (counter_ != j_)
	{
		i += 1;
		if (Prime(i) == 1)
		{
			counter_ += 1;
		}
	}

	return i;
}

int Problem_8(char* str_, int len_, int j_)
{
	int i = 0;
	int copyi = 0;
 	int x = 1;
	int max = 0;
	while (str_[i] != '\0')
	{
		while (i < j_)
		{
			int y = char_to_int(str_[i]);
			if (y == -1)
				break;
			printf("%d ", y);
			x = x * y;
			printf("%d\n", x);
			i = i + 1;
		}
		if (max < x)
		{
			max = x;
		}
		printf("%d\n", max);
		printf("\n");
		copyi = copyi + 1;
		x = 1;
		i = copyi;
		j_ = j_ + 1;
	}
	return max;
}

void Problem_9(int sum_)
{
	int a, b, c;
	for (a = 1; a < sum_ / 3; a++) {
		for (b = a + 1; b < sum_ / 2; b++) {
			c = sum_ - a - b;
			if (a * a + b * b == c * c) {
				printf("a = %d, b = %d, c = %d\n", a, b, c);
				printf("Произведение abc: %d\n", a * b * c);
				return;
			}
		}
	}
	printf("Тройка Пифагора не найдена.\n");
}

long long int Problem_10(int j_)
{
	int i = 0;
	long long int sum = 0;
	while (i < j_)
	{
		i += 1;
		if (Prime(i) == 1)
		{
			sum += i;
		}
	}

	return sum;
}

