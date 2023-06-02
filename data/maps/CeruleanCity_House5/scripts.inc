CeruleanCity_House5_MapScripts::
	.byte 0

CeruleanCity_House5_EventScript_Clerk::
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message CeruleanCity_House1_Text_AnyInterestInBerries
	waitmessage
	pokemart CeruleanCity_House5_Items
	msgbox CeruleanCity_House1_Text_HopeToSeeYouAgain
	release
	end

	.align 2
CeruleanCity_House5_Items::
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CARBOS
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_HP_UP
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE
	release
	end
