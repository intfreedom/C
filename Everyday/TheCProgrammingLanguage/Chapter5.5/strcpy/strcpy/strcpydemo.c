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
	printf("%s  %c\n",a,*a);//�����ַ�ָ�������ķ���Ϊ�β��ܼ�*,���ԣ�ֻ�������䲻�ԣ�
	printf("%s  %c\n",b,*b);//*bȡ��ֻ�ǵ����ַ���
	printf("%0x  %0x\n", a, &a);//�����ַ�ָ��������ֵ�ǲ�һ���ģ�
	printf("%c  %s\n", *a, *(&a));//��*a��%s����ʱ����,��һ��ֵ���ַ����ĵ�һ���ַ�I���ڶ���ֵ��  
	printf("%0x  %0x\n", b, &b);//���������ָ����ֵ������ֵ����ͬ�ģ�

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
	/*C������û���ַ����������ͣ�
	���ַ�������ģ���ַ������ַ�������'\0'�������ַ����飻
	�ַ������Է�����ջ�ռ䣬�ѿռ����ֻ���洢��
	
	���Ͼ����ַ�ָ�룬���ַ�����ֱ���ģ���ַ�����ע��������
	����Ϊ�Σ�����Ϊ���λ�õĲ�����
	char *a = "I love code!";�������ֻ���洢����
	*/
	printf("************\n");
	/*ָ���������:
	char *apone,aptwo,apthree;//��������ָ��char�����ݵ�ָ�룬
	char *ap[3] = {apone,aptwo,apthree}//ָ�����������Ԫ�أ�
	*apone="I and you all people!"//��һ��Ԫ�أ���һ���ַ�ָ�룻
	����ַ�ָ��ʱ�����ü�*��ֱ��printf("%s\n",apone);����
	��������ȡֵ�ź���
	��һ�����ԣ�
	*/

	int *apintone,apinttwo,apintthree;
	apintone = 1;
	printf("%d\n", apintone);//��ȡint *apint[3]��ֵʱ������*��ֱ��printf("%d\n", apint[0]);

	char *ap[3] = { "I and you all people!","Love", "CProgramming" };//��ͬ�����϶���
	int *apint[3] = { 1,2,3 };//���洢����ֵ��ʱ�򣬲�����������ʽ��ȡ����������
	/*ע��ָ���������ά���������
	ָ������char *ap[n]�ĺ��壺
	ָ������ap,����n��ָ��char�����ݵ�ָ��Ԫ�����
	Ҳ����˵����n����ַ���*/
	//printf("%s\n\n",apint);//�������룬Ӧ���ǿ����ַ�����
	printf("%0x %s %s\n", ap,ap[0], *&ap[0]);//��һ����ַ��Ӧ��ֵ��Ҳ����ָ�������һ��Ԫ��ָ���ֵ
	printf("%s\n", ap[1]);//����*&ap[1]��ap[1]�ǵȼ۵ģ�
	printf("%s\n", ap[2]);
	printf("%d\n", apint[0]);//��һ����ַ��Ӧ��ֵ��Ҳ����ָ�������һ��Ԫ��ָ���ֵ
	printf("%d\n", apint[1]);
	printf("%d\n", apint[2]);
	printf("%0x\n", &(ap[0]));//ָ������ĵ�һ��Ԫ�أ�==printf("%0x\n", &ap);
	printf("%0x\n", &(ap[1]));//ָ������ĵڶ���Ԫ�أ�
	printf("%0x\n", &(ap[2]));//��Щֵ���4����Ϊ��ֵַ�Ĵ�СΪ4�ֽڣ�
	/*ָ�����ܹ����һ����ַ��һ��洢��Ԫ��ͨ����������4���ֽڣ���
	�ڴ��ַ���֣�����һ���ڴ��Ŷ�Ӧ1�ֽڵ�ַ������4GB�ڴ棬�����ڴ���*1�ֽڣ��ڴ��ž���4Gb��2��32�η�λ��
	����4GB��������ڴ���Ϊ2��32�η���Ϊ�λ���x64����x86��������ַ��Ŷ���8��ʮ����f��Ҳ����2��32�η���
	��ֵַ��ʽΪʮ�����ƣ�0x00000000,16��8�η���Ҳ����4���ֽڣ���2��8�η���4�η�*/
	printf("%0x %0x\n", ap, &ap);//Ϊ������������ȵģ�����
	//printf("%0x\n", &(ap+1));
	//printf("%0x\n", &(ap+2));
	/*���µ�x86����ʱ�����Ϊ1��12��4
		  ��x64����ʱ�����Ϊ1��24��8*/
	printf("%d %d %d\n\n",sizeof(char),sizeof(ap),sizeof(&(ap[0])));
	printf("%0x\n", &ap[0]);//== printf("%0x\n", &ap);
	printf("%0x\n", &ap[1]);//Ϊ�ε�ַ��ֵΪ4��
	printf("%0x\n", &ap[2]);
	printf("%0x\n", &ap[3]);
	printf("%0x\n", &ap[4]);
	printf("%0x\n", &ap[5]);
	printf("************");
	/*���ܶ���char bp[]={ "I and you","Love", "CProgramming" },��Ϊ"I and you"��һ���ַ�����
	��ֵΪ��ά���飬��ֵ���岻��
	*/
	char bp[][20] = { "I and you","Love", "CProgramming" };
	printf("%s\n", bp[0]);
	printf("%s\n", bp[1]);
	printf("%s\n", bp[2]);
	printf("%0x\n", &bp);
	//printf("%0x\n", &(bp+1));
	//printf("%0x\n", &(bp+2));
	printf("%0x\n", &bp[0]);
	printf("%0x\n", &bp[1]);//Ϊ��������ַ��ֵΪ20��
	printf("%0x\n", &bp[2]);
	printf("%0x\n", &bp[3]);
	printf("%0x\n", &bp[4]);
	printf("%0x\n", &bp[5]);


	printf("String a is: %s\nString b is: %s\n", a, b);
	printf("Copy string a to string b: \n");

	copy_string(a, b);//b����ֵ�������ǿ��Ըı��������char b[]��������char *b��
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