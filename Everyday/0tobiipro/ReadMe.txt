1.1��Linux�ϰ�װ�͹���Pro SDK
1.1.1
https://github.com/tobiipro/prosdk-addons-c/
1.1.2
����sdk�Ĳ���Ҫ������,vectormath.h,screen_based_calibration_validation.h,
�������ļ�����sdk�е��ļ���
1.1.3ʹ��github�ϵķ���������Ҫʹ�� -ltobii_research ʱ�������ֱ���:
cogp3@cog3:~/intfreedom/LearnC/Everyday/0tobiipro/addonsLinux20190731/prosdk-addons-c-master/source$ gcc -o sample ~/intfreedom/LearnC/Everyday/0tobiipro/addonsLinux20190731/prosdk-addons-c-master/source/sample.c -ltobii_research -ltobii_research_addons
In file included from /home/cogp3/intfreedom/LearnC/Everyday/0tobiipro/addonsLinux20190731/prosdk-addons-c-master/source/sample.c:4:
/home/cogp3/intfreedom/LearnC/Everyday/0tobiipro/addonsLinux20190731/prosdk-addons-c-master/source/screen_based_calibration_validation.h:26:10: fatal error: tobii_research.h: No such file or directory
 #include "tobii_research.h"
          ^~~~~~~~~~~~~~~~~~
compilation terminated.

ע��linux��ʹ�õķ� ` `  �����Ż��ƣ�ִ����������������
ʹ����ҳ,http://developer.tobiipro.com/c/c-getting-started.html�ϵķ�����
cogp3@cog3:~/intfreedom/LearnC/Everyday/0tobiipro/addonsLinux20190731/prosdk-addons-c-master/sdk$ gcc ../source/sample.c `pkg-config --cflags --libs tobii_research` -o sample
/usr/bin/ld: skipping incompatible /usr/local/lib/tobii_research/libtobii_research.so when searching for -ltobii_research
/usr/bin/ld: cannot find -ltobii_research
/usr/bin/ld: cannot find -lavahi-client
/usr/bin/ld: cannot find -lavahi-common
collect2: error: ld returned 1 exit status

1.1.3.1
http://developer.tobiipro.com/c/c-getting-started.html�������������ģ�sudo make install
To install the 64-bit tobii_research.ֻ����64λ������һ������/usr/bin/ld: cannot find -ltobii_research
��Ϊ��cogp3@cog3:~/intfreedom/LearnC/Everyday/0tobiipro/addonsLinux20190731No32/prosdk-addons-c-master/sdk$ gcc ../source/sample.c `pkg-config --cflags --libs tobii_research` -o sample
/usr/bin/ld: cannot find -lavahi-client
/usr/bin/ld: cannot find -lavahi-common
collect2: error: ld returned 1 exit status

��sample.c��Ϊvectormath.h,screen_based_calibration_validation.h,����.c�����У�


1.2��Windows�ϰ�װ�͹���Pro SDK
�������°汾��Tobii Pro SDK C Binding�� 
�����������������Tobii Pro�۶���ͨ�ŵ�Ӧ�ó�������������ļ��� ��ȡ�ļ��������Ƿ��ڱ��濪���ļ���λ�á�
1.1.1ʹ��tobii_research����
Tobii Pro SDKʹ��Microsoft��Windows 8.1 SDK������ �������ʾ���У�����tobii_researchͷ�ļ���װ��path-to-includes�����ٶ�tobii_research�ⰲװ��path-to-libs�� 
��ˣ����������Ŀ����һ��ʹ��Tobii Pro SDK��simple_project.c�ļ�����ô����ͨ������������������������ӣ�
cl simple_project.c /I path-to-includes path-to-libs \ tobii_research.lib
��ע��cl���cl /I <dir>�ǰ�Ŀ¼����include��¼·����
1.1.2����ʹ��tobii_research������Ӧ�ó���
Ҫʹ��Tobii Pro SDK����Ӧ�ó���������һ���й�����simple_project������Ҫ���path-to-libs��ΪӦ�ó��������·���� һ�ַ����ǽ�path-to-libs��ӵ���������PATH��

