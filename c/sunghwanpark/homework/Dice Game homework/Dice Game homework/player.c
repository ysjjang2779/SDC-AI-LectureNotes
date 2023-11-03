#define _CRT_SECURE_NO_WARNINGS
#include "player.h"
#include <string.h>
#include <stdio.h>

// 배열의 시작은 index 0번부터 시작된다. 
//주의 사랑 -> 어셈블리어 코드에서도 봤듯이 메모리에 차원(Dimension) 개념은 없다. 
// 그래서 다차원 배열이라는 표현보다는 근본 있게 '다중 배열'이라는 표현이 맞다. 
char player[MAX_PLAYER_NUMBER][MAX_PLAYER_NAME_LENGTH];
int current_player_set_index;

void set_player_info(char name[])
{
	int input_player_name_length = strlen(name);

	strncpy(player[current_player_set_index++], name, input_player_name_length + 1);
	
}

void print_player_info(int index)
{
	printf("사용자 %d 의 이름은: %s\n", index+1, player[index]);
}


