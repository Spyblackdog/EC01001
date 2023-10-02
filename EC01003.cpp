#include <stdio.h>
int main()
{
 	int a,b;
	scanf("%d%d", &a,&b);
	if (b==0) {
	printf("0");
	}else{	
		int x=a+b;
		int y=a-b;
		int z=a*b;
		int t=a%b;
		float e=(float)a/b;
		printf("%d %d %d %.2f %d" ,x,y,z,e,t);}
	return 0;
}