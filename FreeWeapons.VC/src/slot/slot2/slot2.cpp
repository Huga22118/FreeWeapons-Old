/*
	Plugins by Huga
	Slot 2 On Progress
*/

#include "plugin.h"
#include "common.h"
#include "CStreaming.h"
#include "CTimer.h"
#include "eWeaponModel.h"


using namespace plugin;

class FreeWeapons_VC2 {
public:
	FreeWeapons_VC2()
	{
		static int keyPressTime = 0;
		Events::gameProcessEvent += []
		{
			CPed *tommy2 = FindPlayerPed();
			if (tommy2 && KeyPressed(VK_F7) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
			{
				keyPressTime = CTimer::m_snTimeInMilliseconds;
				CStreaming::RequestModel(MODEL_COLT45, 2);
				CStreaming::RequestModel(MODEL_UZI, 2);
				CStreaming::LoadAllRequestedModels(false);
				tommy2->GiveWeapon(WEAPONTYPE_PISTOL, 1000, true);
				tommy2->GiveWeapon(WEAPONTYPE_UZI, 1000, true);
				CStreaming::SetModelIsDeletable(MODEL_COLT45);
				CStreaming::SetModelIsDeletable(MODEL_UZI);
			}
		};
	}
} FreeWeapons_VC2;