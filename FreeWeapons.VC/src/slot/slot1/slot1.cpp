/*
	Plugins by Huga
	Slot 1 Completed
*/

#include "plugin.h"
#include "common.h"
#include "CStreaming.h"
#include "CTimer.h"
#include "eWeaponModel.h"


using namespace plugin;

class FreeWeapons_VC1 {
public:
	FreeWeapons_VC1()
	{
		static int keyPressTime = 0;
		Events::gameProcessEvent += []
		{
			CPed *tommy = FindPlayerPed();
			if (tommy && KeyPressed(VK_F8) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
			{
				
				keyPressTime = CTimer::m_snTimeInMilliseconds;
				CStreaming::RequestModel(MODEL_PYTHON, 2);
				CStreaming::RequestModel(MODEL_LASER, 2);
				CStreaming::RequestModel(MODEL_BUDDYSHOT, 2);
				CStreaming::RequestModel(MODEL_INGRAMSL, 2);
				CStreaming::RequestModel(MODEL_GRENADE, 2);
				CStreaming::RequestModel(MODEL_BOMB, 2);
				CStreaming::RequestModel(MODEL_M4, 2);
				CStreaming::RequestModel(MODEL_ROCKETLA, 2);
				CStreaming::LoadAllRequestedModels(false);
				tommy->GiveWeapon(WEAPONTYPE_DETONATOR_GRENADE, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_PYTHON, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_STUBBY_SHOTGUN, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_SILENCED_INGRAM, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_M4, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_LASERSCOPE, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_ROCKETLAUNCHER, 1000, true);
				CStreaming::SetModelIsDeletable(MODEL_PYTHON);
				CStreaming::SetModelIsDeletable(MODEL_LASER);
				CStreaming::SetModelIsDeletable(MODEL_BUDDYSHOT);
				CStreaming::SetModelIsDeletable(MODEL_INGRAMSL);
				CStreaming::SetModelIsDeletable(MODEL_GRENADE);
				CStreaming::SetModelIsDeletable(MODEL_BOMB);
				CStreaming::SetModelIsDeletable(MODEL_M4);
				CStreaming::SetModelIsDeletable(MODEL_ROCKETLA);
			}
		};
	}
} FreeWeapons_VC1;
