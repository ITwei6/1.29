#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
////	//打开文件
//	//FILE* pf = fopen("test.txt", "w");//打开文件会把上次的文件内容销毁掉
//	//if (pf == NULL)
//	//{
//	//	perror("fopen");
//	//	return 1;
//	//}
//	//printf("打开成功");
//	FILE* pf = fopen("test.txt", "r");//打开文件会把上次的文件内容销毁掉
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	printf("打开成功\n");
//	////写文件
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//	//fputc('d', pf);
//	//fputc('e', pf);
////	读文件
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
//{//打开文件
//	//FILE* pf = fopen("test.txt", "w");//打开文件会把上次的文件内容销毁掉
//	//if (pf == NULL)
//	//{
//	//	perror("fopen");
//	//	return 1;
//	//}
//	////写文件
//	//printf("打开成功");
//	//fputs("xiao tao\n", pf);
//	//fputs("lai lo\n", pf);
//	FILE* pf = fopen("test.txt", "r");//打开文件会把上次的文件内容销毁掉
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	char arr[20];
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//	fclose(pf);//关闭文件
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
//{//打开文件
//	struct S s = {"xiao tao",20,3.14};
//	FILE* pf = fopen("test.txt", "w");//打开文件会把上次的文件内容销毁掉
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//格式化写文件
//	fprintf(pf,"%s %d %f", s.arr, s.age, s.sex);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
int main()
{//打开文件
	struct S s = {0};
	FILE* pf = fopen("test.txt", "r");//打开文件会把上次的文件内容销毁掉
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//格式化读文件
	fscanf(pf,"%s %d %lf", s.arr, &(s.age), &(s.sex));
	printf("%s %d %lf", s.arr, s.age, s.sex);
	fclose(pf);
	pf = NULL;
	return 0;
}