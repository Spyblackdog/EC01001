#include <stdio.h>
#include <math.h>

int max(int a,int b)
{
	int max=a;
	if (a<b)
		max=b;
	
	return max;
}

int tinhgiaithua(int a)
{
	int giaithua=1;
	for (int i=1;i<=a;i++)
	{
		giaithua=giaithua*i;
	}
	
	return giaithua;
}

int primenum(int a)
{
	if (a<2)
		return 0;
	else{
		for (int i=2;i<=sqrt(a);i++)
		{
			if (a%i==0)
				return 0;
		}
	}
	
	return 1;
}

int timucln(long long a,long long b)
{
	if (a==0 || b==0)
		return a+b;
	else{
		while (a!=b)
		{
			if (a>b)
				a=a-b;
			else
				b=b-a;
		}
	}
	
	return a;
}

int timbcnn(long long a,long long b)
{
	long long bcnn;
	bcnn=a*b/timucln(a,b);
	
	return bcnn;
}

int pascal(int n,int k)
{
	if (n==k || n==0)
		return 1;
	else
		return pascal(n-1,k-1) + pascal(n,k-1);
}

int fibo(int n)
{
	if (n==1 || n==2)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
		
}

int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",fibo(n));
	}
	
}



