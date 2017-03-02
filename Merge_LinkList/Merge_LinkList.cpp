// Merge_LinkList.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"mergelist.h"

void Init_list(pLinkNode plist)
{
	assert(plist);
	plist->next = NULL;
}
pLinkNode Create_Node(DataType x)
{
	pLinkNode newNode = (pLinkNode)malloc(sizeof(LinkNode));
	if (NULL == newNode)
	{
		printf("out of memory\n");
		exit(EXIT_FAILURE);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}
void Push_list(pLinkNode plist, DataType x)
{
	pLinkNode cur = plist->next;
	pLinkNode newNode = NULL;
	assert(plist);
	newNode = Create_Node(x);
	if (NULL == plist->next)
	{
		plist->next = newNode;
	}
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}
void Print_list(pLinkNode plist)
{
	pLinkNode cur = plist->next;
	assert(plist);
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("over\n");
}
void Free_list(pLinkNode plist)
{
	pLinkNode cur = plist->next;
	pLinkNode tmp = NULL;
	if (NULL == plist->next)
	{
		return;//空
	}
	else if (NULL==plist->next->next)
	{
		free(plist->next);
		plist->next = NULL;
	}
	else
	{
		while (cur != NULL)
		{
			tmp = cur;
			cur = cur->next;
			free(tmp);
			tmp = NULL;
		}
	}
	plist = NULL;
}
pLinkNode merge_list(pLinkNode plist1, pLinkNode plist2)
{
	//合并两个有序链表
	pLinkNode plist3 = NULL;
	pLinkNode p1 = plist1;
	pLinkNode p2 = plist2;
	if (p1 == p2)
	{
		return p1;//俩表相同
	}
	if (p1 = NULL)
	{
		return p2;
	}
	if (p2 = NULL)
	{
		return p1;
	}
	if (p1->data < p2->data)
	{
		plist3 = p1;
		plist3->next = merge_list(p1->next, p2);
	}
	else
	{
		plist3 = p2;
		plist3->next = merge_list(p1, p2->next);
	}
	return plist3;
}
void Init_list(pLinkList plist)
{
	assert(plist);
	plist->phead = NULL;
}
void Free_LinkList(pLinkList plist)
{
	pLinkNode cur = plist->phead;
	assert(plist);
	while (cur != NULL)
	{
		pLinkNode tmp = cur;
		cur = cur->next;
		free(tmp);
		tmp = NULL;
	}
	plist->phead = NULL;
}
void Init_LinkList(pLinkList plist)
{
	assert(plist);
	plist->phead = NULL;
}
/*
pLinkNode Create_Node(DataType x)
{
	pLinkNode newNode = (pLinkNode)malloc(sizeof(LinkNode));
	if (NULL == newNode)
	{
		printf("out of memory\n");
		exit(EXIT_FAILURE);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}
*/
void Free_list(pLinkList plist)
{
	pLinkNode cur = plist->phead;
	assert(plist);
	while (cur != NULL)
	{
		pLinkNode tmp = cur;
		cur = cur->next;
		free(tmp);
		tmp = NULL;
	}
	plist->phead = NULL;
}
void Push_back(pLinkList plist, DataType x)
{
	pLinkNode cur = NULL;
	pLinkNode newNode = NULL;
	assert(plist);
	cur = plist->phead;
	newNode = Create_Node(x);
	if (NULL == cur)
	{
		plist->phead = newNode;
	}
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}

void Print_LinkList(pLinkList plist)
{
	pLinkNode cur = plist->phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("over\n");
}