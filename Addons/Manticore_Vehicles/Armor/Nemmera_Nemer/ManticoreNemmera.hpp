class Manticore_Vehicle_Nemmera : B_APC_Tracked_01_CRV_F
{
	side = 1;
	scope = 2;
	crew = "B_crew_F";
	faction = "Manticore_Faction";
	displayName = "Nemmera CRV";
	hiddenSelections[] =
	{
		"Camo1", //Main Body
		"Camo2", //Details
		"Camo3", //CROWE Turret
		"Camo4"  //Crane
	};
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Vehicles\Armor\Nemmera_Nemer\Texture\Nemmera_CRV_ext01_V1,0_M81.paa",
		"\Manticore_Vehicles\Armor\Nemmera_Nemer\Texture\MBT_01_body_V1,0_M81.paa",
		"\Manticore_Vehicles\Data01\CROWE_Turret_V1,0_M81.paa",
		"\Manticore_Vehicles\Armor\Nemmera_Nemer\Texture\Nemmera_CRV_ext04_V1,0_M81.paa"
	};

	#include "ManticoreNemmeraTextureSources.hpp"
};