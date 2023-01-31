.equ LOCALID_DOME_FOSSIL,  1
.equ LOCALID_HELIX_FOSSIL, 2
.equ LOCALID_MIGUEL,       3

MtMoon_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_B2F_OnTransition
	.byte 0

MtMoon_B2F_OnTransition::
	call_if_unset FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_EventScript_ShowFossils
	end

MtMoon_B2F_EventScript_ShowFossils::
	clearflag FLAG_HIDE_DOME_FOSSIL
	clearflag FLAG_HIDE_HELIX_FOSSIL
	return

MtMoon_B2F_EventScript_BattleMiguel::
	trainerbattle_single TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_Text_MiguelIntro, MtMoon_B2F_Text_MiguelDefeat
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil, MSGBOX_AUTOCLOSE
	end


MtMoon_B2F_EventScript_DomeFossil::
	lock
	faceplayer
	removeobject LOCALID_DOME_FOSSIL
	giveitem_msg MtMoon_B2F_Text_ObtainedDomeFossil, ITEM_DOME_FOSSIL, 1, MUS_OBTAIN_KEY_ITEM
	closemessage
	special QuestLog_CutRecording
	delay 10
	setflag FLAG_GOT_DOME_FOSSIL
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
	release
	end


MtMoon_B2F_EventScript_HelixFossil::
	lock
	faceplayer
	removeobject LOCALID_HELIX_FOSSIL
	giveitem_msg MtMoon_B2F_Text_ObtainedHelixFossil, ITEM_HELIX_FOSSIL, 1, MUS_OBTAIN_KEY_ITEM
	closemessage
	special QuestLog_CutRecording
	delay 10
	setflag FLAG_GOT_HELIX_FOSSIL
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
	release
	end


MtMoon_B2F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT, MtMoon_B2F_Text_Grunt1Intro, MtMoon_B2F_Text_Grunt1Defeat
	msgbox MtMoon_B2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_B2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_2, MtMoon_B2F_Text_Grunt2Intro, MtMoon_B2F_Text_Grunt2Defeat
	msgbox MtMoon_B2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_B2F_EventScript_Grunt3::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_3, MtMoon_B2F_Text_Grunt3Intro, MtMoon_B2F_Text_Grunt3Defeat
	msgbox MtMoon_B2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_B2F_EventScript_JessieJamesTriggerTop::
	lockall
	setvar VAR_TEMP_1, 1
	goto MtMoon_B2F_EventScript_JessieJames
	end

MtMoon_B2F_EventScript_JessieJamesTriggerBottom::
	lockall
	setvar VAR_TEMP_1, 2
	goto MtMoon_B2F_EventScript_JessieJames
	end

MtMoon_B2F_EventScript_JessieJames::
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_ENCOUNTER_ROCKET, 0
	call_if_eq VAR_TEMP_1, 1, MtMoon_B2F_EventScript_JessieJamesApproach
	call_if_eq VAR_TEMP_1, 2, MtMoon_B2F_EventScript_JessieJamesApproachBottom
	delay 6
	msgbox MtMoon_B2F_EventScript_JessieJamesIntro
	waitmessage
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_JESSIEJAMES, MtMoon_B2F_EventScript_JessieJamesLost
	call MtMoon_B2F_EventScript_JessieJamesExit
	msgbox MtMoon_B2F_EventScript_JessieJamesPostBattle
	waitmovement 11
	delay 10
	fadedefaultbgm
	removeobject 11
	removeobject 12
	removeobject 13
	setflag FLAG_JESSEJAMESMTMOON
	setvar VAR_JESSEJAMESMTMOON, 1
	releaseall
	end

MtMoon_B2F_EventScript_JessieJamesApproach::
	applymovement 11, MtMoon_B2F_EventScript_Jessie
	applymovement 12, MtMoon_B2F_EventScript_James
	applymovement 13, MtMoon_B2F_EventScript_Meowth
	waitmovement 0
	return

MtMoon_B2F_EventScript_JessieJamesApproachBottom::
	applymovement 11, MtMoon_B2F_EventScript_JessieBottom
	applymovement 12, MtMoon_B2F_EventScript_JamesBottom
	applymovement 13, MtMoon_B2F_EventScript_MeowthBottom
	waitmovement 0
	return

MtMoon_B2F_EventScript_Jessie::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	face_player
	step_end

MtMoon_B2F_EventScript_James::
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	face_player
	step_end

MtMoon_B2F_EventScript_Meowth::
	delay_16
	delay_16
	delay_16
	delay_16
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	face_player
	step_end


MtMoon_B2F_EventScript_JessieBottom::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	face_player
	step_end

MtMoon_B2F_EventScript_JamesBottom::
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	face_player
	step_end

MtMoon_B2F_EventScript_MeowthBottom::
	delay_16
	delay_16
	delay_16
	delay_16
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	face_player
	step_end

MtMoon_B2F_EventScript_JessieJamesExit::
applymovement 11, MtMoon_B2F_EventScript_BlastingOffAgain
applymovement 12, MtMoon_B2F_EventScript_BlastingOffAgain
applymovement 13, MtMoon_B2F_EventScript_BlastingOffAgain
return

MtMoon_B2F_EventScript_BlastingOffAgain::
	walk_in_place_slow_down
	walk_in_place_slow_down
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_up
	walk_in_place_slow_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

MtMoon_B2F_EventScript_JessieJamesIntro::
	.string "Prepare for trouble!\n"
	.string "And make it double!\p"
	.string "To protect the world\n"
	.string "from devastation!\p"
	.string "To unite all peoples\n"
	.string "within our nation!\p"
	.string "To denounce the evils\n"
	.string "of truth and love!\p"
	.string "To extend our reach\n"
	.string "to the stars above!\p"
	.string "Jessie!\p"
	.string "James!\p"
	.string "Team Rocket blasts off\n"
	.string "at the speed of light!\p"
	.string "Surrender now,\n"
	.string "or prepare to fight!\p"
	.string "Meowth, that's right!$"

MtMoon_B2F_EventScript_JessieJamesPostBattle::
	.string "Team Rocket Blasting off again!$"

MtMoon_B2F_EventScript_JessieJamesLost::
	.string "The boss is gonna kill us.$"