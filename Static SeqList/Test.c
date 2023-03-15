#include "SeqList.h"

void SLTest1() {
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPrint(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPrint(&sl);

}

void SLTest2() {
	SL sl;
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPrint(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPrint(&sl);

}

void SLTest3() {
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLInsert(&sl, -1, 3);
	SLInsert(&sl, 0, 3);
	SLInsert(&sl, 0, 3);
	SLPrint(&sl);
	printf("%d\n", SLGetElem(&sl, 2));
	SLDetele(&sl, 4);
	SLPrint(&sl);

}
int main() {
	//SLTest1();
	//SLTest2();
	//SLTest3();

	system("pause");
	return 0;
}