PewterCity_Gym_Text_BrockIntro:: @ 8190CD4
    .string "Welcome and great job. I'm Brock,\n"
    .string "Pewter City's Gym Leader.\p"
    .string "My rock hard willpower is what I\n"
    .string "try to portray in my Pokémon.\p"
    .string "My Pokémon are all rock solid, and\n"
    .string "have my strength as a foundation.\p"
    .string "You guessed it, my Pokémon are all\n"
    .string "Rock type!\p"
    .string "You're going to challenge me but\n"
    .string "you won't win?\p"
    .string "Many have followed the path you\n"
    .string "are on now but have failed here.\p"
    .string "No more talking!\n"
    .string "Show me what you've got!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
    .string "You surprised me. You are a talented\n"
    .string "trainer and won fair and square.\p"
    .string "As proof of your victory, I grant\n"
    .string "you the official Pokémon League\l"
    .string "BoulderBadge.\p"
    .string "{FONT_2}{PLAYER} received the BoulderBadge\n"
    .string "from Brock!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
    .string "{FONT_4}Just having the BoulderBadge makes\n"
    .string "your Pokémon more powerful.\p"
    .string "It also your Pokémon to use\n"
    .string "Flash outside of battle if they know it.$"

PewterCity_Gym_Text_TakeThisWithYou::
    .string "Also I want to give you something\n"
    .string "for the road ahead.$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
    .string "{PLAYER} received TM39\n"
    .string "from Brock.$"

PewterCity_Gym_Text_ExplainTM39::
    .string "This TM contains Rock Tomb\n"
    .string "It hurls boulders at your target and\l"
    .string "lowers its Speed.$"

PewterCity_Gym_Text_BrockPostBattle:: @ 819110F
    .string "There are all kinds of Trainers in\n"
    .string "Kanto. But I honestly think that you\l"
    .string "are a very gifted Pokémon Trainer.\p"
    .string "Your next stop will be the Cerulean\n"
    .string "Gym against Misty.\p"
    .string "Go and test your abilities against her\n"
    .string "beautiful youth and serene smile.\p" 
    .string "Can you also tell Misty that\n"
    .string "I am still waiting for that date?$"

PewterCity_Gym_Text_DontHaveRoomForThis::
    .string "You don't have room for this.$"

PewterCity_Gym_Text_LiamIntro::
    .string "Stop right there, bro!\p"
    .string "You're ten thousand lightyears \n"
    .string "from facing Brock!$"

PewterCity_Gym_Text_LiamDefeat::
    .string "Dammit!\p"
    .string "Anyway light-years measures distance\n"
    .string "and not time.$"

PewterCity_Gym_Text_LiamPostBattle::
    .string "You're pretty lit.\n"
    .string "I hope you beat Brock!$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
    .string "Hello there budding trainer!\n"
    .string "Do you dream big?\p"
    .string "Do you dream of becoming\n"
    .string "the Pokémon Champion?\p"
    .string "I'm not a Trainer, but I\n"
    .string "the best coach out there!\p"
    .string "Let me take you to the top!$"

PewterCity_Gym_Text_LetsGetHappening::
    .string "Come on! Let's get to it!\n"
    .string "Here we go!!$"

PewterCity_Gym_Text_TryDifferentPartyOrders:: @ 819135C
    .string "Your point Pokémon is one of your\n"
    .string "most important Pokémon on your team.\p"
    .string "Depending on your opponenet switching,\n"
    .string "your point can give you an advantage.\p"
    .string "Try different teams and team orders\n"
    .string "to give yourself an upperhand.$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
    .string "Don't worry about it, I do this pro\n"
    .string "bono for all trainers!$"

PewterCity_Gym_Text_YoureChampMaterial::
    .string "I knew it! Congrats! You're\n"
    .string "definitely Pokémon Champion material!$"

PewterCity_Gym_Text_GymStatue:: @ 819146E
    .string "Pewter Pokémon Gym\n"
    .string "Leader: Brock\p"
    .string "Winning Trainers:\n"
    .string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon:: @ 81914A4
    .string "Pewter Pokémon Gym\n"
    .string "Leader: Brock\p"
    .string "Winning Trainers:\n"
    .string "{RIVAL}, {PLAYER}$"

