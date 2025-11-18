// 2d_arr_ptr.c
#include <stdio.h>
#include <conio.h> // getch()

#define ROWS 3	 // 행의 개수
#define COLS 5	 // 열의 개수

// 2D 배열을 출력하는 함수
void printArr(char arr[ROWS][COLS]) {
	// printf("배열의 상태:\n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}
int main(void) {

		char data[ROWS][COLS] = { 0 };
		char (*p)[COLS];
		

		p = data; // 포인터 p가 data 배열을 가리키도록 설정

		printf("시작 전:\n");
		printfArr(data);
		printf("press any key to continue...\n");
		getchar();

		(*p)[1] = 3;
		(*(p + 1))[2] = 4;
		(*(p + 2))[4] = 5;

		printf("초기 배열의 상태:\n");
		printfArr(data);
		printf("press any key to continue...\n");
		getchar();

		p = data; // 포인터 p를 다시 첫 번째 행으로 초기화
		p++;      // 포인터 p를 두 번째 행으로 이동
		(*p)[0] = 7; // 두 번째 행의 첫 번째 요소에 7 할당
		(*p)[4] = 8;
		(*(p - 1))[3] = 9; // 첫 번째 행을 수정하기

		printf("두 번째 수정 후 배열의 상태:\n");
		printfArr(data);
		printf("press any key to continue...\n");
		getchar();
	
		// 포인터 산술 연산을 사용함
		char* ptr = &data[0][0]; // 배열의 첫 번째 요소를 가리키는 포인터
		*(ptr + 6) = 10; // 두 번째 행의 두 번째 요소에 10 할당
		*(ptr + 10) = 11; // 세 번째 행의 첫 번째 요소에 11 할당
		*(ptr + 14) = 12; // 마지막 요소에 28 할당
		// *(ptr + 15) = 100; // 오류! 배열 끝으로 넘어감

		printf("포인터 산술 연산 후 배열의 상태:\n");
		printfArr(data);
		printf("press any key to continue...\n");
		getchar();

		char temp[COLS];
		for (int i = 0; i < COLS; i++) {
			temp[i] = data[0][i];
			data[0][i] = data[2][i];
			data[2][i] = temp[i];
		}

		return 0;
}