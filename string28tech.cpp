#include <stdio.h>

#include <string.h>

int min(int a,int b)
{
	int min=a;
	if (a>b)
	{
		min=b;
	}
	return min;
}

int islower(char c)
{
	if (c>='a' && c<='z')
	{
		return 1;
	}
	return 0;
}

int toupper(char c)
{
	if (c>= 'a' && c<='z')
	{
		c-=32;
	}
	return c;
}

int tolower(char c)
{
	if (c>='A' && c<='Z')
	{
		c+=32;
	}
	
	return c;
}

int check(char c[])
{
	for (int i=0;i<strlen(c);i++)
	{
		if (islower(c[i]))
			return 0;
	}
	return 1;
}

void Chuanhoa(char c[])
{
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c);i++)
	{
		c[i]=tolower(c[i]);
	}
}

char* strlwr1(char c[])
{
	for (int i=0;i<strlen(c);i++)
	{
		if (c[i]>= 'A' && c[i]<='Z')
		{
			c[i]+=32;
		}
	}
	
	return c;
}

int strcmp1(char a[],char b[])
{
	int n1=strlen(a);
	int n2=strlen(b);
	for (int i=0;i<min(n1, n2);i++)
	{
		if (a[i]!=b[i])
		{
			if (a[i]>b[i])
				return 1;
			else
				return -1;
		}
	}
	if (n1==n2)
		return 0;
	if (n1>n2)
		return 1;
	else 
		return -1;
}

// Doi 1 ki tu de thanh xau doi xung
//char a[1005];
//	scanf("%s",a);
//	int n=strlen(a);
//	int l=0;
//	int r=n-1;
//	int cnt=0;
//	while (l<r)
//	{
//		if (a[l]!=a[r])
//		{
//			cnt++;	
//		}
//		l++;
//		r--;
//	}
//	if (n%2==0)
//	{
//		if (cnt==1)
//			printf("YES");
//		else
//			printf("NO");
//	}else{
//		if (n%2==1 && cnt==0)
//			printf("YES");
//		else
//			printf("NO");
//	}

// Ham strtok
//char a[105];
//	gets(a);
//	int cnt=0;
//	char* token=strtok(a, " ");
//	while(token!= NULL)
//	{
//		printf("%s\n",token);
//		token = strtok(NULL, " ");
//	}

// Kiem tra co bao nhieu ky tu in hoa
//int cnt=0;
//		char a[1000];
//		gets(a);
//		char* token=strtok(a, " ");
//		while (token != NULL)
//		{
//			if (check(token))
//			{
//				printf("%s ",token);
//			}
//			token= strtok(NULL, " ");
//		}


int main()
{
	char b[1005];
	gets(b);
	char a[10];
	scanf("%s",a);
	char c[20][100];
	int n=0;
	char* token=strtok(b, " ");
	while (token != NULL)
	{
		if (strcmp1(token, a)!=0)
		{
			strcpy(c[n], token);
			n++;
		}
		token = strtok(NULL, " ");
	}
	for (int i=0;i<n;i++)
	{
	 	printf("%s",c[i]);
	 	if (i!=n-1)
	 		printf(" ");
	}
}




