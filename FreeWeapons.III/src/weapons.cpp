/*
	Plugins by Huga
	Weapons Completed
*/

#include "plugin.h"
#include "common.h"
#include "CTimer.h"

using namespace plugin;

class FreeWeapons1 {
public:
	FreeWeapons1() 
	{
		static int keyPressTime = 0;
		Events::gameProcessEvent += []
		{
			CPed *playa = FindPlayerPed();
			if (playa && KeyPressed(VK_F8) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
			{
				keyPressTime = CTimer::m_snTimeInMilliseconds;
				playa->GiveWeapon(WEAPONTYPE_AK47, 1000);
				playa->GiveWeapon(WEAPONTYPE_COLT45, 1000);
				playa->GiveWeapon(WEAPONTYPE_UZI, 1000);
				playa->GiveWeapon(WEAPONTYPE_SHOTGUN, 1000);
				playa->GiveWeapon(WEAPONTYPE_M16, 1000);
				playa->GiveWeapon(WEAPONTYPE_SNIPERRIFLE, 1000);
				playa->GiveWeapon(WEAPONTYPE_ROCKETLAUNCHER, 1000);
				playa->GiveWeapon(WEAPONTYPE_MOLOTOV, 1000);
				playa->GiveWeapon(WEAPONTYPE_GRENADE, 1000);
				playa->GiveWeapon(WEAPONTYPE_FLAMETHROWER, 1000);
			}
		};

	}
} FreeWeapons1;
