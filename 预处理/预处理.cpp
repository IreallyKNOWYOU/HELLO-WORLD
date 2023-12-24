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


//test.c  ——>编译，链接——>test.exe——>运行

//              翻译环境                 运行环境

//             编译器 链接器
//编译   //预编译  编译  汇编
//预编译//1.include 头文件的包含  2.删除注释  使用空格替换注释  3.#define  文本操作
//预编译 test.i
//编译  test.s //汇编代码  //把C语言代码翻译成汇编代码//语法分析 词法分析 语义分析 符号汇总
//                                                               编译原理
//汇编  test.o  //把汇编代码转换成了二进制指令  形成符号表

//链接//1.合并段表  2.符号表的合并和重定位
//.o文件有具体格式  elf 文件格式



//#include<stdio.h>
//#include<string.h>
//#define MAX//不是预定义符号
////预定义符号
//int main()
//{
//	//printf("%s\n", __FILE__);//代码所在源文件名称
//	//printf("%d\n", __LINE__);//代码所在行号
//	//printf("%s\n", __DATE__);//日期
//	//printf("%s\n", __TIME__);
//	int i = 0;
//	int arr[10];
//	FILE* pf = fopen("log.txt", "w");//写日志文件
//	memset(arr, '@', 10);
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", 
//			     __FILE__, __LINE__, __DATE__, __TIME__,i);
//		printf("%s\n", __FUNCTION__);//函数名字
//	}
//	//printf("%d\n", __STDC__);//如果编译器遵循ANSI C 其值为1  ，否则未定义
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//预处理指令
//#include
//#define
//#pragma pack(3)
//#pragma pack()
//#if
//#endif
//#ifdef
//#line


//#define 定义标识符
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

//定义宏
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

//#  的作用
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
//	//int max = MAX(a++, b++);//宏的参数带有副作用
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//	//printf("%d\n", max);
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	printf("%.2f\n", MAX(a, b));
//	return 0;
//}

//命令行定义//预编译阶段替换掉//C99标准
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


//条件编译
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
//#if 1//预编译   条件为真参与编译
//		printf("%d ", arr[i]);
//		printf("hello");
//#endif
//	}
//	printf("\n");
//	int a = 10, b = 10;
//	//printf("%d", Add(a, b));
//	return 0;
//}


//多分支条件编译
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



//判断是否被定义
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



//嵌套指令





//#include<stdio.h>//库文件  //在标准路径下查找
//#include"Add.h"//本地文件 //先在源文件目录下查找，找不到去库文件位置查找
//int main()
//{
//	int a = 10, b = 10;
//	printf("%d", Add(a, b));
//	return 0;
//}



#include<stdio.h>
#include<stddef.h>//模拟实现offsetof
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