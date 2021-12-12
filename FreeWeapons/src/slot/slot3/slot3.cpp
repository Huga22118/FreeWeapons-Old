/*
	Plugins by Huga
	Slot 3 On Progress
*/
#include "plugin.h"
#include "stuff.h"

using namespace plugin;

class FreeWeaponByHuga3
{
public:
	FreeWeaponByHuga3()
	{
		static int keyPressTime = 0;
		Events::gameProcessEvent += []
		{
			CPed *hugav3 = FindPlayerPed();
			if (hugav3 && KeyPressed(VK_F6) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
			{
				keyPressTime = CTimer::m_snTimeInMilliseconds;
				CStreaming::RequestModel(MODEL_DESERT_EAGLE, 2);
				CStreaming::RequestModel(MODEL_MOLOTOV, 2);
				CStreaming::LoadAllRequestedModels(false);
				hugav3->GiveWeapon(WEAPON_DESERT_EAGLE, 1000, true);
				hugav3->GiveWeapon(WEAPON_MOLOTOV, 1000, true);
				hugav3->SetCurrentWeapon(WEAPON_DESERT_EAGLE);
				hugav3->SetCurrentWeapon(WEAPON_MOLOTOV);
				CStreaming::SetModelIsDeletable(MODEL_DESERT_EAGLE);
				CStreaming::SetModelIsDeletable(MODEL_MOLOTOV);
			}
		};
	}
} FreeWeaponByHuga3;
