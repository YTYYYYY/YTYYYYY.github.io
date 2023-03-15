#pragma once

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

#define MAXSIZE 4

typedef int ElemType;

typedef struct {
	ElemType* data;
	int length;
}SL;

void SLPrint(SL* L);
int SLLength(SL* L);
int SLCheckLength(SL* L);

void SLInit(SL* L);
void SLPushBack(SL* L, ElemType x);
void SLPopBack(SL* L);
void SLPushFront(SL* L, ElemType x);
void SLPopFront(SL* L);

void SLInsert(SL* L, int pos, ElemType x);
ElemType SLGetElem(SL* L, int pos);
void SLDetele(SL* L, int pos);
