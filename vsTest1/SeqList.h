#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct {
	SLDataType* data;
	int size;		//��������ݸ���
	int capacity;	//��������洢��
}SeqList;

void SLPrint(SeqList* List);
void SLCheck(SeqList* List);
void SLDestory(SeqList* List);
void SLCheckCapacity(SeqList* List);

void SLInit(SeqList* List);
void SLPushBack(SeqList* List, SLDataType x);
void SLPopBack(SeqList* List);
void SLPushFront(SeqList* List, SLDataType x);
void SLPopFront(SeqList* List);
//....

//����x���ݵ��±꣬û�еĻ�����-1
int SLFind(SeqList* List, SLDataType x);
//pos�±�λ�ò���x
void SLInsert(SeqList* List, int pos, SLDataType x);
//pos�±�����ɾ��
void SLErase(SeqList* List, int pos);