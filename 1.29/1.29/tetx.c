#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
////	//���ļ�
//	//FILE* pf = fopen("test.txt", "w");//���ļ�����ϴε��ļ��������ٵ�
//	//if (pf == NULL)
//	//{
//	//	perror("fopen");
//	//	return 1;
//	//}
//	//printf("�򿪳ɹ�");
//	FILE* pf = fopen("test.txt", "r");//���ļ�����ϴε��ļ��������ٵ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	printf("�򿪳ɹ�\n");
//	////д�ļ�
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//	//fputc('d', pf);
//	//fputc('e', pf);
////	���ļ�
//	char ch;
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{//���ļ�
//	//FILE* pf = fopen("test.txt", "w");//���ļ�����ϴε��ļ��������ٵ�
//	//if (pf == NULL)
//	//{
//	//	perror("fopen");
//	//	return 1;
//	//}
//	////д�ļ�
//	//printf("�򿪳ɹ�");
//	//fputs("xiao tao\n", pf);
//	//fputs("lai lo\n", pf);
//	FILE* pf = fopen("test.txt", "r");//���ļ�����ϴε��ļ��������ٵ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	char arr[20];
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//	fclose(pf);//�ر��ļ�
//	pf = NULL;
//	return 0;
//}
struct S
{
	char arr[20];
	int age;
	double sex;
};
//int main()
//{//���ļ�
//	struct S s = {"xiao tao",20,3.14};
//	FILE* pf = fopen("test.txt", "w");//���ļ�����ϴε��ļ��������ٵ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ʽ��д�ļ�
//	fprintf(pf,"%s %d %f", s.arr, s.age, s.sex);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
int main()
{//���ļ�
	struct S s = {0};
	FILE* pf = fopen("test.txt", "r");//���ļ�����ϴε��ļ��������ٵ�
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//��ʽ�����ļ�
	fscanf(pf,"%s %d %lf", s.arr, &(s.age), &(s.sex));
	printf("%s %d %lf", s.arr, s.age, s.sex);
	fclose(pf);
	pf = NULL;
	return 0;
}