class LandVehicle;
class B_APC_Wheeled_01_cannon_F;

class Manticore_Vehicle_Badger_IFV : B_APC_Wheeled_01_cannon_F
{
	side = 1;
	scope = 2;
	crew = "B_crew_F";
	faction = "Manticore_Faction";
	displayName = "Badger IFV";
	hiddenSelections[] =
	{
		"Camo1", //Main Armor
		"Camo2", //details
		"Camo3"  //Gun Tower
	};

	class TransportItems
	{
		#include "StandardLoadout.hpp"
	};
	
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Vehicles\Armor\Badger_IFV\Texture\Badger_IFV_ext01_V1,1_M81.paa",
		"\Manticore_Vehicles\Armor\Badger_IFV\Texture\Badger_IFV_ext02_V1,0_M81.paa",
		"\Manticore_Vehicles\Armor\Badger_IFV\Texture\Badger_IFV_ext03_V1,0_M81.paa"
	};

	#include "ManticoreBadgerTextureSources.hpp"
};