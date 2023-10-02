#include <stdio.h>
int main()
{
	float a,b;
	scanf("%f %f",&a,&b);
	if (a==0,b==0) { printf("Infinite solutions");
	}else if (a!=0) { printf("%.2f",-b/(float)a);
	}else{ printf("No solution");
	}
}