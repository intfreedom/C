#include<Windows.h>
//open�������
//������ַ��
//
void main()
{
	keybd_event(0x5b, 0, 0, 0);//Windows���� ���£�
	keybd_event(0x5b, 0, 2, 0);//Windows�����ɿ���

	keybd_event(0x5b, 0, 0, 0);
	keybd_event('M', 0, 0, 0);

	keybd_event('M', 0, 2, 0);//�ɿ�
	keybd_event(0x5b, 0, 2, 0);
	
}