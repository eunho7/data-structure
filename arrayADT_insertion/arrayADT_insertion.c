/**
 * @file        arrayADT_insertion.c
 * @brief       배열의 삽입
 * @author      Eunho Shin
 * @date        2025-02-10
 * @version     1.0
 *
 * @details
 * - 주제: 배열 삽입 연습
 */

#include <stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

void Display(struct Array arr)
{
	int i;
	printf("\nElements are\n");
	for (i = 0;i < arr.length;i++)
		printf("%d ", arr.A[i]);
}

/**
 * 1. Append에는 배열의 길이(사이즈X)
 * 2. 넣을 값
 * 위 2개가 필요하다.
 */
void Append(struct Array* arr, int x)
{
	// 1. 공간 확인
	if (arr->length < arr->size)
		arr->A[arr->length++] = x;
}

void Insert(struct Array* arr, int index, int x)
{
	if (index >= 0 && index <= arr->length)
	{
		for (int i = arr->length; i > index;i--)
			arr->A[i] = arr->A[i - 1];

		arr->A[index] = x;
		arr->length++;
	}

}

int main()
{
	struct Array arr = { {2,3,4,5,6},10,5 };

	//Append(&arr, 10);
	Insert(&arr, 0, 10);
	Display(arr);

	return 0;
}