#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>			//���ռ����������


#define U 1
#define D 2
#define L 3
#define R 4      //�ߵ�״̬��U���� ��D���£�L:�� R����

/*******��  ��  ȫ  ��  ��  �� *******/
typedef struct snake 		//�����һ���ڵ�
{
    int x;
    int y;
    struct snake *next;
}snake;
int score=0,add=10;			//�ܵ÷���ÿ�γ�ʳ��÷�
int status,sleeptime=200;	//��ǰ��״̬��ÿ�����е�ʱ����
snake *head, *food;			//��ͷָ�룬ʳ��ָ��
snake *q;					//�����ߵ�ʱ���õ���ָ��
int endgamestatus=0;		//��Ϸ�����������1��ײ��ǽ��2��ҧ���Լ���3�������˳���Ϸ��
HANDLE hOut;				//����̨���


/*******��  ��  ��  �� *******/
void gotoxy(int x,int y);   //���ù��λ��
int color(int c);           //����������ɫ
void welcometogame();       //��ʼ����
void createMap();           //���Ƶ�ͼ
void scoreandtips();		//��Ϸ�����Ҳ�ĵ÷ֺ�С��ʾ
void initsnake();           //��ʼ������������
void createfood();          //�������������ʳ��
int biteself();             //�ж��Ƿ�ҧ�����Լ�
void cantcrosswall();       //������ײǽ�����
void speedup();				//����
void speeddown();			//����
void snakemove();           //������ǰ������
void keyboardControl();     //���Ƽ��̰���
void Lostdraw();            //��Ϸ��������
void endgame();             //��Ϸ����
void choose();				//��Ϸʧ��֮���ѡ��
void explation();           //��Ϸ˵��

/**
 * ���ù��λ��
 */
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

/**
 * ������ɫ����
 */
int color(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);        //����������ɫ
	return 0;
}



  //��ʼ����

void welcometogame()
{
	int n;
	gotoxy(43,10);
	color(11);
	printf("̰ �� �� �� �� ս");
	color(12);
	gotoxy(25, 22);
	printf("1.��ʼ��Ϸ");
	gotoxy(45, 22);
	printf("2.��Ϸ˵��");
	gotoxy(65, 22);
	printf("3.�˳���Ϸ");
	gotoxy(40,27);
	color(3);
	printf("��ѡ�� 1 2 3:");
	color(14);
    scanf("%d", &n);    		//����ѡ��
    switch (n)
    {
    	case 1:
    		system("cls");
			createMap();        //������ͼ
    		initsnake();        //��ʼ������
    		createfood();       //����ʳ��
    		keyboardControl();	//��������
        	break;
    	case 2:
        	explation();      	//��Ϸ˵������
        	break;
    	case 3:
        	exit(0);     		//�˳���Ϸ
        	break;
		default:
			color(12);
			gotoxy(40,28);
			printf("������1��3֮�����!");
			_getch();			//���������
			system("cls");		//����
			welcometogame();
    }
}


 //������ͼ

void createMap()
{
    int i,j;
    for(i=0;i<58;i+=2)		//��ӡ���±߿�
    {
        gotoxy(i,0);
		color(5);
        printf("��");
        gotoxy(i,26);
        printf("��");
    }
    for(i=1;i<26;i++)		//��ӡ���ұ߿�
    {
        gotoxy(0,i);
        printf("��");
        gotoxy(56,i);
        printf("��");
    }
	for(i = 2;i<56;i+=2)	//��ӡ�м�����
	{
		for(j = 1;j<26;j++)
		{
			gotoxy(i,j);
			color(3);
			printf("��");
		}
	}
}


 //  ��Ϸ�����Ҳ�ĵ÷ֺ�С��ʾ

void scoreandtips()
{

	gotoxy(64,8);
	color(14);
	printf("�÷֣�%d  ",score);

	gotoxy(64,14);
	printf("ÿ��ʳ��÷֣�%d��",add);
	gotoxy(64,16);
	printf("���ܴ�ǽ������ҧ���Լ�");
	gotoxy(64,18);
	printf("�á� �� �� ���ֱ�����ߵ��ƶ�");
	gotoxy(64,20);
	printf("F1 Ϊ���٣�F2 Ϊ����");
	gotoxy(64,22);
	printf("space����ͣ��Ϸ");
	gotoxy(64,24);
    printf("ESC ���˳���Ϸ");
}


  //��ʼ������������

