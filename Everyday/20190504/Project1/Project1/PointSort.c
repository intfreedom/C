#include <stdio.h>
#include <string.h>

void main1()
{
	void sort(char *name[], int n);
	void print(char *name[], int n);

	char *name[] = { "Fishc.com", "www.fishc.com", "home.fishc.com", "Fishc.com/dz" };
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
			if (strcmp(name[k], name[j]) > 0)
			{
				k = j;
			}
			if (k != i)
			{
				temp = name[i];
				name[i] = name[k];
				name[k] = temp;
			}
		}
	}
}

void print(char *name[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%s\n", name[i]);
	}
}


void main()
{
	void sortN(char name[], int n);
	void printN(char name[], int n);
	//Ϊ������Ҫ��*��
	char *name[] = { "Fishc.com", "www.fishc.com", "home.fishc.com", "Fishc.com/dz" };
	int n = 4;

	sort(name, n);
	print(name, n);

	system("pause");
}

void sortN(char name[], int n)
{
	char temp;
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		k = i;

		for (j = i + 1; j < n; j++)
		{
			if (strcmp(name[k], name[j]) > 0)
			{
				k = j;
			}
			if (k != i)
			{
				temp = name[i];
				name[i] = name[k];
				name[k] = temp;
			}
		}
	}
}

void printN(char name[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%s\n", name[i]);
	}
}
