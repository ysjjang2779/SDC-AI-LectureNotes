#include "game.h"
#include "player.h"
#include "dice.h"
#include "random.h"
#include "common.h"

#include <stdio.h>

int player_each_dice_number[MAX_PLAYER_NUMBER][MAX_ROLL_NUMBER];

void play_game(void)
{
	int loop;
	int current_player_index;
	char* nickname[MAX_PLAYER_NUMBER] = {
		"입벌려힐들어간다",
		"주님곁으로"
	};

	printf("사용자 닉네임 생성\n");
	// 아래 루프에 넣어도 상관없으나 우선은 별도로 분리하겠습니다
	for (loop = 0; loop < MAX_PLAYER_NUMBER; loop++)
	{
		init_player_nickname(nickname[loop]);
	}
	print_player_list();

	random_seed_config();
	for (current_player_index = 0; current_player_index < MAX_PLAYER_NUMBER; current_player_index++)
	{
		int try_count = 0;
		int first_dice_number;

		first_dice_number = 
			player_each_dice_number[current_player_index][try_count] = roll_dice();

		printf("주사위 눈금: %d\n", first_dice_number);

		if (check_even(first_dice_number))
		{
			printf("주사위 스킬을 발동합니다!\n");
			//apply_dice_skill();
		}
	}
}