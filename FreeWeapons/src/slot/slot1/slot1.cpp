/*
	Plugins by Huga
	Slot 1 On Progress
*/
#include "plugin.h"
#include "stuff.h"

using namespace plugin;

class PlayerWeapon {
public:
	PlayerWeapon()
	{
		static int keyPressTime = 0;
		Events::gameProcessEvent += []
		{
			CPed *hugav1 = FindPlayerPed();
			if (hugav1 && KeyPressed(VK_F8) && CTimer::m_snTimeInMilliseconds - keyPressTime > 50)
			{
			CStreaming::RequestModel(MODEL_AK47, 2);
			CStreaming::RequestModel(MODEL_ROCKETLA, 2);
			CStreaming::RequestModel(MODEL_MICRO_UZI, 2);
			CStreaming::RequestModel(MODEL_COLT45, 2);
			CStreaming::RequestModel(MODEL_CHROMEGUN, 2);
			CStreaming::LoadAllRequestedModels(false);
			hugav1->GiveWeapon(WEAPON_AK47, 1000, true);
			hugav1->GiveWeapon(WEAPON_MICRO_UZI, 1000, true);
			hugav1->GiveWeapon(WEAPON_PISTOL, 1000, true);
			hugav1->GiveWeapon(WEAPON_SHOTGUN, 1000, true);
			hugav1->GiveWeapon(WEAPON_RLAUNCHER, 1000, true);
			hugav1->SetCurrentWeapon(WEAPON_AK47);
			hugav1->SetCurrentWeapon(WEAPON_PISTOL);
			hugav1->SetCurrentWeapon(WEAPON_MICRO_UZI);
			hugav1->SetCurrentWeapon(WEAPON_SHOTGUN);
			hugav1->SetCurrentWeapon(WEAPON_RLAUNCHER);
			CStreaming::SetModelIsDeletable(MODEL_AK47);
			CStreaming::SetModelIsDeletable(MODEL_ROCKETLA);
			CStreaming::SetModelIsDeletable(MODEL_COLT45);
			CStreaming::SetModelIsDeletable(MODEL_MICRO_UZI);
			CStreaming::SetModelIsDeletable(MODEL_CHROMEGUN);
		    }
		};
	}
} playerWeapon;