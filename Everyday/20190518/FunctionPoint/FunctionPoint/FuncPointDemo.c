#include<stdio.h>
#include<string.h>

void main()
{
	void sort(char *name[], int n);
	void print(char *name[], int n);

	char *name[] = {"Fish.com","WWW.Fish.com","home.fish.com","Fishc.com/dz"};
	int n = 4;

	sort(name, n);
	print(name, n);
	system("pause");
}

void sort(char *name[], int n)
{
	char *temp;
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(name[k], name[j]) > 0)//C/C++中，str1>str2返回正数，相等返回0；
			{
				k = j;
				temp = name[i];
				name[i] = name[k];
				name[k] = temp;
			}//以下有何区别；
			/*if (k != i)
			{
				temp = name[i];
				name[i] = name[k];
				name[k] = temp;
			}*/
		}
	}
}

void print(char *name[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s\n",name[i]);
	}
}


void main1()
{
	int a[] = {1,2,3,4,5};
	int *name[] = {&a[0],&a[1],&a[2],&a[3],&a[4]};
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d   ", *name[i]);
	}
	printf("\n\n");
	system("pause");
}