void initsnake()
{
    snake *tail;
    int i;
    tail=(snake*)malloc(sizeof(snake));//����β��ʼ��ͷ�巨����x,y�趨��ʼ��λ��
    tail->x=24;         	//�ߵĳ�ʼλ�ã�24,5��
    tail->y=5;
    tail->next=NULL;
    for(i=1;i<=4;i++)       //������������Ϊ5
    {
        head=(snake*)malloc(sizeof(snake)); //��ʼ����ͷ
        head->next=tail;        //��ͷ����һλΪ��β
        head->x=24+2*i;         //������ͷλ��
        head->y=5;
        tail=head;              //��ͷ�����β��Ȼ���ظ�ѭ��
    }
    while(tail!=NULL)		//��ͷ��β���������
    {
        gotoxy(tail->x,tail->y);
		color(14);
        printf("��");       //�����������ʹ�á����
        tail=tail->next;    //��ͷ�����ϣ������ͷ����һλ��һֱ�������β
    }
}

 /**
 * �������ʳ��
 */
void createfood()
{
    snake *food_1;
    srand((unsigned)time(NULL));        	//��ʼ�������
    food_1=(snake*)malloc(sizeof(snake));   //��ʼ��food_1
    while((food_1->x%2)!=0)    				//��֤��Ϊż����ʹ��ʳ��������ͷ���䣬Ȼ��ʳ����������������
    {
        food_1->x=rand()%52+2;              //ʳ���������
    }
    food_1->y=rand()%24+1;
    q=head;
    while(q->next==NULL)
    {
        if(q->x==food_1->x && q->y==food_1->y) //�ж������Ƿ���ʳ���غ�
        {
            free(food_1);               //��������ʳ���غϣ���ô�ͷ�ʳ��ָ��
            createfood();               //���´���ʳ��
        }
        q=q->next;
    }
    gotoxy(food_1->x,food_1->y);
    food=food_1;
	color(12);
    printf("��");           //���ʳ��
}

 /**
 * �ж��Ƿ�ҧ�����Լ�
 */
int biteself()
{
    snake *self;            //����selfΪ�����ϵ�һ���ڵ�
    self=head->next;        //self����ͷ֮��������ϵĽڵ�
    while(self!=NULL)
    {
        if(self->x==head->x && self->y==head->y)    //���self�������ϵĽڵ��غ�
        {
            return 1;       //����1
        }
        self=self->next;
    }
    return 0;
}

 /**
 * ������ײǽ�����
 */
void cantcrosswall()
{
    if(head->x==0 || head->x==56 ||head->y==0 || head->y==26) //�����ͷ������ǽ��
    {
        endgamestatus=1;        //���ص�һ�����
        endgame();              //������Ϸ��������
    }
}



/**
 *  ���٣��߳Ե�ʳ����Զ����٣����Ұ�F1�����
 */
void speedup()
{
	if(sleeptime>=50)
	{
		sleeptime=sleeptime-10;
		add=add+2;

    }
}

/**
 *  ���٣���F2�����
 */
void speeddown()
{
	if(sleeptime<350)               //���ʱ����С��350
    {
        sleeptime=sleeptime+30;     //ʱ��������30
        add=add-2;                  //ÿ��һ��ʳ��ĵ÷ּ�2

    }
}

/**
 *  ���Ʒ���    ���⣺ΪʲôҪ����status������ʹ��ǰ�����н��ռ��̰����ķ���
 */
