class Manticore_Loadout_Vanila_Wiesel2_Cannon : I_LT_01_cannon_F
{
	displayName = "Wiesel 2 (MK20)";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_crew_F";

	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutBasic.hpp"

	hiddenSelectionsTextures[] = { "A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa" };
	class TextureSources

	{
		class Olive
		{
			displayName = "Olive";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AFF Digital";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class AAF_Digital_D
		{
			displayName = "AFF Digital (Desert Camo Net)";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa","A3\armor_f\data\cage_G3_co.paa" };
			factions[] = { "Manticore_Faction" };
		};

		class AAF_Digital_J
		{
			displayName = "AFF Digital (Jungle Camo Net)";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa","A3\armor_f\data\cage_G1_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"bf_GreenBlack",0,"bf_Sand",0 };
};
class Manticore_Loadout_Vanila_Wiesel2_AT : I_LT_01_AT_F
{
	displayName = "Wiesel 2 (ATGM)";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_crew_F";

	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutBasic.hpp"

	hiddenSelectionsTextures[] = { "A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa" };
	class TextureSources

	{
		class Olive
		{
			displayName = "Olive";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AFF Digital";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class AAF_Digital_D
		{
			displayName = "AFF Digital (Desert Camo Net)";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa","A3\armor_f\data\cage_G3_co.paa" };
			factions[] = { "Manticore_Faction" };
		};

		class AAF_Digital_J
		{
			displayName = "AFF Digital (Jungle Camo Net)";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa","A3\armor_f\data\cage_G1_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"bf_GreenBlack",0,"bf_Sand",0 };
};
class Manticore_Loadout_Vanila_Wiesel2_Scout : I_LT_01_scout_F
{
	displayName = "Wiesel 2 (Scout)";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_crew_F";

	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutBasic.hpp"

	hiddenSelectionsTextures[] = { "A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa" };
	class TextureSources

	{
		class Olive
		{
			displayName = "Olive";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AFF Digital";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class AAF_Digital_D
		{
			displayName = "AFF Digital (Desert Camo Net)";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa","A3\armor_f\data\cage_G3_co.paa" };
			factions[] = { "Manticore_Faction" };
		};

		class AAF_Digital_J
		{
			displayName = "AFF Digital (Jungle Camo Net)";
			textures[] =
			{
				"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa","A3\armor_f\data\cage_G1_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"bf_GreenBlack",0,"bf_Sand",0 };
};