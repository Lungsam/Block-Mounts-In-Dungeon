// find [bool CHARACTER::StartRiding()]

	if (IsPolymorphed())
	{
		ChatPacket(CHAT_TYPE_INFO, LC_TEXT("??��? ��?????������? ����?? ?�� ��? ��?��?��?��?."));
		return false;
	}

// add after

#ifdef ENABLE_BLOCK_MOUNTS_IN_DUNGEON
	if (GetDungeon())
    {	
		RemoveAffect(AFFECT_MOUNT);
		RemoveAffect(AFFECT_MOUNT_BONUS);
	
		if (IsRiding())
			StopRiding();		
		return false;
    }
#endif