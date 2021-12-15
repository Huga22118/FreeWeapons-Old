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

			}
		};
	}
} FreeWeapons_VC2;