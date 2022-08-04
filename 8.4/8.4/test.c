#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>

//int main()
//{
//	char arr[] = "zzd@qq.com";
//	char *p = "@.";
//	char buf[1024] = { 0 };//拷贝一份进行切割
//	strcpy(buf, arr);
//	//切割buf中的函数
//	char *ret = NULL;
//	
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//strerror把错误码转换成错误信息
//errno是一个全局的错误码的变量
//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//int main()
//{
//	char *str = strerror(errno);
//
//	printf("%s\n", str);
//	//打开文件
//	FILE* pf =fopen("test.txt", "r");//r读
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	
//	{
//		printf("open file success\n");
//	}
//	return 0;
//
//}
//#include<ctype.h>
//int main()
//{//字符分类函数
//	char ch = 'w';
//	int ret = isdigit(ch);
//	printf("%d\n", ret);//是小写字母返回非0数字
//	char ch = tolower('Q');
//	putchar(ch);
//	char arr[] = "I AM A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	return 0;
//
//}
//字符转换
//int tolower(int c)转小写
//int toupper(int c）转大写
my_strstr(const char *p1,const char *p2)
{
	assert(p1 &&p2);
	char *s1 = p1;
	char *s2 = p2;
	char *cur = p1;
	if (*p1 == '\0')
		return p1;
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while ((*s1) && (*s2) && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return cur;//找到子串
		cur++;
	}
	return NULL;


}
int main()
{
	char *p1 = "abcdef";
	char *p2 = "abcde";
	char *ret = my_strstr(p1, p2);

	if (ret == NULL)
	{
		printf("子串不存在\n");
	}

	return 0;
}