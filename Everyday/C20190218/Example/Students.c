#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int ID;
	int math;
	int English;
	int C;
	int avargrade;
	char name[20];
}Stu;
int main()
{
	FILE*fp;
	Stu stu[5];
	int i,avargrade=0;
	printf("Please input five students: Number,name,three goal:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d %s %d %d %d",&(stu[i].ID),stu[i].name,&(stu[i].math),&(stu[i].English),&(stu[i].C));
		stu[i].avargrade=(stu[i].math+stu[i].English+stu[i].C)/3;
	}

	if((fp=fopen("stud","w"))==NULL)
	{
		printf("error:cannot open file!\n");
		exit(0);
	}
	for(i=0;i<5;i++)
	{
		fprintf(fp,"%d %s %d %d %d %d\n",stu[i].ID,stu[i].name,stu[i].math,stu[i].English,stu[i].C,stu[i].avargrade);
	}

	fclose(fp);
	return 0;
}
