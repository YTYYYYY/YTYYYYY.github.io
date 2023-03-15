#include "SeqList.h"

void SLPrint(SeqList* List) {
	for (int i = 0; i < List->size; i++) {
		printf("%d ", List->data[i]);
	}
	printf("\n");
}

void SLCheck(SeqList* List) {
	printf("size:%d,capacity:%d\n", List->size, List->capacity);
}

void SLDestory(SeqList* List) {
	free(List->data);
	List->capacity = 0;
	List->size = 0;
}

void SLCheckCapacity(SeqList* List) {
	if (List->size == List->capacity) {
		int newcapacity = List->capacity == 0 ? 4 : 2 * List->capacity;
		SLDataType* temp = (SLDataType*)realloc(List->data, newcapacity * sizeof(SLDataType));
		if (temp == NULL) {
			printf("Realloc fail!");
			exit(-1);
		}
		List->data = temp;
		List->capacity = newcapacity;
	}
}

//数组初始化
void SLInit(SeqList* List) {
	List->data = NULL;
	List->size = 0;
	List->capacity = 0;
}

//数组尾插
void SLPushBack(SeqList* List, SLDataType x) {
	//如果没有空间或空间不足则扩容
	SLCheckCapacity(List);
	List->data[List->size] = x;
	List->size++;
}

//数组尾删
void SLPopBack(SeqList* List){
	if (List->size > 0) {
		List->size--;
	}
	//或者:
	//assert(List->size > 0);
	//List->size--;
}

//数组头插
void SLPushFront(SeqList* List, SLDataType x){
	//先往后挪再插入
	SLCheckCapacity(List);
	int end = List->size - 1;
	while (end >= 0) {
		List->data[end + 1] = List->data[end];
		end--;
	}
	List->data[0] = x;
	List->size++;
}

//数组头删
void SLPopFront(SeqList* List){
	if (List->size > 0) {
		int begin = 1;
		while (begin < List->size) {
			List->data[begin - 1] = List->data[begin];
			begin++;
		}
		List->size--;
	}
}

int SLFind(SeqList* List, SLDataType x) {
	for (int i = 0; i < List->size; i++) {
		if (List->data[i] == x) {
			return i;
		}
	}
	return -1;
}

void SLInsert(SeqList* List, int pos, SLDataType x) {
	SLCheckCapacity(List);
	int end = List->size-1;
	while (end >= pos) {
		List->data[end + 1] = List->data[end];
		end--;
	}
	List->data[pos] = x;
	List->size++;
}

void SLErase(SeqList* List, int pos) {
	int begin = pos;
	while (begin < List->size) {
		List->data[begin] = List->data[begin + 1];
		begin++;
	}
	List->size--;
}


