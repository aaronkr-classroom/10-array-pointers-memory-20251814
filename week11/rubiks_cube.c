// rubiks_cube.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 3
#define FACES 6

// 전역 변수 선언
char* colors[FACES] = { 
	"White","Red", "Blue", "Green","Yellow", "Orange" 
};
char letters[FACES] = { 'W','R','B','G','Y','O' };
int hexColors[FACES] = {
	0xFFF, 0xF00, 0x0FF, 0x0F0, 0xFA0, 0xFF0
};

// 3x3x6 배열로 큐브 상태 정의
int cube[LENGTH][LENGTH][FACES];

// 출력 모드 선택
enum PrintMode { STRING, LETTER, HEX };

// 큐브 초기화 함수
void initCube() {
	for(int i = 0; i < FACES; i++) {
		for(int j = 0; j < LENGTH; j++) { // 가로 (행)
			for (int k = 0; k < LENGTH; k++) { // 세로 (열)	
				cube[i][j][k] = i; // 0~5로 각 면 초기화
			}
		}
	}
}

// 큐브 출력 함수
void printCube(enum PrintMode mode) {
	const char* labels[FACES] = {
		"Up","Left"," Front","Right","Back", "Down"
	};
	for (int i = 0; i < FACES; i++) {
		printf("%s Face:\n", labels[i]);
		for (int j = 0; j < LENGTH; j++) {
			for (int k = 0; k < LENGTH; k++) {
				switch (mode) {
				case STRING:
					printf("%-7s", colors[cube[i][j][k]]); // ----red
					break;
				case LETTER:

					break;
				case HEX:
					break;

				}
			}																						
		}
	}
}

// 90도 시계 방향 회전
void rotateFace(int face) {

}

// 큐브 섞기 함수 (랜덤 회전)
void scrambleCube(int moves) {

}

// 쉬운 섞기 함수
void easyScramble() {

}

int main(void) {
	// 초기화
	initCube();
	printf("Initial Cube:\n");
	printfCube(STRING); // 다른 모드를 선택

	// 섞겨
	for (int i = 0; i <= 4; i++) {
		scrambleCube();
		printfCube(LETTER);
	}

	return 0;
}