#include<Windows.h>
#include<stdlib.h>

void open(char *str)
{
	ShellExecuteA(0, "open", str,0,0,1);
}
void close()
{
	system("taskkill /f /im YoudaoDict.exe");
}

void search()
{
	keybd_event('J', 0, 0, 0);
	keybd_event('J', 0, 2, 0);
	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	keybd_event('D', 0, 0, 0);
	keybd_event('D', 0, 2, 0);
	keybd_event('O', 0, 0, 0);
	keybd_event('O', 0, 2, 0);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	Sleep(30);
	keybd_event('1', 0, 0, 0);
	keybd_event('1', 0, 2, 0);
	Sleep(30);

	keybd_event(0x0d, 0, 0, 0);
	keybd_event(0x0d, 0, 2, 0);

}
//������󻯣�
//�������δ�ɿ������ü��������޷��õ����⣻
void maxbaidu()
{
	keybd_event(VK_LMENU, 0, 0, 0);
	keybd_event(VK_SPACE, 0, 0, 0);
	keybd_event("X", 0, 0, 0);
	keybd_event("X", 0, 2, 0);
	keybd_event(VK_SPACE, 0, 2, 0);
	keybd_event(VK_LMENU, 0, 2, 0);

}

void click()
{
	//ShellExecuteA("");
	
	mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, 500 * 65535 / 3840, 800 * 65535 / 2160, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

void main1()
{
	keybd_event(0x5b, 0, 0, 0);
	keybd_event("M", 0, 0, 0);
	keybd_event("M", 0, 2, 0);
	keybd_event(0x5b, 0, 2, 0);


}

void main()
{
	open("http://www.baidu.com");
	
	Sleep(3000);
	search();
	Sleep(3000);
	maxbaidu();
	Sleep(3000);
	click();

	//system("pause");
	//close();
	//MOUSEEVENTF_ABSOLUTE��dx��dyָ���������ϵͳ�е�һ������λ�ã����������ϵ�У�
	//��Ļ��ˮƽ�ʹ�ֱ�����Ͼ��ȷָ��65535��65535����Ԫ�� 
	//�ƶ���Ļ��40��40���λ�ã�
	//main1();//ȫ����С��
	/*mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, 40 * 65535 / 3840, 40 * 65535 / 2160, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);*/
}