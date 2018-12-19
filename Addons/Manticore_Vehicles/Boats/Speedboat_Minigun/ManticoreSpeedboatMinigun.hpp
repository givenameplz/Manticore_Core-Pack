class B_Boat_Armed_01_minigun_F;

class Manticore_Vehicle_speedboat_Minigun : B_Boat_Armed_01_minigun_F
{
	side = 1;
	scope = 2;
	crew = "B_crew_F";
	faction = "Manticore_Faction";
	displayName = "Speedboat Minigun";
	hiddenSelections[] =
	{
		"Camo",   //Base
		"Camo2",  //Interior
		"Camo3"   //COREW Turret
	};
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Vehicles\Boats\Speedboat_Minigun\Texture\Speedboat_Minigun_Base_V1,0_AOR3.paa",
		"\Manticore_Vehicles\Boats\Speedboat_Minigun\Texture\Speedboat_Minigun_ine_V1,0_AOR3.paa",
		"\Manticore_Vehicles\Data01\CROWE_Turret_V1,0_AOR3.paa"
	};

	#include "ManticoreSpeedboatMinigunTextureSources.hpp"
};