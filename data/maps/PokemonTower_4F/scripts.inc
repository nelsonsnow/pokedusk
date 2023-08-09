PokemonTower_4F_MapScripts::
	.byte 0

PokemonTower_4F_EventScript_Paula::
	trainerbattle_single TRAINER_CHANNELER_PAULA, PokemonTower_4F_Text_PaulaIntro, PokemonTower_4F_Text_PaulaDefeat
	msgbox PokemonTower_4F_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_4F_EventScript_Laurel::
	trainerbattle_single TRAINER_CHANNELER_LAUREL, PokemonTower_4F_Text_LaurelIntro, PokemonTower_4F_Text_LaurelDefeat
	msgbox PokemonTower_4F_Text_LaurelPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_4F_EventScript_Jody::
	trainerbattle_single TRAINER_CHANNELER_JODY, PokemonTower_4F_Text_JodyIntro, PokemonTower_4F_Text_JodyDefeat
	msgbox PokemonTower_4F_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_4F_Trigger_Gengar::
	lockall
	playse SE_PIN
	applymovement 7, PokemonTower_4F_Gengar
	delay 10
	fadescreen FADE_TO_BLACK
	delay 10
	removeobject 7
	delay 10
	fadescreen FADE_FROM_BLACK
	msgbox PokemonTower_4F_Gengar_Text, MSGBOX_AUTOCLOSE
	setvar VAR_POKEMONTOWER_GENGAR, 1
	setflag FLAG_GENGAR_POKEMONTOWER
	releaseall
	return

PokemonTower_4F_Gengar::
	delay_16
	emote_question_mark
	face_left_fast

PokemonTower_4F_Gengar_Text::
	.string "It's that Gengar again...$"