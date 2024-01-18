						***** 1 *****
// Vẽ Hình thoi ~
// #include <stdio.h>

// int main()
// {
// 	int n;
// 	scanf("%d",&n);
// 	for (int i=0;i<n;i++)
// 	{
// 		for (int j=1;j<=n*2;j++)
// 		{
// 			if (j<=n-i || j>=n+i+1)
// 				printf("*");
// 			else
// 				printf("~");
// 		}
// 		printf("\n");
// 	}
// 	for (int i=n-2;i>=0;i--)
// 	{
// 		for (int j=1;j<=n*2;j++)
// 		{
// 			if (j<=n-i || j>=n+i+1)
// 				printf("*");
// 			else
// 				printf("~");
// 		}
// 		printf("\n");
// 	}
// }

***** 2 *****
// Vẽ Mũi Tên
// #include <stdio.h>

// int main()
// {
// 	int n;
// 	scanf("%d",&n);
// 	for (int i=1;i<=n;i++)
// 	{
// 		for (int j=1;j<=2*(i-1);j++)
// 		{
// 			printf("~");
// 		}
// 		for (int j=1;j<=n-i+1;j++)
// 		{
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	for (int i=n-1;i>=1;i--)
// 	{
// 		for (int j=1;j<=2*(i-1);j++)
// 		{
// 			printf("~");
// 		}
// 		for (int j=1;j<=n-i+1;j++)
// 		{
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// }
							**** 3 ****
Vẽ hình mũi tên 2
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for (int i=1;i<=n;i++)
//	{
//		for (int j=1;j<=(n-i);j++)
//		{
//				printf("~");
//		}
//		for (int j=n-i+1;j>=1;j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i=1;i<n;i++)
//	{
//		for (int j=1;j<=i;j++)
//		{
//			printf("~");
//		}
//		for (int j=1;j<=i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

