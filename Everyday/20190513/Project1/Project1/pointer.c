#include<stdio.h>
#include<stdlib.h>

void main()
{

	void copy_string(char *from, char *to);

	char *a = "I am a teacher";
	char b[] = "You are a student.";//���ﲻ��Ϊ*b;
	//b��д�룬*a�����ַ�����b[]Ҳ�ǣ�
	//*a�ڷ��������Կ������ѵ�ַ��ƫ������ֵ��*a����һ����ַ��ƫ������ֻ��������һ��������
	//b[]��ÿ���ַ��ֱ�ֵ��ÿ���ַ���Ӧһ��

//��C/C++�У� �ڴ��Ϊ5�������ֱ��Ƕѣ�ջ�����ɴ洢����ȫ��/��̬�洢���������洢����
//*a = "I am a teacher";�Զ����볣���洢�����������޷��ı�ģ�

	printf("String a = %s\nString b=%s\n",a,b);
	printf("copy string a to stringb:\n");

	copy_string(a, b);

	printf("\nstring a = %s\nString b=%s\n",a,b);
	system("pause");
}
//����XXXXXX,����Ϊwritten;
void copy_string(char *from, char *to)
{
	for (; *from != '\0'; from++, to++)
	{
		*to = *from;
	}

	*to = '\0';
}