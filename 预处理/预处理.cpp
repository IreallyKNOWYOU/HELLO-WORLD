//#include<stdio.h>
//#include<stdlib.h>
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d", c);
//	/*int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d",arr[i]);
//	}
//	printf("\n");
//	int a = 10, b = 10;
//	int c = Add(a, b);
//	printf("%d", c);*/
//	return 0;//                           
//}


//test.c  ����>���룬���ӡ���>test.exe����>����

//              ���뻷��                 ���л���

//             ������ ������
//����   //Ԥ����  ����  ���
//Ԥ����//1.include ͷ�ļ��İ���  2.ɾ��ע��  ʹ�ÿո��滻ע��  3.#define  �ı�����
//Ԥ���� test.i
//����  test.s //������  //��C���Դ��뷭��ɻ�����//�﷨���� �ʷ����� ������� ���Ż���
//                                                               ����ԭ��
//���  test.o  //�ѻ�����ת�����˶�����ָ��  �γɷ��ű�

//����//1.�ϲ��α�  2.���ű�ĺϲ����ض�λ
//.o�ļ��о����ʽ  elf �ļ���ʽ



//#include<stdio.h>
//#include<string.h>
//#define MAX//����Ԥ�������
////Ԥ�������
//int main()
//{
//	//printf("%s\n", __FILE__);//��������Դ�ļ�����
//	//printf("%d\n", __LINE__);//���������к�
//	//printf("%s\n", __DATE__);//����
//	//printf("%s\n", __TIME__);
//	int i = 0;
//	int arr[10];
//	FILE* pf = fopen("log.txt", "w");//д��־�ļ�
//	memset(arr, '@', 10);
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", 
//			     __FILE__, __LINE__, __DATE__, __TIME__,i);
//		printf("%s\n", __FUNCTION__);//��������
//	}
//	//printf("%d\n", __STDC__);//�����������ѭANSI C ��ֵΪ1  ������δ����
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//Ԥ����ָ��
//#include
//#define
//#pragma pack(3)
//#pragma pack()
//#if
//#endif
//#ifdef
//#line


//#define �����ʶ��
//#include<stdio.h>
//#define MAX 100
//#define STR "yuanshuo"
//#define ret register
//#define do_forever for(;;)
//int main()
//{
//	int max = MAX;
//	char arr[100] = STR;
//	printf("%d\n", max);
//	printf("%s\n", STR);
//	printf("%s\n", arr);
//	//do_forever;
//	return 0;
//}

//�����
//#include<stdio.h>
//#define SQUARE(x) (x)*(x)
//#define DOUBLE(x) (x+x)
//int main()
//{
//	int ret = SQUARE(5);
//	printf("%d\n", ret);
//	int ret1 = SQUARE(5+1);
//	printf("%d\n", ret1);
//	int a = 5;
//	int ret2 = 10 * DOUBLE(a);
//	printf("%d\n", ret2);
//	return 0;
//}


//#include<stdio.h>
//void print(int a)
//{
//	printf("The value of a is %d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", a);
//	print(a);
//	print(b);
//	return 0;
//}

//#  ������
//#include<stdio.h>
//#define PRINT(X) printf("The value of " #X " is %d\n",X)
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello " "world\n");*/
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("The value of " "a" " is %d\n",a)
//	PRINT(b);
//	//printf("The value of " "b" " is %d\n",b)
//	return 0;
//}


//#include<stdio.h>
//#define CAT(X,Y) X##Y  //value
//int main()
//{
//	int value = 2023;
//	printf("%d\n", value);
//	printf("%d\n", CAT(val, ue));
//	//printf("%d\n",val##ue);
//	return 0;
//}

//#include<stdio.h>
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	/*int a = 10;
//	int b = a + 1;
//	int c = ++a;*/
//	int a = 10;
//	float b = 10.14;
//	//int max = MAX(a++, b++);//��Ĳ������и�����
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//	//printf("%d\n", max);
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	printf("%.2f\n", MAX(a, b));
//	return 0;
//}

//�����ж���//Ԥ����׶��滻��//C99��׼
//#include<stdio.h>
//int main()
//{
//	int arr[SZ];
//	for (int i = 0; i < SZ; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 0; i < SZ:i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//��������
//#include<stdio.h>
//#define DEBUG
//#include"Add.h"
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	printf("\n");
//	int a = 10, b = 10;
//	printf("%d", Add(a, b));
//	return 0;
//}


//#include<stdio.h>
////#define DEBUG
////#include"Add.h"
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
////#ifdef DEBUG
////		printf("%d ", arr[i]);
////#endif
//#if 1//Ԥ����   ����Ϊ��������
//		printf("%d ", arr[i]);
//		printf("hello");
//#endif
//	}
//	printf("\n");
//	int a = 10, b = 10;
//	//printf("%d", Add(a, b));
//	return 0;
//}


//���֧��������
//#include<stdio.h>
//#define DEBUG 1
//int main()
//{
//#if DEBUG
//	printf("hello");
//#elif 2==1
//	printf("world");
//#else
//	printf("!");
//#endif
//	return 0;
//}



//�ж��Ƿ񱻶���
//#include<stdio.h>
//#define DEBUG
//int main()
//{
////#if defined(DEBUG)
////	printf("1");
////#endif
////#ifdef DEBUG
////	printf("1");
////#endif
////#if !defined(DEBUG)
////	printf("0");
////#endif
//#ifndef DEBUG
//	printf("0");
//#endif
//	return 0;
//}



//Ƕ��ָ��





//#include<stdio.h>//���ļ�  //�ڱ�׼·���²���
//#include"Add.h"//�����ļ� //����Դ�ļ�Ŀ¼�²��ң��Ҳ���ȥ���ļ�λ�ò���
//int main()
//{
//	int a = 10, b = 10;
//	printf("%d", Add(a, b));
//	return 0;
//}



#include<stdio.h>
#include<stddef.h>//ģ��ʵ��offsetof
#define OFFSETOF(struct_name,member_name)   (int)&(((struct_name*)0)->member_name)
struct s
{
	char c1;
	int a;
	char c2;
};
int main()
{
	printf("%d\n", OFFSETOF( struct s, c1));
	printf("%d\n", OFFSETOF(struct s, a));
	printf("%d\n", OFFSETOF(struct s, c2));
	return 0;
}