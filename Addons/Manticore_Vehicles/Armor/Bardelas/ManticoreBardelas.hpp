class LandVehicle;
class B_APC_Tracked_01_AA_F;

class Manticore_Vehicle_Bardelas : B_APC_Tracked_01_AA_F
{
	side = 1;
	scope = 1;
	crew = "B_crew_F";
	faction = "Manticore_Faction";
	displayName = "Bardelas AA";
	hiddenSelections[] =
	{
		"Camo1", //main Armor
		"Camo2", //details
		"Camo3"  //AA Tower
	};
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Vehicles\Armor\Bardelas\Texture\Bardelas_AA_ext01_V1,0_M81.paa",
		"\Manticore_Vehicles\Armor\Nemmera_Nemer\Texture\MBT_01_body_V1,0_M81.paa",
		"\Manticore_Vehicles\Armor\Bardelas\Texture\Bardelas_AA_ext03_V1,0_M81.paa"
	};

	#include "ManticoreBardelasTextureSources.hpp"
};