#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int print();

int main(void){
	system("title C���Թػ�����");
	system("mode con cols=96 lines=25");
	system("color 0B");
	printf(" ");
	system("date /T");
	printf(" ");
	system("TIME /T");
	
	char cmd[20];
	memset(cmd,0,sizeof(cmd));
	char t[6]="0";
	int c=0;
	strcpy(cmd,"shutdown -s -t ");
	
	print();
	scanf("%d",&c);
	getchar();
	
	switch(c)
	{
		case 1:printf("��������Զ��رռ����:��0~6000��\n");scanf("%s",t);system(strcat(cmd,t));break;
		case 2:system("shutdown -p");break;
		case 3:system("shutdown -l");break;
		case 4:system("shutdown -a");break;
		defalut:printf("Error\n");
	}
	system("pause"); 
	exit(0);	
}

int print()
{
		printf("����������������������������������������\n");
		printf("  �X�T�T�T C���� �ػ�����T�T�T�[\n");
		printf("  �U  ��1.��ʱ�رռ���� �U\n");
		printf("  �U  ��2.�����رռ���� �U\n");
		printf("  �U  ��3.ע�������     �U\n");
		printf("  �U  ��4.ȡ����ʱ�ػ�   �U\n");
		printf("  �U  ��0.ȡ������       �U\n");
		printf("  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		return 0;
}
