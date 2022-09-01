// find [bool CHARACTER::UseItemEx(LPITEM item, TItemPos DestCell)]

			case LIMIT_TIMER_BASED_ON_WEAR:
				//iLimitTimerBasedOnWearFlagIndex = i;
				break;
		}
	}

// add after

#ifdef ENABLE_BLOCK_MOUNTS_IN_DUNGEON
	if (item->IsMount())	
	{	
		if (GetDungeon())
			ChatPacket(CHAT_TYPE_INFO, LC_TEXT("You cannot use this thing here!"));
			return false;
	}	
#endif	