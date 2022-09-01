// find

	if (ch->IsGM() == true)
		ch->ChatPacket(CHAT_TYPE_COMMAND, "ConsoleEnable");
	
// add after

#ifdef ENABLE_BLOCK_MOUNTS_IN_DUNGEON
	if (ch->GetDungeon())
	{
		LPITEM pCostumeMount = ch->GetWear(WEAR_COSTUME_MOUNT);
		if (pCostumeMount != NULL)
			ch->UnequipItem(pCostumeMount);
	}
#endif