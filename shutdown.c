#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int print();

int main(void){
	system("title C语言关机程序");
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
		case 1:printf("多少秒后自动关闭计算机:（0~6000）\n");scanf("%s",t);system(strcat(cmd,t));break;
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
		printf("————————————————————\n");
		printf("  ╔═══ C语言 关机程序═══╗\n");
		printf("  ║  ※1.定时关闭计算机 ║\n");
		printf("  ║  ※2.立即关闭计算机 ║\n");
		printf("  ║  ※3.注销计算机     ║\n");
		printf("  ║  ※4.取消定时关机   ║\n");
		printf("  ║  ※0.取消操作       ║\n");
		printf("  ╚═════════════════════╝\n");
		return 0;
}
