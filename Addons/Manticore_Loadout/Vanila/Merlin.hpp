class Manticore_Loadout_Vanila_Merlin_unarmed : I_Heli_Transport_02_F
{
	displayName = "Merlin";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_Helipilot_F";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutBasicHeli.hpp"

	hiddenSelectionsTextures[] = {
		"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
		"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa",
		"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
		"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
	};

	class TextureSources

	{
		class AAF_Digital
		{
			displayName = "AAF Digital";
			textures[] =
			{
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
	};
	textureList[] = { "AAF_Digital",0 };
};