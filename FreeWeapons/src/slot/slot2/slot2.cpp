/*
    Plugins by Huga
	Slot 2 On Progress
*/
#include "plugin.h"
#include "stuff.h"

using namespace plugin;

class FreeWeaponByHuga2
{
public:
	FreeWeaponByHuga2()
	{
		static int keyPressTime = 0;
		Events::gameProcessEvent += []
		{
			CPed *hugav2 = FindPlayerPed();
			if (hugav2 && KeyPressed(VK_F7) && CTimer::m_snTimeInMilliseconds - keyPressTime > 25)
			{
				CStreaming::RequestModel(MODEL_M4, 2);
				CStreaming::LoadAllRequestedModels(false);
				hugav2->GiveWeapon(WEAPON_M4, 1000, true);
				hugav2->SetCurrentWeapon(WEAPON_M4);
				CStreaming::SetModelIsDeletable(MODEL_M4);
			}
		};
	}
}	FreeWeaponByHuga2;