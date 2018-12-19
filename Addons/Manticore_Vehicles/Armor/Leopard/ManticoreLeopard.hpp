class LandVehicle;
class I_MBT_03_cannon_F;

class Manticore_Vehicle_Leopard : I_MBT_03_cannon_F
{
	side = 1;
	scope = 2;
	crew = "B_crew_F";
	faction = "Manticore_Faction";
	displayName = "Leopard";
	hiddenSelections[] =
	{
		"Camo1", //Main Body
		"Camo2", //Main Tower
		"Camo3"  //Commander Turret
	};
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Vehicles\Armor\Leopard\Texture\Leopard_ext01_V1,0_M81.paa",
		"\Manticore_Vehicles\Armor\Leopard\Texture\Leopard_ext02_V1,0_M81.paa",
		"\Manticore_Vehicles\Armor\Leopard\Texture\Leopard_ext03_V1,0_M81.paa"
	};

	#include "ManticoreLeopardTextureSources.hpp"
};