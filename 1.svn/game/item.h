// find

bool		IsEquipable() const;

// add after

#ifdef ENABLE_BLOCK_MOUNTS_IN_DUNGEON
bool IsMount() { return GetType() == ITEM_COSTUME && GetSubType() == COSTUME_MOUNT; }
#endif