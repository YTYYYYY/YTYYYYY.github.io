#include "SeqList.h"

void TestSeqList1() {
	SeqList sl;
	SLInit(&sl);
	//SLCheck(&sl);
	SLPushBack(&sl, 1);
	//SLCheck(&sl);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	//SLCheck(&sl);
	SLPrint(&sl);

	SLDestory(&sl);
}

void TestSeqList2() {
	SeqList sl;
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);
	SLCheck(&sl);
	SLPopFront(&sl);
	SLPrint(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPrint(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPrint(&sl);
}

void TestSeqList3() {
	SeqList sl;
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);
	printf("4的下标：%d\n", SLFind(&sl , 4));
	printf("6的下标：%d\n", SLFind(&sl, 6));
	SLInsert(&sl, 3, 6);
	SLPrint(&sl);
	SLErase(&sl, 3);
	SLPrint(&sl);
}


int main() {
	//TestDemo
	{
		//TestSeqList1();
		//TestSeqList2();
		//TestSeqList3();
	}
	


	system("pause");
	return 0;
}