void snakemove()	//��ǰ��,��U,��D,��L,��R
{
	snake * nexthead;
    cantcrosswall();
    nexthead=(snake*)malloc(sizeof(snake));		//Ϊ��һ�����ٿռ�
    if(status==U)
    {
        nexthead->x=head->x;        //����ǰ��ʱ��x���겻����y����-1
        nexthead->y=head->y-1;
        nexthead->next=head;
        head=nexthead;
        q=head;                 //ָ��qָ����ͷ
        if(nexthead->x==food->x && nexthead->y==food->y)	//�����һ����ʳ�� ��һ��λ�õ������ʳ���������ͬ
        {

            while(q!=NULL)
            {
                gotoxy(q->x,q->y);
				color(14);
                printf("��");       //ԭ��ʳ���λ�ã��ӡ񻻳ɡ�
                q=q->next;          //ָ��qָ����������һλҲִ��ѭ����Ĳ���

            }
            score=score+add;        //����һ��ʳ����ܷ��ϼ���ʳ��ķ�
			speedup();
            createfood();           //����ʳ��
        }
        else
        {
            while(q->next->next!=NULL)	//���û����ʳ��
            {
                gotoxy(q->x,q->y);
                color(14);
                printf("��");           //��������ǰ�ߣ������ǰλ�õ�����
                q=q->next;              //���������������
            }
            gotoxy(q->next->x,q->next->y);  //���������ѭ����qָ����β����β����һλ���������߹�ȥ��λ��
			color(3);
            printf("��");
            free(q->next);      //���������֮���ͷ�ָ����һλ��ָ��
            q->next=NULL;       //ָ����һλָ���
        }
    }
    if(status==D)
    {
        nexthead->x=head->x;        //����ǰ��ʱ��x���겻����y����+1
        nexthead->y=head->y+1;
        nexthead->next=head;
        head=nexthead;
        q=head;
        if(nexthead->x==food->x && nexthead->y==food->y)  //��ʳ��
        {

            while(q!=NULL)
            {
                gotoxy(q->x,q->y);
                color(14);
                printf("��");
                q=q->next;
            }
            score=score+add;
			speedup();
            createfood();
        }
        else                               //û��ʳ��
        {
            while(q->next->next!=NULL)
            {
                gotoxy(q->x,q->y);
                color(14);
                printf("��");
                q=q->next;
            }
            gotoxy(q->next->x,q->next->y);
			color(3);
            printf("��");
            free(q->next);
            q->next=NULL;
        }
    }
    if(status==L)
    {
        nexthead->x=head->x-2;        //����ǰ��ʱ��x���������ƶ�-2��y���겻��
        nexthead->y=head->y;
        nexthead->next=head;
        head=nexthead;
        q=head;
        if(nexthead->x==food->x && nexthead->y==food->y)//��ʳ��
        {
            while(q!=NULL)
            {
                gotoxy(q->x,q->y);
                color(14);
                printf("��");
                q=q->next;
            }
            score=score+add;
			speedup();
            createfood();
        }
        else                                //û��ʳ��
        {
            while(q->next->next!=NULL)
            {
                gotoxy(q->x,q->y);
                color(14);
                printf("��");
                q=q->next;
            }
            gotoxy(q->next->x,q->next->y);
			color(3);
            printf("��");
            free(q->next);
            q->next=NULL;
        }
    }
    if(status==R)
    {
        nexthead->x=head->x+2;        //����ǰ��ʱ��x���������ƶ�+2��y���겻��
        nexthead->y=head->y;
        nexthead->next=head;
        head=nexthead;
        q=head;
        if(nexthead->x==food->x && nexthead->y==food->y)//��ʳ��
        {
            while(q!=NULL)
            {
                gotoxy(q->x,q->y);
                color(14);
                printf("��");
                q=q->next;
            }
            score=score+add;
			speedup();
            createfood();
        }
        else                                         //û��ʳ��
        {
            while(q->next->next!=NULL)
            {
                gotoxy(q->x,q->y);
                color(14);
                printf("��");
                q=q->next;
            }
            gotoxy(q->next->x,q->next->y);
			color(3);
            printf("��");
            free(q->next);
            q->next=NULL;
        }
    }
    if(biteself()==1)       //�ж��Ƿ��ҧ���Լ�
    {
        endgamestatus=2;
        endgame();
    }
}


/**
 * ���Ƽ��̰���
 */
void keyboardControl()
{
	status=R;       //��ʼ�������ƶ�
    while(1)
    {
		scoreandtips();
        if(GetAsyncKeyState(VK_UP) && status!=D)            //GetAsyncKeyState���������жϺ�������ʱָ���������״̬
        {
            status=U;           //����߲�������ǰ����ʱ�򣬰��ϼ���ִ������ǰ������
        }
        else if(GetAsyncKeyState(VK_DOWN) && status!=U)     //����߲�������ǰ����ʱ�򣬰��¼���ִ������ǰ������
        {
            status=D;
        }
        else if(GetAsyncKeyState(VK_LEFT)&& status!=R)      //����߲�������ǰ����ʱ�򣬰������ִ������ǰ��
        {
            status=L;
        }
        else if(GetAsyncKeyState(VK_RIGHT)&& status!=L)     //����߲�������ǰ����ʱ�򣬰��Ҽ���ִ������ǰ��
        {
            status=R;
        }
        if(GetAsyncKeyState(VK_SPACE))		//����ͣ����ִ��pause��ͣ����
        {
            while(1)
			{
				Sleep(300); //sleep()������ͷ�ļ�#include <unistd.h>  �������ͣ��֪���ﵽ�����趨�Ĳ�����ʱ�䡣
				if(GetAsyncKeyState(VK_SPACE))      //���ո����ͣ
				{
					break;
				}

			}
        }
        else if(GetAsyncKeyState(VK_ESCAPE))
        {
            endgamestatus=3;    //��esc����ֱ�ӵ���������
            break;
        }
        else if(GetAsyncKeyState(VK_F1))    //��F1��������
        {
            speedup();
        }
        else if(GetAsyncKeyState(VK_F2))    //��F2��������
        {
        	speeddown();

        }
        Sleep(sleeptime);
        snakemove();
    }
}







