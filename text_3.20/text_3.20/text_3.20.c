#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//
//
//	//double d = 3.14;//����һ����������d=3.14
//	//double* bc = &d;//��dȡ��ַȻ��ֵ�� ָ����� bc
//	//*bc = 5.5;//���õ�ַbc   Ȼ��Ե�ַ����  �ռ�洢  ��ֵ5.5
//	//printf("%lf\n", d );
//	//printf("%lf\n",*bc);
//	//printf("%d\n", sizeof(bc));
//		  
//    //int a = 10;//����4���ֽڴ���a����
//	//printf("%p\n", &a);//   %p��ӡa�ĵ�ַ
//	//int*p = &a;// ��a�ĵ�ַ��ֵ��p  �������p��Ϊָ����� ��int* + ������ int*��һ��ָ�����
//	//printf("%p\n", p); 
//	//*p = 20;    //* - �����ò�����/��ӷ��ʲ�����/
//	//printf("a = %d\n", a);
//	//�ṹ��  int double 
//	//���������Ӷ���--�ṹ��--�Լ�������һ������
//
//
//	return 0;
//}


   //�ṹ��  int double 
   //���������Ӷ���--�ṹ��--�Լ�������һ������



#include <string.h>
struct Book 
{
	char name[20];//����-�ַ�   ???����
	short price;//����۸�-short
};
int main()
{       //����һ�������͵ı���
	    struct Book b1 = { "c���Գ������",55 };//���������ֱ�ֵ
		struct Book* pb = &b1;//��b1����ַȻ�����pbָ�������
		printf("%s\n %d\n", pb->name, pb->price);//ָ��ָ��name��price
		printf("����:%s\n", b1.name);
		printf("�۸�:%d\n", b1.price);
		strcpy(b1.name, "python");//strcpy-string-copy--�ַ�������-�⺯��--string.h
		b1.price = 555;//b1�����޸ļ۸�
		printf("�޸ĺ��������%s\n�޸ĺ�ļ۸�%d\n", pb->name, pb->price);//ָ��ָ��name��price
		return 0;

}


