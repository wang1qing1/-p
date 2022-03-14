#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#define SEQ_INIT_SIZE 10
#define SEQ_INC_SIZE 5
typedef int ElenType;
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	ElenType* dete;
	int capacity;//总容量；
	int cursize;//元素个数；
}Seqlisi;
void InitSeqlist(Seqlisi* plist)
{
	plist->cursize = SEQ_INC_SIZE;
	plist->capacity = SEQ_INIT_SIZE;
	plist->dete = (ElenType*)malloc(sizeof(ElenType) * plist->capacity);
}
int main()
{
	int count = 0;
	Seqlisi plist = { 0 };
	InitSeqlist(&plist);
	do
	{
		scanf_s("%d", plist.dete);
		count++;
	} while (count< plist.cursize);


	return 0;
}