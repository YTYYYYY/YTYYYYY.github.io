#include "SeqList.h"

void SLPrint(SL* L) {
	for (int i = 0; i < L->length; i++) {
		printf("%d ", L->data[i]);
	}
	printf("\n");
}

int SLLength(SL* L) {
	return L->length;
}

int SLCheckLength(SL* L) {
	if (L->length <= 0) {
		return -1;
	}
	if (L->length < MAXSIZE) {
		return 1;
	}
	return 0;
}


void SLInit(SL* L) {
	L->data = (ElemType*)malloc(MAXSIZE * sizeof(ElemType));
	if (L->data == NULL) {
		printf("Malloc Fail!\n");
		exit(-1);
	}
	L->length = 0;
}

void SLPushBack(SL* L, ElemType x) {
	if (SLCheckLength(L) == 0) {
		printf("List Fall!\n");
		return;
	}
	L->data[L->length] = x;
	L->length++;
}

void SLPopBack(SL* L) {
	if (SLCheckLength(L) != -1) {
		L->length--;
	}
	else {
		printf("None in list!\n");
	}
}

void SLPushFront(SL* L, ElemType x) {
	if (SLCheckLength(L) == 0) {
		printf("List Fall!\n");
		return;
	}
	int end = L->length;
	while (end > 0) {
		L->data[end] = L->data[end - 1];
		end--;
	}
	L->data[0] = x;
	L->length++;
}

void SLPopFront(SL* L) {
	if (SLCheckLength(L) == -1) {
		printf("None in list!\n");
		return;
	}
	int begin = 0;
	while (begin < L->length) {
		L->data[begin] = L->data[begin + 1];
		begin++;
	}
	L->length--;
}

void SLInsert(SL* L, int pos, ElemType x) {
	if (SLCheckLength(L) == 0) {
		printf("List Fall!\n");
		return;
	}
	if (pos < 0 || pos > L->length) {
		printf("Wrong position!\n");
		return;
	}
	int end = L->length;
	while (end > pos) {
		L->data[end] = L->data[end - 1];
		end--;
	}
	L->data[pos] = x;
	L->length++;

}

ElemType SLGetElem(SL* L, int pos) {
	if (pos < 0 || pos > L->length-1) {
		printf("Wrong position!\n");
		return NULL;
	}
	return L->data[pos];
}

void SLDetele(SL* L, int pos) {
	if (SLCheckLength(L) == -1) {
		printf("None in list!\n");
		return;
	}
	if (pos < 0 || pos > L->length-1) {
		printf("Wrong position!\n");
		return;
	}
	int begin = pos;
	while (begin < L->length) {
		L->data[begin] = L->data[begin + 1];
		begin++;
	}
	L->length--;
}