1.3 SDK��ҳ�棺https://www.tobiipro.com/product-listing/tobii-pro-sdk/
�����κ����Ե�ͨ�ø��http://developer.tobiipro.com/commonconcepts.html
��Ӧ��������վ��https://www.tobiipro.com/zh/product-listing/tobii-pro-sdk/#%25E6%258A%2580%25E6%259C%25AF%25E8%25A7%2584%25E6%25A0%25BC
github�ϵ�ʾ��https://github.com/tobiipro/prosdk-addons-c/

1.3.1Tobii Pro SDK
�����������׼������ڹ�������Ӧ�ó�������Tobii Pro���۶������ʹ�á� Ϊ���ֱ�����Ժ�3D����Ԥ�Ƽ��ṩ��ƽ̨֧�֡�
��Ʒ�ص㣺
���ڿ�������Ӧ�ó�����ۺϹ��߰�
Tobii Pro SDK��һ��ȫ��Ĺ��߰����ɰ����о���Ա���������������ɹ��������о��ķ���Ӧ�ó���ʹ��Tobii�Ļ�����Ļ���۶��ǡ� ��רΪ��������ע�����ݵ�Ӧ�ó������ơ�
���׼�֧��Tobii Pro������Ļ���۶��ǵ�������Ʒ��ϡ� �鿴֧�ֵ��۶��ǵ���ϸ��Ϣ����Tobii Pro�������۶���Ĭ����Pro SDK���ݣ�Tobii Pro Nano��
һ��SDK�����Ӧ�ó���
Pro SDK�ṩ��ƽ̨֧�֣�Windows��Linux��Mac������Զ��ֱ�����ԣ�.NET��Python��Matlab / Octave��C����API���Լ�3D���棨Unity����Ԥ�Ƽ��� 
��ʹ���ܹ�������಻ͬ���͵ķ���Ӧ�� - �����ڿ�ѧ�о��Ķ����о���������ҵӦ�á� Pro SDK�����ڼ�ʵ�Ļ���֮�ϣ������ڲ�ͬ��ƽ̨�Ͱ������ù��ܡ�


1.4Tobii Pro Eye Tracker Manager  Tobii Pro�۶��ǹ�������
���������������������Ļ���۶��ǡ� ��Ӧ�ó������������ô��򲻴���Ļ���۶��ǣ����������û�У׼�͹����ų��� �����۶����ͺţ���������ʹ�������������ú͸��¹̼���
��������Ч�����ú�����
Tobii Pro�۶��ǹ�������һ���µ����ú�����ʵ�ó��򣬿ɰ������������ӵ��۶��ǡ���������ṩ�ģ��ɴ�����Tobii Pro SDK��Tobii Pro Lab�û��Ĺ���Ч�ʡ�
Pro Eye Tracker Manager�����о���Ա�����۾�һ��ʹ��ʱ���������۶��ǡ���Ӧ�ó����������ó�������������е�Ӳ��������������������̼���
�����ƶ��豸֧�ܵ��û���Tobii Pro�۶��ǹ������ṩ��һ���򵼺ͼ򻯵����ú������۶��ǵĹ��̣����ڲ����ƶ��豸��
��������۶���֧�ֲ�ͬ�Ĳ���Ƶ�ʻ��۶�׷��ģʽ�������ʹ��Pro Eye Tracker Manager������Щģʽ��ģʽ��Ӧ�۶����ռ��������ݵķ�ʽ��
����Tobii Pro Spectrum��Tobii Pro Nano��Pro Eye Tracker Manager���ڸ����۶��ǹ̼������������۶���ģ�ͣ�ʹ���۶�����������߸��¹̼���
���ٿɿ����û�У׼
Pro Eye Tracker ManagerΪPro SDK�û��ṩ��һ����Ч��ѡ����Խ��п��ٿɿ����û�У׼�� ��У׼֮ǰ�����״̬���ָʾ�������۾��ڹ�����ڵ�λ�á�
������ǵļ���֧���Ŷ�Ҫ�󣬿��Դ����͵�����������ļ��Խ��д��������ų���
ʹ��Tobii Pro�۶��ǹ��������Ч��
Pro SDK��Pro Eye Tracker Manager���䣬����һ�����������ɰ���������������۶��ǡ�
�ù���֧�ַ����۶�׷��Ӧ�ó��������̵ĳ��ò��֣��ù��߿���ʹ�õ��ù�����Pro SDK�Ϲ����ķ���Ӧ�ó����޷켯�ɡ� �����������ʾ���򣬲鿴���״̬��ͷ��Ŀ��ӻ����Լ������û�У׼��
�����۶���ģ�ͣ�Pro Eye Tracker Manager�����������¹̼������Ĳ���Ƶ�ʡ�
һ��Ӧ�ó���֧������۶��Ǻ�ƽ̨
Pro Eye Tracker Manager������Tobii Pro�����л�����Ļ���۶��ǣ������ͬ��Ӧ�ó��������������������о��ĸ���ģ�͡�
��Ӧ�ó���������Windows��Linux��Macϵͳ�� �������Mac��Linux�����У���֧��Tobii Pro X3-120��ҪEPU��
������Ӧ�ó��򼯳�
Pro Eye Tracker Manager����ʹ�õ��ù�����Pro SDK�Ϲ����ķ���Ӧ�ó��򼯳ɡ� Pro SDK�Խ�Ϊ�о���Ա�ṩ��ֵ�����ԣ����۶�׷�����Ӧ�ó���Ĺ������̵ĳ������֣�
����������ʾ���򣬲鿴���״̬��ͷ��Ŀ��ӻ����Լ������û�У׼�������� ʹ�ô˹��߿�������ɣ���������ı������� �����޷켯��ʹ�о���Ա�ܹ����ɸ�Ч�ش����Լ���Ӧ�ó���

