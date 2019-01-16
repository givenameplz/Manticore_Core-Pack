class CfgPatches
{
	class Manticore_Vanilla_Heli
	{
		addonRootClass = "Manticore_Vanilla";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Vanilla",
			"A3_Air_F_EPB_Heli_Light_03",
			"A3_Air_F_Beta_Heli_Transport_02",
			"A3_Air_F_Heli_Light_01"
		};
	};
};

class CfgVehicles
{
	class B_Heli_Light_01_dynamicLoadout_F;
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_stripped_F;
	class I_Heli_Transport_02_F;
	class I_Heli_light_03_unarmed_F;
	class I_Heli_light_03_dynamicLoadout_F;

	class Manticore_Vanilla_Heli_AH6 : B_Heli_Light_01_dynamicLoadout_F
	{
		displayName = "AH-6";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";
	};
	class Manticore_Vanilla_Heli_MH6 : B_Heli_Light_01_F
	{
		displayName = "MH-6";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";
	};
	class Manticore_Vanilla_Heli_MH6_Stripped : B_Heli_Light_01_stripped_F
	{
		displayName = "MH-6 (Stripped)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";
	};
	class Manticore_Vanilla_Heli_Merlin : I_Heli_Transport_02_F
	{
		displayName = "Merlin";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";


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
	class Manticore_Vanilla_Heli_Wildcat : I_Heli_light_03_unarmed_F
	{
		displayName = "Wildcat Transport";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";

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
	class Manticore_Vanilla_Heli_Wildcat_dynamicLoadout : I_Heli_light_03_dynamicLoadout_F
	{
		displayName = "Wildcat DynamicLoadout";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";

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
};