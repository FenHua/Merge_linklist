#include "stdafx.h"
#include"mergelist.h"

void test1()
{
	LinkList plist1;
	LinkList plist2;
	LinkList ret = { 0 };
	//1  
	Init_LinkList(&plist1);
	Push_back(&plist1, 3);
	Push_back(&plist1, 5);
	Push_back(&plist1, 8);
	Push_back(&plist1, 11);
	printf("����1��Ԫ��Ϊ:");
	Print_LinkList(&plist1);
	//2  
	Init_LinkList(&plist2);
	Push_back(&plist2, 2);
	Push_back(&plist2, 8);
	Push_back(&plist2, 9);
	Push_back(&plist2, 11);
	Push_back(&plist2, 15);
	printf("����2��Ԫ��Ϊ:");
	Print_LinkList(&plist2);
	//�ϲ�  
	printf("�ϲ��������Ϊ:");
	//ret.phead=Merge_LinkList(&plist1,&plist2);    //ʹ�õݹ�ķ���  
	ret.phead = merge_list(plist1.phead, plist2.phead);   //ʹ�÷ǵݹ�ķ���  
	Print_LinkList(&ret);
	Free_LinkList(&ret);
}

int main()
{
	test1();
	system("pause");
	return 0;
}
