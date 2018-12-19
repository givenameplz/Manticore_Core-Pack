class Manticore_Loadout_Vanila_Wildcat_unarmed : I_Heli_light_03_unarmed_F
{
	displayName = "Wildcat Transport";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_Helipilot_F";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutBasicHeli.hpp"


	hiddenSelectionsTextures[] = { "\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa" };

	class TextureSources

	{
		class Green
		{
			displayName = "Green";
			textures[] =
			{
				"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AAF Digital";
			textures[] =
			{
				"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_INDP_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Gray
		{
			displayName = "Gray";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Wildcat\data\wildcat_base_baf_grey_army_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "Green",0,"AAF_Digital",0,"bf_Gray",0 };
};
class Manticore_Loadout_Vanila_Wildcat_dynamicLoadout : I_Heli_light_03_dynamicLoadout_F
{
	displayName = "Wildcat DynamicLoadout";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_Helipilot_F";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutBasicHeli.hpp"

	hiddenSelectionsTextures[] = { "\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa" };

	class TextureSources

	{
		class Green
		{
			displayName = "Green";
			textures[] =
			{
				"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AAF Digital";
			textures[] =
			{
				"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_INDP_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Gray
		{
			displayName = "Gray";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Wildcat\data\wildcat_base_baf_grey_army_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "Green",0,"AAF_Digital",0,"bf_Gray",0 };
};