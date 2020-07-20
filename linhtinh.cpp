#include <stdio.h>
//So dac biet
int main() {
	long long n;
	
	printf("Nhap so n: ");
	scanf("%lld", &n);
	
	for (long long i = 2; i * i <= n; ++i)
	{
		while (n % (i*i) == 0) 
		{
			printf("n = %lld\ti = %lld\n", n, i);
			n /= i;
		}
	}
	
	printf("%lld", n);
	
	return 0;
}

