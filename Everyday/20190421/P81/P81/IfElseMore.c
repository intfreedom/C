#define _CRT_SECURE_NO_WARNINGS //�Ƴ���ȫ�������ַ�������
#include<stdio.h>
#include<stdlib.h>
#include<math.h>//sqrt()�����ﶨ�壻���ǲ��ӣ�Ϊ�β��ᱨ��ֻ�����н�����ԣ�

void main11()
{

	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a == 0)
	{
		printf("One Yuan");
		if (b == 0)
		{
			if (c == 0)
			{
				printf("X can be anyone!!!");
			}
			else
			{
				printf("No itis wrong!!!");
			}
		}
		else
		{
			printf("x=%f", -1*c/b);
		}
	}
	else
	{
		printf("Two Yuan");
		double db = b*b - 4*a*c;
		if (db==0)
		{
			printf("%f\n", sqrt(db));
			printf("%f\n", sqrt(3));
			printf("x1=x2=%f", -1*b/a/2);
		}
		else if (db>0)
		{
			printf("x1=%f, x2=%f", (-1*b+sqrt(db))/2/a, (-1 * b - sqrt(db)) / 2 / a);
		}
		else
		{
			double p = -1 * b / 2 / a;
			double q = sqrt(-1 * db) / 2 / a;
			printf("x1=%f-%f i, x2=%f+%f i", p,q,p,q);
		}
	}

	system("pause");
}

void main12()
{
	enum week {One, Two, Three, Four, Five, Saturday, Sunday};

	enum week week1 = Five;
	if (Five == week1)
	{
		printf("%d\n", week1);
	}
	printf("%d\n", One);
	printf("%d\n", Two);
	//enumֻ����������
	enum jun
	{
		˾�� = 10,
		���� = 9
	};

	enum jun j = ˾��;
	printf("%d", ˾��>����);


	system("pause");
}

void main()
{
	//sometimes, ifelse is confused; we can use switch;
	int num = 10;
	//switch��...���еı��ʽֻ�ܴ������ͣ�Ҳ������char,��enum
	//case����������case���ʽֻ���ǳ�����
	switch (num)
	{
	case 10://���Թ��ã�һ�����
	case 0:
		printf("\nOne Solider");
	case 1:
		printf("\nOne Class 12person");
	case 2:
		printf("\nOne Row 36 person");
		break;
	case 3:
		printf("\nOne Lian 108 person");
		break;

	case 4:
		printf("\nOne Yin 324 person");
		break;

	case 5:
		printf("\nOne Tuan 972 person");
		break;

	default:
		printf("\nEnough");
	}

	system("pause");
}