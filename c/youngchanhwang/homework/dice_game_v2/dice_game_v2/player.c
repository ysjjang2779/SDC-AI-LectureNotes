#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "player.h"


char player[MAX_PLAYER_NUMBER][MAX_PLAYER_NAME_LENGTH];
int current_player_set_index;
void set_player_info(char name[])
{
	int input_player_name_length = strlen(name);
	strncpy(player[current_player_set_index++], name, input_player_name_length);
}


void print_player_info(int index)
{
	printf("����� %d�� �̸��� =%s\n", index, player[index]);
}