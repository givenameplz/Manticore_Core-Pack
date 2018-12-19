class Manticore_Loadout_3CBVehicles_Merlin_HC4_18 : UK3CB_BAF_Merlin_HC4_18
{
	displayName = "Merlin HC4 18";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_Helipilot_F";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutTransportHeli.hpp"

	hiddenSelectionsTextures[] = {
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
	};

	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AAF Digital";
			textures[] =
			{
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Gray
		{
			displayName = "Gray";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"AAF_Digital",0,"bf_Gray",0 };
};
class Manticore_Loadout_3CBVehicles_Merlin_HC4_18_GPMG : UK3CB_BAF_Merlin_HC4_18_GPMG
{
	displayName = "Merlin HC4 18 GPMG";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_Helipilot_F";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutTransportHeli.hpp"

	hiddenSelectionsTextures[] = {
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
	};

	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AAF Digital";
			textures[] =
			{
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Gray
		{
			displayName = "Gray";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"AAF_Digital",0,"bf_Gray",0 };
};
class Manticore_Loadout_3CBVehicles_Merlin_HC4_24 : UK3CB_BAF_Merlin_HC4_24
{
	displayName = "Merlin HC4 24";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_Helipilot_F";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutTransportHeli.hpp"

	hiddenSelectionsTextures[] = {
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
	};

	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AAF Digital";
			textures[] =
			{
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Gray
		{
			displayName = "Gray";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"AAF_Digital",0,"bf_Gray",0 };
};
class Manticore_Loadout_3CBVehicles_Merlin_HC4_32 : UK3CB_BAF_Merlin_HC4_32
{
	displayName = "Merlin HC4 32";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_Helipilot_F";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutTransportHeli.hpp"

	hiddenSelectionsTextures[] = {
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
	};

	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AAF Digital";
			textures[] =
			{
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Gray
		{
			displayName = "Gray";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"AAF_Digital",0,"bf_Gray",0 };
};
class Manticore_Loadout_3CBVehicles_Merlin_Cargo : UK3CB_BAF_Merlin_HC4_Cargo
{
	displayName = "Merlin Cargo";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_Helipilot_F";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutTransportHeli.hpp"

	hiddenSelectionsTextures[] = {
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
	};

	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AAF Digital";
			textures[] =
			{
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Gray
		{
			displayName = "Gray";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"AAF_Digital",0,"bf_Gray",0 };
};
class Manticore_Loadout_3CBVehicles_Merlin_HC4_CSAR : UK3CB_BAF_Merlin_HC4_CSAR
{
	displayName = "Merlin HC4 CSAR";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_Helipilot_F";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutTransportHeli.hpp"

	hiddenSelectionsTextures[] = {
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
	};

	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AAF Digital";
			textures[] =
			{
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Gray
		{
			displayName = "Gray";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"AAF_Digital",0,"bf_Gray",0 };
};
class Manticore_Loadout_3CBVehicles_Merlin_HM2_18 : UK3CB_BAF_Merlin_HM2_18
{
	displayName = "Merlin HM2 18";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	crew = "B_Helipilot_F";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";

#include "../Loadout/LoadoutTransportHeli.hpp"

	hiddenSelectionsTextures[] = {
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
		"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
	};

	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc3_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class AAF_Digital
		{
			displayName = "AAF Digital";
			textures[] =
			{
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Gray
		{
			displayName = "Gray";
			textures[] =
			{
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_1_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_2_co.paa",
				"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Merlin\data\merlin_hc4_base_3_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"AAF_Digital",0,"bf_Gray",0 };
};