#ifndef _MERGELIST_H_
#define _MERGELIST_H_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef  int DataType;
typedef struct LinkNode
{
	DataType data;
	LinkNode*next;
}LinkNode, *pLinkNode;

typedef struct LinkList
{
	LinkNode *phead;
}LinkList, *pLinkList;

void Init_LinkList(pLinkList plist);
void Push_back(pLinkList plist, DataType x);//Î²²å
void Print_LinkList(pLinkList plist);
void Init_list(pLinkNode plist);
void Push_list(pLinkNode plist, DataType x);//Î²²å
pLinkNode merge_list(pLinkNode plist1, pLinkNode plist2);
void Print_list(pLinkNode plist);
void Free_list(pLinkNode plist);
void Free_LinkList(pLinkList plist);

#endif