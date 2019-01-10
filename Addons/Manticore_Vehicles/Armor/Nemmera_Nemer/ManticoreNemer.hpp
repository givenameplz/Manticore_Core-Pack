class Manticore_Vehicle_Namer : B_APC_Tracked_01_rcws_F
{
	side = 1;
	scope = 1;
	crew = "B_crew_F";
	faction = "Manticore_Faction";
	displayName = "Namer APC";
	hiddenSelections[] =
	{
		"Camo1", //main body
		"Camo2", //details
		"Camo3"  //Commander Turret
	};
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Vehicles\Armor\Nemmera_Nemer\Texture\Nemmera_CRV_ext01_V1,0_M81.paa",
		"\Manticore_Vehicles\Armor\Nemmera_Nemer\Texture\MBT_01_body_V1,0_M81.paa",
		"\Manticore_Vehicles\Data01\CROWE_Turret_V1,0_M81.paa"
	};

	#include "ManticoreNemerTextureSources.hpp"
};