1.5��Դ�������
Ϊ��ʹTobii Pro SDK������ʹ�ã�һЩ���������û���������Ϊ��ѡ����ʵ�֣��������ػ��Ʋ��ڴ�����ʹ�á� 
��Щ����������ǿ�Դ�ģ�����GitHub���йܣ���˴����������ã��κ��˶��������ɵ��ṩ����͸��ġ� 
У׼��֤

��ִ���۶�׷���о�ʱ����У׼��ִ�й������ܵ���֤�ǳ����á� �˲���ͨ����ΪУ׼��֤�� ����У׼��֤�ĳ��ó�����Ϊ��������ʾһ���µĴ̼��㣬�ڴ̼������ڼ��ռ��������ݣ�������������������ڴ̼����λ�ü���׼ȷ�Ⱥ;�ȷ�ȵ�ֵ�� ������Ӧ�ÿ������� 
������������ռ�ע�����ݺͼ������ܽ����������й��ܡ� Ψһ�������������̼��㣨�������ķ����ںܴ�̶���ȡ������ʹ�õı�ʾ��ܣ���

1.5.1����Windows
��Tobii Pro SDK�浵��ѹ����addons�ļ��и�Ŀ¼�е���Ŀ¼sdk��
��Visual Studio����win32Ŀ¼�м��ؽ��������
������������ã���Debug / Release��x86 / x64����
Ҫʹ�øÿ⣬����Ҫ��Դ���������ֶ���������DLL��tobii_research_addons.dll��tobii_research.dll��������Ե�lib�ļ��� �μ�ʾ����Ŀ��

1.5.1.1
cl sample.c /I D:\02ability\LearnC\Everyday\0tobiipro\addons20190722\prosdk-addons-c-master\sdk\32\include D:\02ability\LearnC\Everyday\0tobiipro\addons20190722\prosdk-addons-c-master\sdk\32\lib\tobii_research.lib
���Ǳ���
sample.c
sample.c(1): fatal error C1083: �޷��򿪰����ļ�: ��stdio.h��: No such file or directory
1.5.1.2 cl��������ã�����ע��cl���cl /I <dir>�ǰ�Ŀ¼����include��¼·���У������Ǳ�������ӣ�link)����д��
����(compilation , compile) 1�����ñ�������Դ���Ա�д��Դ�������Ŀ�����Ĺ��̡� 2���ñ���������Ŀ�����Ķ����� 
��̬���ֳƶ�̬���ӿ�Ӣ��ΪDLL����Dynamic Link Library ����д��ʽ��DLL��һ���������ɶ������ͬʱʹ�õĴ�������ݵĿ⣬DLL���ǿ�ִ���ļ�
1.5.1.2.1��ʹ�л���sample.c����Ŀ¼Ҳ����
cl sample.c /I D:\02ability\LearnC\Everyday\0tobiipro\addons20190722\prosdk-addons-c-master\sdk\32\include D:\02ability\LearnC\Everyday\0tobiipro\addons20190722\prosdk-addons-c-master\sdk\32\lib\tobii_research.dll
1.5.1.3
��VS 2017�Ŀ�����Ա������ʾ�����򿪣�����fatal error C1083: �޷��򿪰����ļ�: ��stdio.h��: No such file or directory�������
���֣�cl: ������ warning D9024 :�޷�ʶ���Դ�ļ����͡�D:\02ability\LearnC\Everyday\0tobiipro\addons20190722\prosdk-addons-c-master\sdk\32\lib\tobii_research.dll���� �ٶ�Ϊ�����ļ�


