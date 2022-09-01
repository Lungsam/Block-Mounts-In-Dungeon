// find

		DWORD dwTimeNow = get_global_time();
		if ((pkGuild->GetDungeonCooldown() > dwTimeNow) && (!pkGuild->GetDungeonCH()))
		{
			int iDif = pkGuild->GetDungeonCooldown() - dwTimeNow;
			iRes1 = 7;
			iRes2 = iDif;
			return;
		}

// add after

#ifdef ENABLE_BLOCK_MOUNTS_IN_DUNGEON	
		if (pkChar->IsRiding())
		{
			iRes1 = 8;
			return;
		}
#endif

// find
			PIXEL_POSITION mPos;
			if (!SECTREE_MANAGER::instance().GetRecallPositionByEmpire((int)(MAP_INDEX), 0, mPos))
			{
				iLimit = 2;
				return true;
			}
			

// add after

#ifdef ENABLE_BLOCK_MOUNTS_IN_DUNGEON	
		if (pkChar->IsRiding())	
		{
			iLimit = 5;
			return true;
		}
#endif	