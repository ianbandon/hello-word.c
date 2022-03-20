#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//
//
//	//double d = 3.14;//定义一个浮点型量d=3.14
//	//double* bc = &d;//对d取地址然后赋值给 指针变量 bc
//	//*bc = 5.5;//引用地址bc   然后对地址处的  空间存储  赋值5.5
//	//printf("%lf\n", d );
//	//printf("%lf\n",*bc);
//	//printf("%d\n", sizeof(bc));
//		  
//    //int a = 10;//申请4个字节储存a变量
//	//printf("%p\n", &a);//   %p打印a的地址
//	//int*p = &a;// 把a的地址赋值给p  这个变量p称为指针变量 《int* + 变量》 int*是一个指针变量
//	//printf("%p\n", p); 
//	//*p = 20;    //* - 解引用操作符/间接访问操作符/
//	//printf("a = %d\n", a);
//	//结构体  int double 
//	//（描述复杂对象）--结构体--自己创建的一种类型
//
//
//	return 0;
//}


   //结构体  int double 
   //（描述复杂对象）--结构体--自己创建的一种类型



#include <string.h>
struct Book 
{
	char name[20];//名称-字符   ???数组
	short price;//定义价格-short
};
int main()
{       //创建一个该类型的变量
	    struct Book b1 = { "c语言程序设计",55 };//两个变量分别赋值
		struct Book* pb = &b1;//对b1出地址然后存在pb指针变量中
		printf("%s\n %d\n", pb->name, pb->price);//指针指向name和price
		printf("书名:%s\n", b1.name);
		printf("价格:%d\n", b1.price);
		strcpy(b1.name, "python");//strcpy-string-copy--字符串拷贝-库函数--string.h
		b1.price = 555;//b1进行修改价格
		printf("修改后的书名：%s\n修改后的价格：%d\n", pb->name, pb->price);//指针指向name和price
		return 0;

}