1.5.1.4
���ϴ��tobii_resrearch.lib,�ļ�дΪdll���޸�Ϊtobii_resrearch.lib֮����ֵı���sample.exe : fatal error LNK1120: 7 ���޷��������ⲿ���

1.5.1.5
��tobii_research_addons����ҳ����ĿĬ��ֵ---�������� ��Ϊ��Ӧ�ó���(.exe))���������������Ч��Win32Ӧ�ó�����ʧ��

Visual Studio���������õ������Ŀ�ʱ�����ܻ�����Error LNK 2019���������ڿ����ò���ȷ���µġ������������.h ͷ�ļ���.lib���ļ�����error LNK2019 �������

�������ú��ı�һЩ���������ǻ��ǲ��ɹ������컻linux���ԣ�
��һ�������.h����Ŀ�İ���Ŀ¼��
�Ҽ����������Ŀ->����->VC++Ŀ¼->����Ŀ¼�� ��.h�ļ�����Ŀ¼��ӵ�����Ŀ¼���Ŀ¼֮����';' �ָ���

�ڶ��������lib����Ŀ�Ŀ�Ŀ¼��
��Ŀ¼ͬ����Ŀ¼��ͬһ�������У�����ͬ��һ����ͬ��

�����������lib�����������
�ڶ����Ĳ���ֻ�Ǹ�����Ŀ����Ҫ�����Ŀ�����ЩĿ¼�У�����û�и�֪��Ŀ��Ҫ�����Ŀ⡣�Ͱ���Ŀ¼��ͬ���ǣ�����Ŀ¼��������ͨ��includeʵ�ֵģ���Ŀ¼��������ʵ�ֵġ�

ͬ������Ŀ������ҳ�У�������->����->���������������lib���ļ����ӵ����

1.5.1.6
�������https://blog.csdn.net/qq_34097715/article/details/79540933�﷽���н����������ǳ���
������Ч��Win32Ӧ�ó���

1.5.1.7
����Ŀ����--��ĿĬ��ֵ--�������ͣ�����ΪӦ�ó���(.exe)  �����޷��������ⲿ���� _WinMain@16��
�÷����ں��� "int __cdecl invoke_main(void)" (?invoke_main@@YAHXZ) �б�����tobii_research_addons  
D:\02ability\LearnC\Everyday\0tobiipro\addonsLinux20190731\prosdk-addons-c-master\win32\MSVCRTD.lib(exe_winmain.obj)	1	

1.5.1.8  �޷��������ⲿ���� _WinMain@16����������������
�������������ѡ��Configuration Properties->C/C++->Preprocessor,Ȼ�����ұ�����Preprocessor Definitions��Ӧ������ɾ��_WINDOWS, ���_CONSOLE.
ʹ���������ַ��������ǲ��У�
������滻��ȥ_WINDOWS    _CONSOLE������������ȥ���������ɣ�
Ϊ��sample�����һ��tobii_research_addons.lib��ȥ��֮�󣬴�����ࣻ������� һ��sample.lib

�޸�Ϊ_CONSOLE��
����״̬��ΪLNK2019  �޷��������ⲿ���� _main���÷����ں��� "int __cdecl invoke_main(void)" (?invoke_main@@YAHXZ) �б�����	tobii_research_addons	
D:\02ability\LearnC\Everyday\0tobiipro\prosdk-addons-c-master\win32\MSVCRTD.lib(exe_main.obj)	1

