#include <stdio.h>
int main()
{
	long long a;
	scanf("%lld",&a);
	while (a--) {
		double b;
		scanf("%lf",&b);
		printf("%.15lf\n",1/b);	
	}
}