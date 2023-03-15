#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct {
	SLDataType* data;
	int size;		//数组的数据个数
	int capacity;	//数组的最大存储量
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

//返回x数据的下标，没有的话返回-1
int SLFind(SeqList* List, SLDataType x);
//pos下标位置插入x
void SLInsert(SeqList* List, int pos, SLDataType x);
//pos下标数据删除
void SLErase(SeqList* List, int pos);