1.5.2
ע�⵽һ�����⣬Ϊ���кü���.h�ļ���ֻ��һ����Ӧ��.lib�ļ����ǲ��ǰ����⼸���������£�sdk�е�Դ�ļ���Ӧ��û�����⣻
�����ٱ�Ӧ�У��������Ϊ�ؼ���������MSVCRTD.lib(exe_main.obj)

������github�����ʣ������ߣ�����ʹ�ùȸ������£�

1.5.3�ۺ�һ�£����⻹�ǳ���cl�������
cl sample.c /I D:\02ability\LearnC\Everyday\0tobiipro\prosdk-addons-c-master\sdk\32\include D:\02ability\LearnC\Everyday\0tobiipro\prosdk-addons-c-master\sdk\32\lib\tobii_research.lib
/out:sample.exe
sample.obj
D:\02ability\LearnC\Everyday\0tobiipro\prosdk-addons-c-master\sdk\32\lib\tobii_research.lib
sample.obj : error LNK2019: �޷��������ⲿ���� __imp__tobii_research_screen_based_calibration_validation_init_default���÷����ں��� _main �б�����
sample.obj : error LNK2019: �޷��������ⲿ���� __imp__tobii_research_screen_based_calibration_validation_destroy���÷����ں��� _main �б�����
sample.obj : error LNK2019: �޷��������ⲿ���� __imp__tobii_research_screen_based_calibration_validation_enter_validation_mode���÷����ں��� _main �� ������
sample.obj : error LNK2019: �޷��������ⲿ���� __imp__tobii_research_screen_based_calibration_validation_start_collecting_data���÷����ں��� _main �� ������
sample.obj : error LNK2019: �޷��������ⲿ���� __imp__tobii_research_screen_based_calibration_validation_compute���÷����ں��� _main �б�����
sample.obj : error LNK2019: �޷��������ⲿ���� __imp__tobii_research_screen_based_calibration_validation_destroy_result���÷����ں��� _main �б�����
sample.obj : error LNK2019: �޷��������ⲿ���� __imp__tobii_research_screen_based_calibration_validation_is_collecting_data���÷����ں��� _main �б�����
sample.exe : fatal error LNK1120: 7 ���޷��������ⲿ����

�ƺ�����ǰ�н�����

1.5.4
�����еķŽ�x64��һ�ԣ�
For Windows

    Unzip the Tobii Pro SDK archive to a new directory sdk in root of the addons folder.
    Open Visual Studio and load the solution in the win32 directory.
    Build for the desired configuration (i.e. Debug/Release and x86/x64).
    �����ѡ��Debug x64û�б���
�����ֶ����أ�
Ҫʹ�øÿ⣬����Ҫ��Դ���������ֶ���������DLL��tobii_research_addons.dll��tobii_research.dll��������Ե�lib�ļ��� �μ�ʾ����Ŀ��

������һ���󣬷�������
�޷���������   .dll������Ч��Win32Ӧ�ó���

�������ɽ�������ɹ���������Windows�����������ã�

����������Ҳ���У�getchar();
	system("pause");
Ĭ�ϵģ���������-������-ϵͳ-��ϵͳ----sample����ҳ���ǿ���̨ _CONSOLE����tobii_research_addons��Ϊ_WINDOWS
���޸Ĺ������ԣ�

1.5.5��Ŀǰ���޸��ˣ���sample��Ϊ������Ŀ��

���ڿ��Գ�����
Usage: sample <eyetracker address>
Couldn't find eyetracker with address (null)!

D:\02ability\LearnC\Everyday\0tobiipro\prosdk-addons-c-master-x64\win32\\Output\x64\Debug\sample.exe (���� 3696)���˳������ش���Ϊ: 1��
��Ҫ�ڵ���ֹͣʱ�Զ��رտ���̨�������á����ߡ�->��ѡ�->�����ԡ�->������ֹͣʱ�Զ��رտ���̨����
��������رմ˴���...

1.5.5.1Ŀǰ���ĸı��¼������
���ղ���Unzip the Tobii Pro SDK archive to a new directory sdk in root of the addons folder.
    Open Visual Studio and load the solution in the win32 directory.