/*
*   ��Ϸ˵��
*/
void explation()
{
	//int i,j = 1;
    system("cls");
 //   color(13);
 //   gotoxy(44,3);
 //   printf("��Ϸ˵��");
 //   color(2);
 //   for (i = 6; i <= 22; i++)   //������±߿�===
	//{
	//	for (j = 20; j <= 75; j++)  //������ұ߿�||
	//	{
	//		gotoxy(j, i);
	//		if (i == 6 || i == 22) printf("=");
	//		else if (j == 20 || j == 75) printf("||");
	//	}
	//}
    color(3);
    gotoxy(30,8);
    printf("1. ���ܴ�ǽ������ҧ���Լ�");
    color(10);
    gotoxy(30,11);
    printf("2. �á�.��.��.���ֱ�����ߵ��ƶ�");
    color(14);
    gotoxy(30,14);
    printf("3. F1 Ϊ���٣�F2 Ϊ����");
    color(11);
    gotoxy(30,17);
    printf("4. ���ո����ͣ��Ϸ���ٰ��ո������");
    color(4);
    gotoxy(30,20);
    printf("5. ESC ���˳���Ϸ.space����ͣ��Ϸ");
    _getch();                //�����������������
    system("cls");
    welcometogame();
}



/**
 * ������Ϸ
 */
void endgame()
{
    system("cls");
    if(endgamestatus==1)
    {

		//Lostdraw();
		gotoxy(43,9);
    	color(12);
		printf("GAME  OVER !");
    }
    else if(endgamestatus==2)
    {

        //Lostdraw();
        gotoxy(43,9);
    	color(12);
        printf("GAME  OVER !");
    }
    else if(endgamestatus==3)
    {
		//Lostdraw();
		gotoxy(40,9);
    	color(12);
        printf("�ѽ�����Ϸ��");
    }
    gotoxy(43,12);
    color(13);
    printf("��ĵ÷��� %d",score);
	choose();
}

/**
 * �߿�����ķ�֧ѡ��
 */
void choose()
{
	int n;
	gotoxy(25,23);
	color(12);
	printf("Continue ------ 1");
	gotoxy(52,23);
	printf("Exit ------ 2");
	gotoxy(45,25);
	color(11);
	printf("ѡ�� ");
	scanf("%d", &n);
    switch (n)
    {
	case 1:
		system("cls");          //����
		score=0;                //��������
		sleeptime=200;			//�趨��ʼ�ٶ�
		add = 10;				//ʹadd�趨Ϊ��ֵ����һ��ʳ��÷�10��Ȼ���ۼ�
		welcometogame();
		break;
	case 2:
		exit(0);                //�˳���Ϸ
		break;
	default:
		gotoxy(35,27);
		color(12);
		printf(" �������� �������� !");
		system("pause >nul");
		endgame();
		choose();
		break;
	}

}
/**
 * ʧ�ܽ���
 */
void Lostdraw()
{
	system("cls");
	int i;
	gotoxy(45,2);
	color(6);
	printf("\\\\\\|///");
	gotoxy(43,3);
	printf("\\\\");
	gotoxy(47,3);
	color(15);
	printf(".-.-");
	gotoxy(54,3);
	color(6);
	printf("//");

	gotoxy(44,4);
	color(14);
	printf("(");

	gotoxy(47,4);
	color(15);
	printf(".@.@");

	gotoxy(54,4);
	color(14);
	printf(")");

	gotoxy(17,5);
	color(11);
	printf("+------------------------");

	gotoxy(35,5);
	color(14);
	printf("oOOo");

	gotoxy(39,5);
	color(11);
	printf("----------");

	gotoxy(48,5);
	color(14);
	printf("(_)");

	gotoxy(51,5);
	color(11);
	printf("----------");

	gotoxy(61,5);
	color(14);
	printf("oOOo");

	gotoxy(65,5);
	color(11);
	printf("-----------------+");

	for(i = 6;i<=19;i++)        //���߿�
	{
		gotoxy(17,i);
		printf("|");
		gotoxy(82,i);
		printf("|");
	}

	gotoxy(17,20);
	printf("+---------------------------------");

	gotoxy(52,20);
	color(14);
	printf("���");

	gotoxy(60,20);
	color(11);
	printf("----------------------+");

}

/**
* ������
*/
int main()
{
	system("mode con cols=100 lines=30");   //���ÿ���̨�Ŀ��
	//printsnake();
    welcometogame();

    keyboardControl();
    endgame();
	return 0;
}
