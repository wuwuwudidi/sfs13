#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>

//int main()
//{
//	char arr[] = "zzd@qq.com";
//	char *p = "@.";
//	char buf[1024] = { 0 };//����һ�ݽ����и�
//	strcpy(buf, arr);
//	//�и�buf�еĺ���
//	char *ret = NULL;
//	
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//strerror�Ѵ�����ת���ɴ�����Ϣ
//errno��һ��ȫ�ֵĴ�����ı���
//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//int main()
//{
//	char *str = strerror(errno);
//
//	printf("%s\n", str);
//	//���ļ�
//	FILE* pf =fopen("test.txt", "r");//r��
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
//{//�ַ����ຯ��
//	char ch = 'w';
//	int ret = isdigit(ch);
//	printf("%d\n", ret);//��Сд��ĸ���ط�0����
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
//�ַ�ת��
//int tolower(int c)תСд
//int toupper(int c��ת��д
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
			return cur;//�ҵ��Ӵ�
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
		printf("�Ӵ�������\n");
	}

	return 0;
}