Ȼ��ѡ��Debug x64,�����ɽ��������û�б���

����->VC++Ŀ¼->����Ŀ¼����Ŀ¼���޸��£�������Ŀ���޸���
��������-������-ϵͳ-��ϵͳ----������Ŀ����ҳ�ﶼ�ǿ���̨ _CONSOLE
C/C++ ---- Ԥ�������ﶼ�ǿ���̨ _CONSOLE
��Ŀ����--��ĿĬ��ֵ--�������ͣ�����ΪӦ�ó���(.exe)��sample��Ϊ.exe����tobii_research_addons����ҳ����Ӧ������Ϊ.dll��.exe���ɣ�

�ܽ�һ�£�
һ���ؼ����ǿ�����Ա����ѡ��һ���µ�Win32Ӧ�ó�����Ŀ������������ڵ㺯����main,����Ӧ�ó���ʱ���ᱨ��һ������������
����������-������-ϵͳ-��ϵͳ�и�Ϊ��/SUBSYSTEM:CONSOLE
�����ᱨ���޷���������   .dll������Ч��Win32Ӧ�ó����������һ��ԭ����û��ѡ����ʵ�������Ŀ��Ӧ������.exe����Ŀ����Ϊ������Ŀ��
����ѡ��Debug x64�����ܺͼ����ϵͳ�йأ�

1.5.6
Usage: sample <eyetracker address>
Couldn't find eyetracker with address (null)!
D:\02ability\LearnC\Everyday\0tobiipro\prosdk-addons-c-master-x64\win32\\Output\x64\Debug\sample.exe (���� 19164)���˳� �����ش���Ϊ: 1��
��Ҫ�ڵ���ֹͣʱ�Զ��رտ���̨�������á����ߡ�->��ѡ�->�����ԡ�->������ֹͣʱ�Զ��رտ���̨����
��������رմ˴���...
��ΪҪ��sdk�Ļ��������У�

�о�����ҳ�棻C - SDK reference guide call_eyetracker_manager_windows.c
http://developer.tobiipro.com/c/c-sdk-reference-guide.html
�о�������ӵ�tobii��http://developer.tobiipro.com/c/c-oldmigrationsdk.html��


1.5.6.1ע���Ƿ������EyeTrackerManager����Spectrum�ĵ�ַ������
Ҳ���ܲ���ETM��������ĵ�ַ����Ϊsdk֧��Linux����ETM��ֻ֧��Windows��Macϵͳ��
��Ч��Eye Tracker ManagerӦ��
Eye Tracker Manager��SDK�����֮һ���ɰ����������۶��� (���磬���Ĳ����ʺ͹̼�����)������Ҫ����Ļ�Ƴ�����Ϊ�������۶���ģ��ʹ�õĳ����������۶��ǡ�  
�����Ŀǰ��������Tobii Pro Spectrum�۶��ǣ�֧�� Windows��Macϵͳ��
this web can be right: http://developer.tobiipro.com/tobiiprosdk/addons.html

spectrum�����������ӵģ��ǲ��ǿ���ͨ��ipconfig������ַ��

<<<<<<< HEAD
1.6.1
���ڿ��Դ��ˣ����޷�find eyetracker
�о�sample.c
int main(int argc, char *argv[])���argcΪ����������ʱ�Ĳ���������argv[]��argc�����������е�0�������ǳ����ȫ�����Ժ�Ĳ����������к�������û�����Ĳ�����


�л�������sample.exe��Ŀ¼��ִ�л����
D:\02ability\LearnC\Everyday\0tobiipro\prosdk-addons-c-master-x64\win32\Output\x64\Debug>sample.exe
Usage: sample <eyetracker address>
Couldn't find eyetracker with address (null)!

����argc[0]��sample.exe��argc[1]Ӧ��Ϊeyetracker address����������eye tracker manager�İ�װ�ĵ�ַ��

C:\Users\pc\AppData\Local\TobiiProEyeTrackerManager\Update.exe --processStart "TobiiProEyeTrackerManager.exe"
C:\Users\pc\AppData\Local\TobiiProEyeTrackerManager\Update.exe
=======


>>>>>>> 77ad4368185af1540379e5e9b03e054a3e443698
