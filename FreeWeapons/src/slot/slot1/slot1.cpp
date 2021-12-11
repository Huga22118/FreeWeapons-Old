/*
	Plugins by Huga
	Slot 1 Completed
*/
#include "plugin.h"
#include "stuff.h"

using namespace plugin;

class FreeWeaponByHuga1 {
public:
	FreeWeaponByHuga1()
	{
		static int keyPressTime = 0;
		Events::gameProcessEvent += []
		{
			CPed *hugav1 = FindPlayerPed();
			if (hugav1 && KeyPressed(VK_F8) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
			{
				keyPressTime = CTimer::m_snTimeInMilliseconds;
			CStreaming::RequestModel(MODEL_AK47, 2);
			CStreaming::RequestModel(MODEL_ROCKETLA, 2);
			CStreaming::RequestModel(MODEL_MICRO_UZI, 2);
			CStreaming::RequestModel(MODEL_COLT45, 2);
			CStreaming::RequestModel(MODEL_CHROMEGUN, 2);
			CStreaming::RequestModel(MODEL_CUNTGUN, 2);
			CStreaming::RequestModel(MODEL_SATCHEL, 2);
			CStreaming::RequestModel(MODEL_BOMB, 2);
			CStreaming::RequestModel(MODEL_NVGOGGLES, 2);
			CStreaming::LoadAllRequestedModels(false);
			hugav1->GiveWeapon(WEAPON_AK47, 1000, true);
			hugav1->GiveWeapon(WEAPON_MICRO_UZI, 1000, true);
			hugav1->GiveWeapon(WEAPON_PISTOL, 1000, true);
			hugav1->GiveWeapon(WEAPON_SHOTGUN, 1000, true);
			hugav1->GiveWeapon(WEAPON_RLAUNCHER, 1000, true);
			hugav1->GiveWeapon(WEAPON_COUNTRYRIFLE, 1000, true);
			hugav1->GiveWeapon(WEAPON_SATCHEL_CHARGE, 1000, true);
			hugav1->GiveWeapon(WEAPON_DETONATOR, 0, true);
			hugav1->GiveWeapon(WEAPON_NIGHTVISION, 1, true);
			hugav1->SetCurrentWeapon(WEAPON_AK47);
			hugav1->SetCurrentWeapon(WEAPON_PISTOL);
			hugav1->SetCurrentWeapon(WEAPON_MICRO_UZI);
			hugav1->SetCurrentWeapon(WEAPON_SHOTGUN);
			hugav1->SetCurrentWeapon(WEAPON_RLAUNCHER);
			hugav1->SetCurrentWeapon(WEAPON_COUNTRYRIFLE);
			hugav1->SetCurrentWeapon(WEAPON_SATCHEL_CHARGE);
			hugav1->SetCurrentWeapon(WEAPON_DETONATOR);
			hugav1->SetCurrentWeapon(WEAPON_NIGHTVISION);
			CStreaming::SetModelIsDeletable(MODEL_AK47);
			CStreaming::SetModelIsDeletable(MODEL_ROCKETLA);
			CStreaming::SetModelIsDeletable(MODEL_COLT45);
			CStreaming::SetModelIsDeletable(MODEL_MICRO_UZI);
			CStreaming::SetModelIsDeletable(MODEL_CHROMEGUN);
			CStreaming::SetModelIsDeletable(MODEL_CUNTGUN);
			CStreaming::SetModelIsDeletable(MODEL_SATCHEL);
			CStreaming::SetModelIsDeletable(MODEL_BOMB);
			CStreaming::SetModelIsDeletable(MODEL_NVGOGGLES);
		    }
		};
	}
} FreeWeaponByHuga1;