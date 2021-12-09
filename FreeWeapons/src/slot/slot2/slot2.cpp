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
				CStreaming::RequestModel(MODEL_SILENCED, 2);
				CStreaming::RequestModel(MODEL_SNIPER, 2);
				CStreaming::RequestModel(MODEL_SHOTGSPA, 2);
				CStreaming::RequestModel(MODEL_HEATSEEK, 2);
				CStreaming::RequestModel(MODEL_MP5LNG, 2);
				CStreaming::RequestModel(MODEL_GRENADE, 2);
				CStreaming::LoadAllRequestedModels(false);
				hugav2->GiveWeapon(WEAPON_M4, 1000, true);
				hugav2->GiveWeapon(WEAPON_PISTOL_SILENCED, 1000, true);
				hugav2->GiveWeapon(WEAPON_SNIPERRIFLE, 1000, true);
				hugav2->GiveWeapon(WEAPON_SPAS12, 1000, true);
				hugav2->GiveWeapon(WEAPON_RLAUNCHER_HS, 1000, true);
				hugav2->GiveWeapon(WEAPON_MP5, 1000, true);
				hugav2->GiveWeapon(WEAPON_GRENADE, 1000, true);
				hugav2->SetCurrentWeapon(WEAPON_M4);
				hugav2->SetCurrentWeapon(WEAPON_PISTOL_SILENCED);
				hugav2->SetCurrentWeapon(WEAPON_SNIPERRIFLE);
				hugav2->SetCurrentWeapon(WEAPON_SPAS12);
				hugav2->SetCurrentWeapon(WEAPON_RLAUNCHER_HS);
				hugav2->SetCurrentWeapon(WEAPON_MP5);
				hugav2->SetCurrentWeapon(WEAPON_GRENADE);
				CStreaming::SetModelIsDeletable(MODEL_M4);
				CStreaming::SetModelIsDeletable(MODEL_SILENCED);
				CStreaming::SetModelIsDeletable(MODEL_SNIPER);
				CStreaming::SetModelIsDeletable(MODEL_SHOTGSPA);
				CStreaming::SetModelIsDeletable(MODEL_HEATSEEK);
				CStreaming::SetModelIsDeletable(MODEL_MP5LNG);
				CStreaming::SetModelIsDeletable(MODEL_GRENADE);
			}
		};
	}
}	FreeWeaponByHuga2;