#include <stdio.h>


long long calc(long long a, long long b, long long c)
{
	if (b == 0)
	{
		return 1%c;
	}
	else if (b == 1)
	{
		return a%c;
	}
	else if (b % 2 == 0)
	{
		int temp = calc(a, b / 2, c);
		return (temp%c * temp%c)%c;
	}
	else
		return (a * calc(a, b - 1, c))%c;
}

int main()
{
	long long int a, b, c;
	int result;
	//double a, b, c;
	printf("Hello World\n");
	scanf("%lld %lld %lld", &a,&b,&c);

	a = a % c;
	//b = b % c;
	
	result = calc(a, b, c);

	printf("%d", result);
	return 0;
} 