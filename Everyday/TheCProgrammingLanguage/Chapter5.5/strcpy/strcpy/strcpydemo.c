#include<stdio.h>

void main()
{
	void copy_string(char *from, char *to);
	void strcpy(char *s, char *t);
	/*����*a,*bbֻ�Ƕ�����һ��ָ�룬���ֵָ��һ���ַ���������a���Ա��޸�ָ��������ַ
	����ͼ�޸��ַ��������ݣ������û�ж���ģ���ʹ��b[],a[]
	�����еĵ����ַ����Խ����޸ģ�*/
	char *a = "I love code!";
	char b[] = "You may not love, but must insist!";//�����������ָ��*b�ᱨ��

	char aa[] = "I love code!";
	char *bb = "You";
	/*Ϊ������Ľ��aaʣ��Ĳ���û�б�����������
	����ĸ�Ԫ�طֱ�洢�ַ����ĸ����ַ�������'\0'��־�ַ����Ľ�����
	aa[] = "I love code!"Ϊ�β���Ϊ����ֵ֮��
	aa[] = "Youove code!"���ǵ�ͬʱ����\0Ҳ����������Ҳ�Ǿ�
	aa[] = "You\0"����ô�Ƿ�ʣ����ַ������ڴ�����Զ�������
	��Ȼ���£�o��'\0'���ǣ��������ַ������Զ�����ֻ��������������aa[]
	*/
	printf("%c\n", *aa);
	printf("%c\n", *bb);
	strcpy(aa,bb);
	printf("%s\n\n",aa);//ע��aa,��*aa�Ĳ�ͬȡֵ������aa�ǵ�һ����������ȡ����
	printf("%0x\n\n", &aa);
	printf("%c\n\n", *aa);
	printf("%c\n\n", *(aa+1));
	printf("%c\n\n", *(aa+2));
	printf("%c\n\n", *(aa+3));
	printf("%c\n\n", *(aa+4));
	printf("%c\n\n", *(aa+5));
	printf("%c\n\n", *(aa+6));


	printf("String a is: %s\nString b is: %s\n", a, b);
	printf("Copy string a to string b: \n");

	copy_string(a, b);
	printf("String a is: %s\nString b is: %s\n", a, b);

	system("pause");

}

void copy_string(char from[], char to[])
{
	char *p1, *p2;

	p1 = from;
	p2 = to;

	while ((*p2++ = *p1++) != '\0')
	{
		;
	}
}

/*strcpy: copy t to s; pointer version*/
void strcpy(char *s, char *t)
{
	int i;

	i = 0;
	while ((*s = *t) != '\0')
	{
		s++;
		t++;
	}
}