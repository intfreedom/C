#include<stdio.h>
#include<math.h>
#include<Windows.h>

void main()
{
	double ch = 10.0;
	double am = 17.0;
	double chd = 1.07;
	double amd = 1.03;

	for (int i = 1; i <= 100; i++)
	{
		printf("Chinese %d year GDP is %f\n", 2014 + i, ch*pow(chd, i));
		printf("American %d year GDP is %f\n", 2014 + i, am*pow(amd, i));
		if (ch*pow(chd, i) > am*pow(amd, i))
		{
			MessageBox(0, "Congituous!!!", "2115",0);
		}
		
		
	}

	getchar();
}