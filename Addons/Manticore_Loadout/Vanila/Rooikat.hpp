class Manticore_Loadout_Vanila_Rooikat : B_AFV_Wheeled_01_cannon_F
{
	displayName = "Rooikat 120";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

	#include "../Loadout/LoadoutBasic.hpp"

	hiddenSelectionsTextures[] =
	{
		"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa" 
	};
	class TextureSources
	{
		class Olive
		{
			displayName = "Olive";
			textures[] =
			{
				"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};
		class Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "Olive",0,"Sand",0 };
};
class Manticore_Loadout_Vanila_Rooikat_UP : B_AFV_Wheeled_01_up_cannon_F
{
	displayName = "Rooikat 120 UP";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic.hpp"

	hiddenSelectionsTextures[] =
	{
		"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa" 
	};
	class TextureSources
	{
		class Olive
		{
			displayName = "Olive";
			textures[] =
			{
				"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};
		class Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_sand_CO.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "Olive",0,"Sand",0 };
};