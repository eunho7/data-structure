#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


struct Array
{
	int* A;     // 배열을 가리키는 포인터
	int size;   // 배열의 전체 크기
	int length; // 현재 사용 중인 요소 개수
};

void Display(struct Array arr) 
{
	int i;
	printf("\nElemnet are\n");
	for (i = 0;i < arr.length;i++)
		printf("%d", arr.A[i]);

}


int main()
{
	struct Array arr; // stack 영역

	int n, i;

	printf("Enter size of an array");
	scanf("%d", &arr.size);

	arr.A = (int*)malloc(arr.size * sizeof(int)); // Heap 영역 (malloc)
	arr.length = 0;								  // initialize length to 0

	printf("Enter number of numbers");
	scanf("%d", &n);

	printf("Enter all Elements\n");
	for (i = 0;i < n;i++)
		scanf("%d", &arr.A[i]);
	arr.length = n;

	// print arr
	Display(arr);

	return 0;
}

